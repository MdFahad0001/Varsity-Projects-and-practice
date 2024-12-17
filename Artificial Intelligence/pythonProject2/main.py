import speech_recognition as sr
import pyttsx3

# Initialize the recognizer and engine
r = sr.Recognizer()
engine = pyttsx3.init()


# Define a function to speak the given text
def speak(text):
    engine.say(text)
    engine.runAndWait()


# Define a function to recognize speech and return the text
def recognize_speech():
    with sr.Microphone() as source:
        # Adjust for ambient noise
        r.adjust_for_ambient_noise(source)

        # Listen for user input
        audio = r.listen(source)

        # Recognize speech using Google Speech Recognition
        try:
            text = r.recognize_google(audio)
            return text.lower()
        except sr.UnknownValueError:
            speak("Sorry, I didn't understand that.")
        except sr.RequestError:
            speak("Sorry, there was an error processing your request.")


# Define a function to handle voice commands
def handle_command(command):
    if "hello" in command:
        speak("Hello! How can I help you?")
    elif "what is the time" in command:
        # TODO: Implement time lookup
        speak("Sorry, I don't know the time yet.")
    elif "what is your name" in command:
        # TODO: Implement time lookup
        speak("My name is EDITH.")
    elif "what is the weather" in command:
        # TODO: Implement weather lookup
        speak("Sorry, I don't know the weather yet.")
    elif "what is name of your department" in command:
        speak("Your department name is Computer Science & Engineering.")
    elif "Name of all member of ALIBABA team." in command:
        speak("My boss is Aryan, Hakim, Emtiaz, Fahaaad.")
    elif "who is your Teacher" in command:
        speak("Her name is Arifur Rahaman.")
    elif "goodbye" in command:
        speak("Goodbye!")
        exit()
    else:
        speak("Sorry, I didn't understand that command.")


# Start the voice assistant
speak("Hello! How can I help you?")
while True:
    command = recognize_speech()
    if command:
        handle_command(command)
