#!/usr/bin/python3
import smtplib
 
# creates SMTP session
s = smtplib.SMTP('smtp.gmail.com', 587)
 
# start TLS for security
s.starttls()
 
# Authentication
s.login("mahalakshmir555@gmail.com", "omshakthi")
 
# message to be sent
message = "hello"
 
# sending the mail
s.sendmail("mahalakshmir555@gmail", "mahalakshmir555@gmail", message)
 
# terminating the session
s.quit()

