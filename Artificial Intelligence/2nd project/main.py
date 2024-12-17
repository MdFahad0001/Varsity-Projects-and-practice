import speech_recognition as sr
import pyttsx3

r = sr.Recognizer()
engine = pyttsx3.init()


def listen():
    with sr.Microphone() as source:
        print("Speak now")
        audio = r.listen(source)
        try:
            command = r.recognize_google(audio)
            print("You said: " + command)
            engine.say("You said: " + command)
            engine.runAndWait()
        except:
            print("Sorry, I did not understand.")
            engine.say("Sorry, I did not understand.")
            engine.runAndWait()

while True:
    listen()
