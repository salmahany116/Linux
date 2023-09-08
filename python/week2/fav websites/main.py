import firelink
print("choose one of the websites you want")
print(list(firelink.webs.keys()))
x=input().lower()
firelink.firefox(firelink.webs[x])
