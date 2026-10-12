# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7F5RDQE%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEy8eMCf%2BBp03GrvoqDLHbS9LBRY7HCTL39Q4Z6aUlMQAiBgJXSiQ68T9rph%2FOzSQ11JtJXctLh46f8KRlCGhP26PSqIBAiJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMIM5lJ0HLI8TmBWuaKtwD9Bqbsf6bNfnEBDnqU5SF4w1ZV1Vh3SU7EBSZiGB%2Fg9%2FjDr6D4qtwFV6i6BYkE3RKKk3vMiw5ZFLWDElpBVrqMmhr2rHelkaK1j1hh8KUVJ%2FM2KGHAWQ7PRH6I0q3VZP8IuxH9oFGKzBty7xaD3QjFibUF71fpOTdFn9CfjONhgCe5o0xlqRmY4UvYdyhFetLcMyP4%2BoZdCeCF3%2FhgFl5lTGivJpcM8G3kR%2BRce2WMu%2FOEFzOfNQth8zs8IjfsClIwiS8NfZ9RCqkuVIh32pLZJLVl42p6EfMiPG1xz537Pyfsr9F8tzMR%2F34ZduRi0eqRRJd5QjY2ZSXtH78IKhp3z48u7lrhhKR21MLaTrXuSjGY0TUJdwS3VocadXwZLzLSxl2hqfCqAiyB3jSHOgg%2Bs1oAX1cOQD9dGJ1cSployRN3o3Q8U4pRPLtDSSEmQMPf0XNXjlDHbNwG5%2FJod8j3Z2jBC3ydMbWAn%2Fhf%2FvpdlQd0h6G6onS%2BlD3g6fHIF7Ebkxe%2F9Wn63dLYP17Gpj64A9T97UYtwhAy5pmxaWBgG9%2FIg2Vd7TEAOW%2BpNGaF%2B2q2z9rAlXaTmEm5Rx8nqPfc5nd02Bvj2WzDhtYwVhA1U8A5Z9tHHk9Vv2%2B5Ocw35i01gY6pgHU5q032EsJh9WnWbmQCdMotKuT%2B3%2FZ7PeYJJ39HZBYk9Ft6nNzg%2BBgjnnUYqI2O2zccaN0Yku7Z%2FTE329gxafk8UTYZ0it%2FyZyUv5NYfP9PRS3fWd%2FbFSeVbaUp3IsnVTZ5MaRLeTlgoI6TKMnMwhl5DJUR%2BGf0uSRYxRkZa5iY%2FxUd6r9aCij1ZSuYuzC4fPPIA2ciVKssq3Pyc0DnZ%2Fm8ZiK86u%2F&X-Amz-Signature=8900fdbd3e16bdd67554e333c0d6f14be54c3b3f0c9597b11a1fa1a89d0678d5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7F5RDQE%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEy8eMCf%2BBp03GrvoqDLHbS9LBRY7HCTL39Q4Z6aUlMQAiBgJXSiQ68T9rph%2FOzSQ11JtJXctLh46f8KRlCGhP26PSqIBAiJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMIM5lJ0HLI8TmBWuaKtwD9Bqbsf6bNfnEBDnqU5SF4w1ZV1Vh3SU7EBSZiGB%2Fg9%2FjDr6D4qtwFV6i6BYkE3RKKk3vMiw5ZFLWDElpBVrqMmhr2rHelkaK1j1hh8KUVJ%2FM2KGHAWQ7PRH6I0q3VZP8IuxH9oFGKzBty7xaD3QjFibUF71fpOTdFn9CfjONhgCe5o0xlqRmY4UvYdyhFetLcMyP4%2BoZdCeCF3%2FhgFl5lTGivJpcM8G3kR%2BRce2WMu%2FOEFzOfNQth8zs8IjfsClIwiS8NfZ9RCqkuVIh32pLZJLVl42p6EfMiPG1xz537Pyfsr9F8tzMR%2F34ZduRi0eqRRJd5QjY2ZSXtH78IKhp3z48u7lrhhKR21MLaTrXuSjGY0TUJdwS3VocadXwZLzLSxl2hqfCqAiyB3jSHOgg%2Bs1oAX1cOQD9dGJ1cSployRN3o3Q8U4pRPLtDSSEmQMPf0XNXjlDHbNwG5%2FJod8j3Z2jBC3ydMbWAn%2Fhf%2FvpdlQd0h6G6onS%2BlD3g6fHIF7Ebkxe%2F9Wn63dLYP17Gpj64A9T97UYtwhAy5pmxaWBgG9%2FIg2Vd7TEAOW%2BpNGaF%2B2q2z9rAlXaTmEm5Rx8nqPfc5nd02Bvj2WzDhtYwVhA1U8A5Z9tHHk9Vv2%2B5Ocw35i01gY6pgHU5q032EsJh9WnWbmQCdMotKuT%2B3%2FZ7PeYJJ39HZBYk9Ft6nNzg%2BBgjnnUYqI2O2zccaN0Yku7Z%2FTE329gxafk8UTYZ0it%2FyZyUv5NYfP9PRS3fWd%2FbFSeVbaUp3IsnVTZ5MaRLeTlgoI6TKMnMwhl5DJUR%2BGf0uSRYxRkZa5iY%2FxUd6r9aCij1ZSuYuzC4fPPIA2ciVKssq3Pyc0DnZ%2Fm8ZiK86u%2F&X-Amz-Signature=d221fea4be424681260c79916e4d5959c6679156339b36de81b41e2c90465b42&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7F5RDQE%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEy8eMCf%2BBp03GrvoqDLHbS9LBRY7HCTL39Q4Z6aUlMQAiBgJXSiQ68T9rph%2FOzSQ11JtJXctLh46f8KRlCGhP26PSqIBAiJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMIM5lJ0HLI8TmBWuaKtwD9Bqbsf6bNfnEBDnqU5SF4w1ZV1Vh3SU7EBSZiGB%2Fg9%2FjDr6D4qtwFV6i6BYkE3RKKk3vMiw5ZFLWDElpBVrqMmhr2rHelkaK1j1hh8KUVJ%2FM2KGHAWQ7PRH6I0q3VZP8IuxH9oFGKzBty7xaD3QjFibUF71fpOTdFn9CfjONhgCe5o0xlqRmY4UvYdyhFetLcMyP4%2BoZdCeCF3%2FhgFl5lTGivJpcM8G3kR%2BRce2WMu%2FOEFzOfNQth8zs8IjfsClIwiS8NfZ9RCqkuVIh32pLZJLVl42p6EfMiPG1xz537Pyfsr9F8tzMR%2F34ZduRi0eqRRJd5QjY2ZSXtH78IKhp3z48u7lrhhKR21MLaTrXuSjGY0TUJdwS3VocadXwZLzLSxl2hqfCqAiyB3jSHOgg%2Bs1oAX1cOQD9dGJ1cSployRN3o3Q8U4pRPLtDSSEmQMPf0XNXjlDHbNwG5%2FJod8j3Z2jBC3ydMbWAn%2Fhf%2FvpdlQd0h6G6onS%2BlD3g6fHIF7Ebkxe%2F9Wn63dLYP17Gpj64A9T97UYtwhAy5pmxaWBgG9%2FIg2Vd7TEAOW%2BpNGaF%2B2q2z9rAlXaTmEm5Rx8nqPfc5nd02Bvj2WzDhtYwVhA1U8A5Z9tHHk9Vv2%2B5Ocw35i01gY6pgHU5q032EsJh9WnWbmQCdMotKuT%2B3%2FZ7PeYJJ39HZBYk9Ft6nNzg%2BBgjnnUYqI2O2zccaN0Yku7Z%2FTE329gxafk8UTYZ0it%2FyZyUv5NYfP9PRS3fWd%2FbFSeVbaUp3IsnVTZ5MaRLeTlgoI6TKMnMwhl5DJUR%2BGf0uSRYxRkZa5iY%2FxUd6r9aCij1ZSuYuzC4fPPIA2ciVKssq3Pyc0DnZ%2Fm8ZiK86u%2F&X-Amz-Signature=64e5c3d8eae2c320ddee603acfa21c76667bf2fd2820b6457c4d870c538d48ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YCJ7PADR%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAuRMhCbbmrGc%2FkpK5jJKBgUFr%2FrYU0yG%2BbEFeETY1phAiEAnREoojOM%2B%2Be9Kp6ro0zLHMWQPHuE%2Bm%2FK%2FpOWMOUgBjMqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM6GR25xmhxEeXb42SrcA1gfry9tDPEP%2BCDQ7WxQC5B5DhnAw7g1mCPQBsdDwuSnO5WpEHw706fECGvAD6A9hslGVaKJf59PzmOFXb5ivp8Yo9acBgZIDhFGzSR%2BgPSZ8YeaOLJdwip0GliAC51q6Pf5SilmwkL8txByCrnIaG3QXB9gwyGKibD2QuxbPfuNMLIRtPB8U%2FRH6dzXJFDAZCt%2FEexL%2FjGKK87dy0NW6RIBdS0qPyCB4nPibMyWwRbhalydpkPokVDSAMif1ThkBPE8cNUqzQDjHymmjb3X8SarxZmyzH4wTqvXgxLUHmGG%2FpYaYJbFAFliKjI28j1kugAsaCYGocLUoGhwHmWdC633%2F9QhTiwL36ISK0u2hA2pNFPHOCJATqoNqhHOm4h0bfThR%2F7bzC9Mcwib2izRY8k%2Fs9bLImOcF5a8TIf%2BgghHwITVEhHJBSBmXQYh2yhnNCf7NwDCvi0quWcteVsbLmK9bEXvjvOh6FD65SzWEnXWHBc9EiuR1KRbTvQ8WulvvfYchYElkvzTJhxWlkdVfoqsnHRFpiU8Kvi7QfGG3xClRielRmPIQC29%2BwqbmHFfV3XmdDMSwVNC9N%2B%2FKl9cPWgS85F9gAKfEq3izLRiGiO%2Fx4gbyrYJ%2Bu0HmjOxMMuZtNYGOqUBASo067tOnp03Bj1nLrHq05LUV1%2BZuVrX3%2FQOBxPrms5yQgVUKOvFjVBsl3hsjRlOG2rr80w5ZhhPzHmfZTi08awM3tST4H1QoQGE2P3Pyi0%2FNzQsb62IF9PzE9adKyXPdX%2F6meea3AO9dzvpyMCq1PlQmdBdCWoTpbyhDxKBFKgUpc3iaX9C6bLtUi9kt9JiAy0MOrOwITr5QWmYS3Hgq2QHyoXW&X-Amz-Signature=e399c91ab9c9502622da8fe6d512d1225df407852c202e8443bce5022a888983&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YCJ7PADR%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAuRMhCbbmrGc%2FkpK5jJKBgUFr%2FrYU0yG%2BbEFeETY1phAiEAnREoojOM%2B%2Be9Kp6ro0zLHMWQPHuE%2Bm%2FK%2FpOWMOUgBjMqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM6GR25xmhxEeXb42SrcA1gfry9tDPEP%2BCDQ7WxQC5B5DhnAw7g1mCPQBsdDwuSnO5WpEHw706fECGvAD6A9hslGVaKJf59PzmOFXb5ivp8Yo9acBgZIDhFGzSR%2BgPSZ8YeaOLJdwip0GliAC51q6Pf5SilmwkL8txByCrnIaG3QXB9gwyGKibD2QuxbPfuNMLIRtPB8U%2FRH6dzXJFDAZCt%2FEexL%2FjGKK87dy0NW6RIBdS0qPyCB4nPibMyWwRbhalydpkPokVDSAMif1ThkBPE8cNUqzQDjHymmjb3X8SarxZmyzH4wTqvXgxLUHmGG%2FpYaYJbFAFliKjI28j1kugAsaCYGocLUoGhwHmWdC633%2F9QhTiwL36ISK0u2hA2pNFPHOCJATqoNqhHOm4h0bfThR%2F7bzC9Mcwib2izRY8k%2Fs9bLImOcF5a8TIf%2BgghHwITVEhHJBSBmXQYh2yhnNCf7NwDCvi0quWcteVsbLmK9bEXvjvOh6FD65SzWEnXWHBc9EiuR1KRbTvQ8WulvvfYchYElkvzTJhxWlkdVfoqsnHRFpiU8Kvi7QfGG3xClRielRmPIQC29%2BwqbmHFfV3XmdDMSwVNC9N%2B%2FKl9cPWgS85F9gAKfEq3izLRiGiO%2Fx4gbyrYJ%2Bu0HmjOxMMuZtNYGOqUBASo067tOnp03Bj1nLrHq05LUV1%2BZuVrX3%2FQOBxPrms5yQgVUKOvFjVBsl3hsjRlOG2rr80w5ZhhPzHmfZTi08awM3tST4H1QoQGE2P3Pyi0%2FNzQsb62IF9PzE9adKyXPdX%2F6meea3AO9dzvpyMCq1PlQmdBdCWoTpbyhDxKBFKgUpc3iaX9C6bLtUi9kt9JiAy0MOrOwITr5QWmYS3Hgq2QHyoXW&X-Amz-Signature=0903f68b44be47bda158986a1cb3bec702b7ca578d104957443ed6a5f886c7b7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YCJ7PADR%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAuRMhCbbmrGc%2FkpK5jJKBgUFr%2FrYU0yG%2BbEFeETY1phAiEAnREoojOM%2B%2Be9Kp6ro0zLHMWQPHuE%2Bm%2FK%2FpOWMOUgBjMqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM6GR25xmhxEeXb42SrcA1gfry9tDPEP%2BCDQ7WxQC5B5DhnAw7g1mCPQBsdDwuSnO5WpEHw706fECGvAD6A9hslGVaKJf59PzmOFXb5ivp8Yo9acBgZIDhFGzSR%2BgPSZ8YeaOLJdwip0GliAC51q6Pf5SilmwkL8txByCrnIaG3QXB9gwyGKibD2QuxbPfuNMLIRtPB8U%2FRH6dzXJFDAZCt%2FEexL%2FjGKK87dy0NW6RIBdS0qPyCB4nPibMyWwRbhalydpkPokVDSAMif1ThkBPE8cNUqzQDjHymmjb3X8SarxZmyzH4wTqvXgxLUHmGG%2FpYaYJbFAFliKjI28j1kugAsaCYGocLUoGhwHmWdC633%2F9QhTiwL36ISK0u2hA2pNFPHOCJATqoNqhHOm4h0bfThR%2F7bzC9Mcwib2izRY8k%2Fs9bLImOcF5a8TIf%2BgghHwITVEhHJBSBmXQYh2yhnNCf7NwDCvi0quWcteVsbLmK9bEXvjvOh6FD65SzWEnXWHBc9EiuR1KRbTvQ8WulvvfYchYElkvzTJhxWlkdVfoqsnHRFpiU8Kvi7QfGG3xClRielRmPIQC29%2BwqbmHFfV3XmdDMSwVNC9N%2B%2FKl9cPWgS85F9gAKfEq3izLRiGiO%2Fx4gbyrYJ%2Bu0HmjOxMMuZtNYGOqUBASo067tOnp03Bj1nLrHq05LUV1%2BZuVrX3%2FQOBxPrms5yQgVUKOvFjVBsl3hsjRlOG2rr80w5ZhhPzHmfZTi08awM3tST4H1QoQGE2P3Pyi0%2FNzQsb62IF9PzE9adKyXPdX%2F6meea3AO9dzvpyMCq1PlQmdBdCWoTpbyhDxKBFKgUpc3iaX9C6bLtUi9kt9JiAy0MOrOwITr5QWmYS3Hgq2QHyoXW&X-Amz-Signature=6bacf7c416fbcc7ee213efcc6a61b9e1336969442f75aaf5349e253dd83d2221&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YCJ7PADR%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172351Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAuRMhCbbmrGc%2FkpK5jJKBgUFr%2FrYU0yG%2BbEFeETY1phAiEAnREoojOM%2B%2Be9Kp6ro0zLHMWQPHuE%2Bm%2FK%2FpOWMOUgBjMqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDM6GR25xmhxEeXb42SrcA1gfry9tDPEP%2BCDQ7WxQC5B5DhnAw7g1mCPQBsdDwuSnO5WpEHw706fECGvAD6A9hslGVaKJf59PzmOFXb5ivp8Yo9acBgZIDhFGzSR%2BgPSZ8YeaOLJdwip0GliAC51q6Pf5SilmwkL8txByCrnIaG3QXB9gwyGKibD2QuxbPfuNMLIRtPB8U%2FRH6dzXJFDAZCt%2FEexL%2FjGKK87dy0NW6RIBdS0qPyCB4nPibMyWwRbhalydpkPokVDSAMif1ThkBPE8cNUqzQDjHymmjb3X8SarxZmyzH4wTqvXgxLUHmGG%2FpYaYJbFAFliKjI28j1kugAsaCYGocLUoGhwHmWdC633%2F9QhTiwL36ISK0u2hA2pNFPHOCJATqoNqhHOm4h0bfThR%2F7bzC9Mcwib2izRY8k%2Fs9bLImOcF5a8TIf%2BgghHwITVEhHJBSBmXQYh2yhnNCf7NwDCvi0quWcteVsbLmK9bEXvjvOh6FD65SzWEnXWHBc9EiuR1KRbTvQ8WulvvfYchYElkvzTJhxWlkdVfoqsnHRFpiU8Kvi7QfGG3xClRielRmPIQC29%2BwqbmHFfV3XmdDMSwVNC9N%2B%2FKl9cPWgS85F9gAKfEq3izLRiGiO%2Fx4gbyrYJ%2Bu0HmjOxMMuZtNYGOqUBASo067tOnp03Bj1nLrHq05LUV1%2BZuVrX3%2FQOBxPrms5yQgVUKOvFjVBsl3hsjRlOG2rr80w5ZhhPzHmfZTi08awM3tST4H1QoQGE2P3Pyi0%2FNzQsb62IF9PzE9adKyXPdX%2F6meea3AO9dzvpyMCq1PlQmdBdCWoTpbyhDxKBFKgUpc3iaX9C6bLtUi9kt9JiAy0MOrOwITr5QWmYS3Hgq2QHyoXW&X-Amz-Signature=f9ef0b49452ba21c994c49bab39761f345f3bedc9daabd63c7dccdad608f0dfa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WWADOEPD%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEuBulxDWByIQEq%2FtT2cMk%2F7R8E7w%2FWkr7HF8If73ncXAiA0fJrYvL9%2B%2BVO%2BVaKQisjah54qMq6vaYZLz65N4uFeOyqIBAiJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM25DERV9CuPbf8WbmKtwDzr42o50wSytD7I46MQwICjnNpMx9m6358sKOHprxP7jc91TTEq81yPgUwnCFQqhP9bIb1w1VBH%2FWYvup3LRuME2FMB5b8pWGfuy4DKbR7opxcW3Cs%2FamN7D25Mv5QP3z5FTa6dPIFVlaEn00Eq5aDEqrNNB6O6NJpl2JGmse%2BwYFq2iTNfgqW7w2sfIhQbrnAQ5KY%2BwJEHStufQvbHt8VW152OK2Cc87DWGKh6eHFnj0o9ihTa1mimHHnyKQmgVoHKG2DE9Af6ISn4YLLzH0s0yiu5ZosilusULlIOo5a0A54hUbqhjwSLZEyIIXZANv%2F48nUwf%2BXy4eNytKZQUA6putilZFCboelQnoPhBE2sNtqfjCXmMS6G%2FD3cQYLbbBqy8dXHJXvljcyEDa5T%2FMKKLVElR75WbG4ppcNBEghBzYAlBA2xJK7hlD66YoQw3PdCv4KZN6y9PBE5TulGu%2FzXTCFuUcA%2FWtt9asEnl3DMGgGwNQR7W5AY7Wf3jiEQVf1kL7s2xC6CttLO%2F7P0DD3qprr4jhygN%2F6MxTpBZsTcdzYqhURE034fShtaumxYWReB2xslWcnrg5fA7vbCxXEu28XW9Ne1fDP%2FeLDeDTo7oa7k3FqB2Qm0zkkbgwqpu01gY6pgER6arJbIPr7hbRqSmOwQrReEkNagKTQ%2FUp%2BojdRsPg9OCL1lwJTHDpKFT%2F7VvIbFMPTcj6D%2FNpphTO2rucmgfRArawhYPbdN7ArWXqWpADIJ0BNU7r8yZqKmFLBmOdKD1O0qbxwL2VrJmgbt3pXol9uIhZUEMhBZwSwaG2uj40IMvkbukekcCxczT%2BULQYGLIyiDUaJ1CcKJJUZsNUKi8oyrc5PkDI&X-Amz-Signature=769112a788a69a4a64689ff871e308d5d3a789e28de8748d032dfef5daa888ab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VFHXWYNQ%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsohbjtlGP%2BVgwqAmxeJF7mydPWyETGM31Li23DsKrmgIhAIykQvo%2F9OYSgVLN8sNj6gPQO3uKLfRCM6X6GvXGFeq%2FKogECIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyEMpE%2BarUXWQS%2BCgAq3AN2cfRVUb7Y9iMdiSm98PnviY6uroP4wePV0xrQPF2ErT8NP7vYF0Rph1y%2BknMsi9sOgTfD2RW6Fb%2B%2BaZCyDprgLO6%2BO5JZkUbsUgRK2Aeu%2FCFgUiPndALptfVkmZdpIeXrdxd7VdqUa190OKF2PKRMq4qXf5MkKJaYxPqEeOV3JLagE6PDx72blIF21vpcnkB7nt2McrOW6S6LkeUMePO%2FUXDOk%2B0FewKjB2ZA7vfVLN7KqL680YbLqd7Mq0iVp7BEfGweBCho7cg76YON2%2FlVeblR8c6%2B3AkB17tMBpo38935WPEwNVbwdngyEtgC7qSkGO68njjU8oaxY0%2F8W%2FgQCMLxi6ituW%2BOBuWRVLRqsT9yBYVTTroES11uDPyPO0DhTa0kRSmDRlyLezmMoaC2VD22Pr0oOIjEYYl5%2F1vmBVjHVUFOJ6o1ZnEZ6o0IUWz9ktd8mK2qKz7zEyuVGM29tVza%2FX8VWr0NxXjUjDbAzEyNnePJRFOAsi4HN1bgi4xJS9MzKYNa%2BXn2REhzdIje37Qa8gvC3fuJaDPq71bVz6I0YcCBDen4VfC63OV7vW%2BbyWRxVvkVcXGVXXux%2BPn0vciOMHi9TyaQAko6x7611UvLKkHNYe5swwHO9TCwmLTWBjqkAbwnkuOOrx8ObEUOgEpg77OV5V1fR4QYMq%2Bkgwppe%2F9A23A3ag2teK5H0kPGfdS0shW4TmmVzdRgpUss7qTuSAUEp04MowqgPLNBuAw7Krz1dfIrpZ71W6P227hxyymlS%2F%2BxW812NrLxfBzIsjBL2YqjJTBbM%2FLmCL3Q3AT9JAdlj3VQ4ti1MQbYpTGlEKCM3cELxn8OPVt6RIvlaEtLiHpZFCMJ&X-Amz-Signature=f85bd28fe416617f674f99c7b41675f4c5ad8e2a87e90ee0bb9d2f2c4396ba4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VFHXWYNQ%2F20261012%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261012T172352Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsohbjtlGP%2BVgwqAmxeJF7mydPWyETGM31Li23DsKrmgIhAIykQvo%2F9OYSgVLN8sNj6gPQO3uKLfRCM6X6GvXGFeq%2FKogECIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyEMpE%2BarUXWQS%2BCgAq3AN2cfRVUb7Y9iMdiSm98PnviY6uroP4wePV0xrQPF2ErT8NP7vYF0Rph1y%2BknMsi9sOgTfD2RW6Fb%2B%2BaZCyDprgLO6%2BO5JZkUbsUgRK2Aeu%2FCFgUiPndALptfVkmZdpIeXrdxd7VdqUa190OKF2PKRMq4qXf5MkKJaYxPqEeOV3JLagE6PDx72blIF21vpcnkB7nt2McrOW6S6LkeUMePO%2FUXDOk%2B0FewKjB2ZA7vfVLN7KqL680YbLqd7Mq0iVp7BEfGweBCho7cg76YON2%2FlVeblR8c6%2B3AkB17tMBpo38935WPEwNVbwdngyEtgC7qSkGO68njjU8oaxY0%2F8W%2FgQCMLxi6ituW%2BOBuWRVLRqsT9yBYVTTroES11uDPyPO0DhTa0kRSmDRlyLezmMoaC2VD22Pr0oOIjEYYl5%2F1vmBVjHVUFOJ6o1ZnEZ6o0IUWz9ktd8mK2qKz7zEyuVGM29tVza%2FX8VWr0NxXjUjDbAzEyNnePJRFOAsi4HN1bgi4xJS9MzKYNa%2BXn2REhzdIje37Qa8gvC3fuJaDPq71bVz6I0YcCBDen4VfC63OV7vW%2BbyWRxVvkVcXGVXXux%2BPn0vciOMHi9TyaQAko6x7611UvLKkHNYe5swwHO9TCwmLTWBjqkAbwnkuOOrx8ObEUOgEpg77OV5V1fR4QYMq%2Bkgwppe%2F9A23A3ag2teK5H0kPGfdS0shW4TmmVzdRgpUss7qTuSAUEp04MowqgPLNBuAw7Krz1dfIrpZ71W6P227hxyymlS%2F%2BxW812NrLxfBzIsjBL2YqjJTBbM%2FLmCL3Q3AT9JAdlj3VQ4ti1MQbYpTGlEKCM3cELxn8OPVt6RIvlaEtLiHpZFCMJ&X-Amz-Signature=1957d07520eff6c9bfa5e929c0c166fb005192579e9f375daf0947c2af98a507&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
