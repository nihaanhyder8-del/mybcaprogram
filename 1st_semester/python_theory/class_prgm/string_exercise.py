#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-9876543210
"""
print("==========================================\n")
print(" profile card\n")
print("===========================================\n")
name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print("name   :",name.strip().lower().title().replace("   "," "))
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
print("initials:",initials)
print("email  :",email.lower())
domain=email.split("@")[1].lower()
print("domain :",domain)
print("phone  :",phone.replace("-",""))
print("valid  :",len(phone.replace("-",""))==13)

