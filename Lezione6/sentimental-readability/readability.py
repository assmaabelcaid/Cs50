# TODO

from cs50 import get_string

testo = get_string("test: ")
lettere = 0
parole = 1
frasi = 0

for i in testo:
    if i.isalpha():
        lettere += 1
    elif i == " ":
        parole += 1
    elif i == "." or i == "!" or i == "?":
        frasi += 1

indice = 0.0588 * (lettere/parole*100) - 0.296 * (frasi/parole*100) - 15.8

if indice < 1:
    print("Before Grade 1...")
elif indice >= 16:
    print("Grade 16+")
else:
    print("Grade ", round(indice))