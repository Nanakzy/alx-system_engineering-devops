#!/usr/bin/python3
""" number_of_subscribers function """

import requests


def number_of_subscribers(subreddit):
    """ Function that queries the Reddit Api """
    req = requests.get(
        "https://www.reddit.com/r/{}/about.json".format(subreddit),
        headers={"User-Agent": "Custom"},
    )

    if req.status_code == 200:
        return req.json().get("data").get("subscribers")
    else:
        return 0
