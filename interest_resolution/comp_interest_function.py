#!/usr/bin/python3


def compound_interest(principal, rate, years):

    rate = (rate / 100)
    for year in range(1, (years + 1)):
        amount = (principal * ((1 + rate) ** year))
        print(f'{year:>2d}{amount:>10.2f}')
