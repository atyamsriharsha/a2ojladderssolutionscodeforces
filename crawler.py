import random
import requests
from bs4 import BeautifulSoup
import os
import webbrowser
import urllib2
import re
users_list = ['kailash']

def get_submitted_questions(user_name,number_of_pages):
	temp_number_of_pages=0
	while temp_number_of_pages!=number_of_pages:
		temp_number_of_pages=temp_number_of_pages+1
		url ='codeforces.com/submissions/'+str(a)+'/page'+str(temp_number_of_pages)
		Request =urllib2.Request(url)
		Request.add_header('User-agent','Mozilla 5.10')
		html =urllib2.urlopen(Request).read()
		soup = BeautifulSoup(html)
		

