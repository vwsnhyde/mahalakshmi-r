# importing the module
import tweepy
 
# personal information
consumer_key ="7688979146"
consumer_secret ="r9934816772"
access_token ="priyavatsyap@gmail.com"
access_token_secret ="r9934816772"
 
# authentication
auth = tweepy.OAuthHandler(7688979146, r9934816772)
auth.set_access_token(priyavatsyap@gmail.com, r9934816772)
  
api = tweepy.API(auth)
tweet ="Text part of the tweet"
import os
import time
import tweepy


a=1
b=1

while a<15:
	img="fswebcam -F 3 --fps 25 -r 800x600 " + str(b)+".jpg"
	os.system(img)
	time.sleep(10)
	a=a+1
	b=b+1
 
# to attach the media file
status = api.update_with_media(image_path, tweet) 
api.update_status(status = tweet)

