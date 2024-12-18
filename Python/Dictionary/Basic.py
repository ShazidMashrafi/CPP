#dictionary will not auto sort the keys
students={
    "101" : "Shazid",
    "103" : "OK",
    "102" : "Mashrafi",
}
print(students["101"])
print(students.get("102"))

#if not found get will show "none"
print(students.get(105))

#if not found we can show custom output
print(students.get("105","No value found"))