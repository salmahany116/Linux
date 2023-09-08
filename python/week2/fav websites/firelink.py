import webbrowser
webs={
'facebook':'https://www.facebook.com/',
'twitter':'https://twitter.com/home?lang=en',
'youtube':'https://www.youtube.com/',
'linkedin':'https://www.linkedin.com/feed/',
'messanger':'https://www.messenger.com/'
}

def firefox(link):
    webbrowser.open(link)
