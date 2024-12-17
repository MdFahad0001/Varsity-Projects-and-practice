import speech_recognition as sr
import pyttsx3
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

# Initialize the Text-to-Speech engine
engine = pyttsx3.init()

# Initialize the Speech Recognition engine
recognizer = sr.Recognizer()

# Function to get user speech input
def listen():
    with sr.Microphone() as source:
        print("Listening...")
        recognizer.adjust_for_ambient_noise(source, duration=1)  # Adjust for ambient noise
        audio = recognizer.listen(source)

    try:
        print("Recognizing...")
        user_input = recognizer.recognize_google(audio)
        print(f"You said: {user_input}")
        return user_input
    except sr.UnknownValueError:
        print("Sorry, I couldn't understand what you said.")
        return ""
    except sr.RequestError as e:
        print(f"Sorry, there was an error with the speech recognition service: {e}")
        return ""

# Function to make the AI talk
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Function to perform a web search
def perform_web_search(query):
    try:
        # Initialize the browser (You need to install the appropriate browser driver - e.g., ChromeDriver)
        browser = webdriver.Chrome()
        browser.get("https://www.google.com")
        search_box = browser.find_element_by_name("q")
        search_box.send_keys(query)
        search_box.send_keys(Keys.RETURN)
    except Exception as e:
        print(f"An error occurred while performing the search: {e}")
    finally:
        browser.quit()

# Main loop
if __name__ == "__main__":
    speak("Hello Sir! I am your Jarvis assistant. How can I help you today?")
    while True:
        user_input = listen().lower()

        if "search" in user_input:
            search_query = user_input.replace("search", "").strip()
            speak(f"Searching for {search_query} on the web.")
            perform_web_search(search_query)

        elif "exit" in user_input or "quit" in user_input:
            speak("Goodbye!")
            break

        else:
            speak("Sorry, I can't perform that action. Please try again.")
