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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTPKBRO6%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIGIcfWdE9tPc7%2FTJWOlBD9ARvWJojARIGH6vQmFUIOFCAiEAioi6LDXLIaqjgAFGqf3qoyfuX1yF80ia9LPyK91QpZ0q%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDLRgwLBBAun7THP4YCrcA%2BpCofA3kmdpBmLNsVdenwHN8lWl9KIcM5hW9SXjx7nI%2BPNe7nxZy%2BwDsGaDFAtlM3%2FZAcHDS1WvjsyBkdK63jYNblJZ3MtWnNtONWq%2Fk8oF3hmbtYGQ6Wc4d20DJjJxF%2Bl3z7%2FNso3ClRJXKPnz8F95lxC74cEhX0wqj%2FrRSMNcVbJ0gzcj%2F6u6i26h3fXtyWd4CTdUKaVlrJbPP%2F0ykZMgSChNoemVcLyQmT3JrZ5PPeAKsw%2BqvIgDbQFPzbIpW5AQW%2FP0nPgx5HGvHWiF9thodeTHEUv235SlmaIXamuO%2FyqcycdF1u2ZZkbb%2F4buSOshEZT03brRfZU3Ce6Jy%2Bm2f1W7fTG8ZazQT6gFPvwNgdXuvxAs%2FbLzm33%2FmnI30YbuuLXXEuio6jHxFrm%2FZN4xrOCZDLDDUhzxfHeh%2BPqZ7PEv14VjIMxKX2NwTLdkFMpd3jR5nc7tnVU9W0DoFW81zoJd5Sx853f8r6whFWmEzhlVttVcZcbTVa2GgkTH2Y%2FPLbMZM89EOIeFtkG2Tdn6xKn5dCFh%2BqGigW0z%2B%2F3JiPSx039ZRTaNXE86O%2FgGucoz3z3kyBuvm1RJBzVWSVKat91NEoVlAAtT0GJSX1pgj8%2FxY0bBBjEgumpLMNaR6M4GOqUBBgWyppJN9RgAe1ZpYB3tq8Hh8Ixfd4BNxaQeIwgJ7bpnXi1h1C6UNJ1r4W%2BlZ5EGp4Nfg2WH4%2FDWCuQBxVA6b%2F6X2OlvCeSe7xXhETIFjpSYCwHS9snFWFNFqjAk3rpNMJR7oQVEsFzwF8WGBw5k3vW5vej2VveHXhgTpRUXCpnaKdgADdC7gx1Ieq3nQQeyL3tEysRtWY0MQK9T6lJTd6Yadak5&X-Amz-Signature=f23a8698a6c0076e6439046532bfef033f996834136b7b3ef2f9a7273e9ae391&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTPKBRO6%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIGIcfWdE9tPc7%2FTJWOlBD9ARvWJojARIGH6vQmFUIOFCAiEAioi6LDXLIaqjgAFGqf3qoyfuX1yF80ia9LPyK91QpZ0q%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDLRgwLBBAun7THP4YCrcA%2BpCofA3kmdpBmLNsVdenwHN8lWl9KIcM5hW9SXjx7nI%2BPNe7nxZy%2BwDsGaDFAtlM3%2FZAcHDS1WvjsyBkdK63jYNblJZ3MtWnNtONWq%2Fk8oF3hmbtYGQ6Wc4d20DJjJxF%2Bl3z7%2FNso3ClRJXKPnz8F95lxC74cEhX0wqj%2FrRSMNcVbJ0gzcj%2F6u6i26h3fXtyWd4CTdUKaVlrJbPP%2F0ykZMgSChNoemVcLyQmT3JrZ5PPeAKsw%2BqvIgDbQFPzbIpW5AQW%2FP0nPgx5HGvHWiF9thodeTHEUv235SlmaIXamuO%2FyqcycdF1u2ZZkbb%2F4buSOshEZT03brRfZU3Ce6Jy%2Bm2f1W7fTG8ZazQT6gFPvwNgdXuvxAs%2FbLzm33%2FmnI30YbuuLXXEuio6jHxFrm%2FZN4xrOCZDLDDUhzxfHeh%2BPqZ7PEv14VjIMxKX2NwTLdkFMpd3jR5nc7tnVU9W0DoFW81zoJd5Sx853f8r6whFWmEzhlVttVcZcbTVa2GgkTH2Y%2FPLbMZM89EOIeFtkG2Tdn6xKn5dCFh%2BqGigW0z%2B%2F3JiPSx039ZRTaNXE86O%2FgGucoz3z3kyBuvm1RJBzVWSVKat91NEoVlAAtT0GJSX1pgj8%2FxY0bBBjEgumpLMNaR6M4GOqUBBgWyppJN9RgAe1ZpYB3tq8Hh8Ixfd4BNxaQeIwgJ7bpnXi1h1C6UNJ1r4W%2BlZ5EGp4Nfg2WH4%2FDWCuQBxVA6b%2F6X2OlvCeSe7xXhETIFjpSYCwHS9snFWFNFqjAk3rpNMJR7oQVEsFzwF8WGBw5k3vW5vej2VveHXhgTpRUXCpnaKdgADdC7gx1Ieq3nQQeyL3tEysRtWY0MQK9T6lJTd6Yadak5&X-Amz-Signature=afc2bcd9375356137870115a33831da91c918db7ca4e1e10af7d98ce3668bd7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTPKBRO6%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084136Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIGIcfWdE9tPc7%2FTJWOlBD9ARvWJojARIGH6vQmFUIOFCAiEAioi6LDXLIaqjgAFGqf3qoyfuX1yF80ia9LPyK91QpZ0q%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDLRgwLBBAun7THP4YCrcA%2BpCofA3kmdpBmLNsVdenwHN8lWl9KIcM5hW9SXjx7nI%2BPNe7nxZy%2BwDsGaDFAtlM3%2FZAcHDS1WvjsyBkdK63jYNblJZ3MtWnNtONWq%2Fk8oF3hmbtYGQ6Wc4d20DJjJxF%2Bl3z7%2FNso3ClRJXKPnz8F95lxC74cEhX0wqj%2FrRSMNcVbJ0gzcj%2F6u6i26h3fXtyWd4CTdUKaVlrJbPP%2F0ykZMgSChNoemVcLyQmT3JrZ5PPeAKsw%2BqvIgDbQFPzbIpW5AQW%2FP0nPgx5HGvHWiF9thodeTHEUv235SlmaIXamuO%2FyqcycdF1u2ZZkbb%2F4buSOshEZT03brRfZU3Ce6Jy%2Bm2f1W7fTG8ZazQT6gFPvwNgdXuvxAs%2FbLzm33%2FmnI30YbuuLXXEuio6jHxFrm%2FZN4xrOCZDLDDUhzxfHeh%2BPqZ7PEv14VjIMxKX2NwTLdkFMpd3jR5nc7tnVU9W0DoFW81zoJd5Sx853f8r6whFWmEzhlVttVcZcbTVa2GgkTH2Y%2FPLbMZM89EOIeFtkG2Tdn6xKn5dCFh%2BqGigW0z%2B%2F3JiPSx039ZRTaNXE86O%2FgGucoz3z3kyBuvm1RJBzVWSVKat91NEoVlAAtT0GJSX1pgj8%2FxY0bBBjEgumpLMNaR6M4GOqUBBgWyppJN9RgAe1ZpYB3tq8Hh8Ixfd4BNxaQeIwgJ7bpnXi1h1C6UNJ1r4W%2BlZ5EGp4Nfg2WH4%2FDWCuQBxVA6b%2F6X2OlvCeSe7xXhETIFjpSYCwHS9snFWFNFqjAk3rpNMJR7oQVEsFzwF8WGBw5k3vW5vej2VveHXhgTpRUXCpnaKdgADdC7gx1Ieq3nQQeyL3tEysRtWY0MQK9T6lJTd6Yadak5&X-Amz-Signature=1d2d440019361e7366366636e32095567e72bf93bdf501de5ac26275fefd45db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664XGJWI5T%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIARALS5tKzBbgIJW7pNjo73GxB5V3%2FaMyuVrskmYEbQDAiEAo90ueJPpqIdctSwcvpr8vB17CYZ6qvM%2FYGvHTrchIxkq%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDDVEWXYL2paTlHucMSrcAx3P7gcScp3A2nhUj5s1xyW%2BUyasSbw%2FgrylV76yg6bEqNyY6wn%2B1IN7dFiDyqRH9VzPkcB9BmXj7B2ZBA8F%2FD2ikCP8Ixg4925lGdS5SxAq5H2QL30JlOxZr7R93aNt8pTMY0Fiu6qVvJMwzCA87DHw7F%2F7MSlWAjq8s5ZOzslbdclE6ApnisDXSRGjCQ321tmgUwD3Ri3I7kmteOyJ5fVnUMCyG9KtpwIFsoI%2FxGHAJUMKKBrK2%2Fh9YLz%2BWIlPnP5TSmKqkrxy%2BTORkFny6YLqKnmh%2Bqqtv%2BxXMni2G7vSyMPmMHb03JqJ%2BvGxrw8XdFkfOgu70Blboe9vAWR16csoCfn2QDMJ2uuBxDkCIKJUIlXWZFfdArMr7L%2FECs01rrg8GBA4gGVPTgj5F3c9%2FvfKvTwSUell2mxcvfI%2FJ%2Bkp8QRHklMDRjstSUWD%2F6xfJFI864YTNEoFwaGI2ukxJGdh%2BRklz8SkeOQFw8l4fxl1XNiWOncE2ZWpgjhzTZvZkQOq6iPRIKTTjVPKM6GzX7oesGcvhy0DbLG4OCY3zRRwRB9H5TX1xK33JcTDzOmwpMJAX99EstaR2LhNw0HthR48tiKbCWMA8tzgXT6s%2FpKtT4uPIBfEetO2iAN8MOmR6M4GOqUB5%2BOgE7KVeN1IFiWfUrH4M7G8HZWUrQRPyeB8C517fYOevS0xa27xfwwNrRLZCkLXa7yLtj3Exs1lJPHQmOmOZIG1BH7RDHZQEeJKChG14OooeOmp0XBfm05QxniBxTXEpRi%2FZ6XD0XExY0KRCgfZgVZCuimvGiYKRs5DiJNrfMjPJeDu3tkKxQ5JAbfmbf5KyuSXfXNFKsyAcIGa%2FlXjpRbRcIAs&X-Amz-Signature=de94bd8ba4e2ab7de241931e4d1b75e8d0fb3c720f7e4e7419eee86da61cf2fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664XGJWI5T%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIARALS5tKzBbgIJW7pNjo73GxB5V3%2FaMyuVrskmYEbQDAiEAo90ueJPpqIdctSwcvpr8vB17CYZ6qvM%2FYGvHTrchIxkq%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDDVEWXYL2paTlHucMSrcAx3P7gcScp3A2nhUj5s1xyW%2BUyasSbw%2FgrylV76yg6bEqNyY6wn%2B1IN7dFiDyqRH9VzPkcB9BmXj7B2ZBA8F%2FD2ikCP8Ixg4925lGdS5SxAq5H2QL30JlOxZr7R93aNt8pTMY0Fiu6qVvJMwzCA87DHw7F%2F7MSlWAjq8s5ZOzslbdclE6ApnisDXSRGjCQ321tmgUwD3Ri3I7kmteOyJ5fVnUMCyG9KtpwIFsoI%2FxGHAJUMKKBrK2%2Fh9YLz%2BWIlPnP5TSmKqkrxy%2BTORkFny6YLqKnmh%2Bqqtv%2BxXMni2G7vSyMPmMHb03JqJ%2BvGxrw8XdFkfOgu70Blboe9vAWR16csoCfn2QDMJ2uuBxDkCIKJUIlXWZFfdArMr7L%2FECs01rrg8GBA4gGVPTgj5F3c9%2FvfKvTwSUell2mxcvfI%2FJ%2Bkp8QRHklMDRjstSUWD%2F6xfJFI864YTNEoFwaGI2ukxJGdh%2BRklz8SkeOQFw8l4fxl1XNiWOncE2ZWpgjhzTZvZkQOq6iPRIKTTjVPKM6GzX7oesGcvhy0DbLG4OCY3zRRwRB9H5TX1xK33JcTDzOmwpMJAX99EstaR2LhNw0HthR48tiKbCWMA8tzgXT6s%2FpKtT4uPIBfEetO2iAN8MOmR6M4GOqUB5%2BOgE7KVeN1IFiWfUrH4M7G8HZWUrQRPyeB8C517fYOevS0xa27xfwwNrRLZCkLXa7yLtj3Exs1lJPHQmOmOZIG1BH7RDHZQEeJKChG14OooeOmp0XBfm05QxniBxTXEpRi%2FZ6XD0XExY0KRCgfZgVZCuimvGiYKRs5DiJNrfMjPJeDu3tkKxQ5JAbfmbf5KyuSXfXNFKsyAcIGa%2FlXjpRbRcIAs&X-Amz-Signature=97bf8853607980d41f9378b5a36103d3f13a01a1f4de6182c21d2eb7defca7ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664XGJWI5T%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIARALS5tKzBbgIJW7pNjo73GxB5V3%2FaMyuVrskmYEbQDAiEAo90ueJPpqIdctSwcvpr8vB17CYZ6qvM%2FYGvHTrchIxkq%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDDVEWXYL2paTlHucMSrcAx3P7gcScp3A2nhUj5s1xyW%2BUyasSbw%2FgrylV76yg6bEqNyY6wn%2B1IN7dFiDyqRH9VzPkcB9BmXj7B2ZBA8F%2FD2ikCP8Ixg4925lGdS5SxAq5H2QL30JlOxZr7R93aNt8pTMY0Fiu6qVvJMwzCA87DHw7F%2F7MSlWAjq8s5ZOzslbdclE6ApnisDXSRGjCQ321tmgUwD3Ri3I7kmteOyJ5fVnUMCyG9KtpwIFsoI%2FxGHAJUMKKBrK2%2Fh9YLz%2BWIlPnP5TSmKqkrxy%2BTORkFny6YLqKnmh%2Bqqtv%2BxXMni2G7vSyMPmMHb03JqJ%2BvGxrw8XdFkfOgu70Blboe9vAWR16csoCfn2QDMJ2uuBxDkCIKJUIlXWZFfdArMr7L%2FECs01rrg8GBA4gGVPTgj5F3c9%2FvfKvTwSUell2mxcvfI%2FJ%2Bkp8QRHklMDRjstSUWD%2F6xfJFI864YTNEoFwaGI2ukxJGdh%2BRklz8SkeOQFw8l4fxl1XNiWOncE2ZWpgjhzTZvZkQOq6iPRIKTTjVPKM6GzX7oesGcvhy0DbLG4OCY3zRRwRB9H5TX1xK33JcTDzOmwpMJAX99EstaR2LhNw0HthR48tiKbCWMA8tzgXT6s%2FpKtT4uPIBfEetO2iAN8MOmR6M4GOqUB5%2BOgE7KVeN1IFiWfUrH4M7G8HZWUrQRPyeB8C517fYOevS0xa27xfwwNrRLZCkLXa7yLtj3Exs1lJPHQmOmOZIG1BH7RDHZQEeJKChG14OooeOmp0XBfm05QxniBxTXEpRi%2FZ6XD0XExY0KRCgfZgVZCuimvGiYKRs5DiJNrfMjPJeDu3tkKxQ5JAbfmbf5KyuSXfXNFKsyAcIGa%2FlXjpRbRcIAs&X-Amz-Signature=f988b85bdb374ee9ab330507756fef3dfd447e83b90435afc739e6835c163ace&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664XGJWI5T%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIARALS5tKzBbgIJW7pNjo73GxB5V3%2FaMyuVrskmYEbQDAiEAo90ueJPpqIdctSwcvpr8vB17CYZ6qvM%2FYGvHTrchIxkq%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDDVEWXYL2paTlHucMSrcAx3P7gcScp3A2nhUj5s1xyW%2BUyasSbw%2FgrylV76yg6bEqNyY6wn%2B1IN7dFiDyqRH9VzPkcB9BmXj7B2ZBA8F%2FD2ikCP8Ixg4925lGdS5SxAq5H2QL30JlOxZr7R93aNt8pTMY0Fiu6qVvJMwzCA87DHw7F%2F7MSlWAjq8s5ZOzslbdclE6ApnisDXSRGjCQ321tmgUwD3Ri3I7kmteOyJ5fVnUMCyG9KtpwIFsoI%2FxGHAJUMKKBrK2%2Fh9YLz%2BWIlPnP5TSmKqkrxy%2BTORkFny6YLqKnmh%2Bqqtv%2BxXMni2G7vSyMPmMHb03JqJ%2BvGxrw8XdFkfOgu70Blboe9vAWR16csoCfn2QDMJ2uuBxDkCIKJUIlXWZFfdArMr7L%2FECs01rrg8GBA4gGVPTgj5F3c9%2FvfKvTwSUell2mxcvfI%2FJ%2Bkp8QRHklMDRjstSUWD%2F6xfJFI864YTNEoFwaGI2ukxJGdh%2BRklz8SkeOQFw8l4fxl1XNiWOncE2ZWpgjhzTZvZkQOq6iPRIKTTjVPKM6GzX7oesGcvhy0DbLG4OCY3zRRwRB9H5TX1xK33JcTDzOmwpMJAX99EstaR2LhNw0HthR48tiKbCWMA8tzgXT6s%2FpKtT4uPIBfEetO2iAN8MOmR6M4GOqUB5%2BOgE7KVeN1IFiWfUrH4M7G8HZWUrQRPyeB8C517fYOevS0xa27xfwwNrRLZCkLXa7yLtj3Exs1lJPHQmOmOZIG1BH7RDHZQEeJKChG14OooeOmp0XBfm05QxniBxTXEpRi%2FZ6XD0XExY0KRCgfZgVZCuimvGiYKRs5DiJNrfMjPJeDu3tkKxQ5JAbfmbf5KyuSXfXNFKsyAcIGa%2FlXjpRbRcIAs&X-Amz-Signature=e8633eb81cd1e8a9e99c14ca07277a8d9d338c22ed889090a8df96ff496bac6a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663BQHVSVH%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHcaCXVzLXdlc3QtMiJHMEUCICJBFegxN9P5VCb61jE01C9LrVQqDzDDareFH6%2B1LqdqAiEAnaIPB3RZsDEvn1GPeFUlGUNoHF7qH1X8%2Fl6u8O2oDmAq%2FwMIQBAAGgw2Mzc0MjMxODM4MDUiDODJFAmmCSQehHUkfSrcAxhIGKjDWhPF6BzzsXByu4JzrplKdClNC8lDamhyOsycg4fTQ2A7xXA1mWjwiYcNKrKBjardM38MseJxdeCExdhk1M1c9U3X0mFf4oWg%2FjdNmWY3zLDZV8GMp%2FMgmVwp1x%2FYsHhtqgA42EXB3MFv3XzNc4%2BBjtworij%2FZ9WIBCQg%2F9dJgmg1gWx73RNKzwF1PAJcjXYJZ2LhCjNCS1sQekPZ%2Bzstlv6GIfwfzmwhkJV11w6GYugddXWFG07jG21biLXHwW8%2FTPGoK3kS8EDcrU0ujOFEBILAXdRjg1unxzKED9om93E%2BzMtzDtCmIBN%2FK6Th9h%2FOL4CF2ZgzaagknHltvqijStxI3KBuElap3G6Kx5rwsZf73IKxIgPSVnG2jx8K4lEudtBnuLNoU59bygl4PeqQrcIgm8ctWTPlvgAU%2FvThaXX6NLaq5XUzKdK94NQ3%2BmgKoaYnUySn7TW2b%2FAdtSWLqnGViaVneBADw83d2nfPfEqKgyMxBBpP0fOrDD6217EhenIRre84ezmtMrH%2FsOb8S9rqT02RakUaAa2G7N9o%2BZvjxigsK%2BAWSF5W56e00vEjOXV0U5Tv2Yudi5SgegEGsF4ToZqv%2BmZ0yM4GqyLCL6YBUQHfnCXGMKLd584GOqUBHcnKQ3ERXH5UXKLKEGRGU8JiDBtIkWkTbYnBdLSViC6tX0g7T1%2B7GwwW%2FWUwwSiN6WHZPRtFP6lRTlYZg6augqjFSPDwQYG6KEG%2F84lNyWfAu6xV7DkcG4POR9o%2B62e%2FltpZ1EuE3wwmaBXEXQWN0wMIs5irDcZuTubrpjzUZnfA4hf9E7cm3YU%2Bmqh0lR6dyWasEfu2O8bmy6%2FBaiKDv7enlPdR&X-Amz-Signature=978654d859212a2118fa4df77389422c61d146ead7e855b509fb3a1274274c6e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QJR6LJA5%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084138Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIEDAHMD33EKgOiRpVSTU03qGWY8Yy2WJpmxZDjQJTbi7AiEA9HSG2QgYUi74N2%2Bl2XYhDGle5l74lURQkHsLRMsi554q%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDL1dVo0JQooSkZgO3CrcA5KLnig29FogNFW31KwP5I7uc%2FcnS8VbbdkuVibNLpP%2FrzVjfb6f3L049t%2Bx3gBd9LzPg6h2Eohscox%2Brq4SRPDP8KtMZ1DLhXgbk3Iy2XhUtJpCdT0%2FPHe54UacNd4Q3q8EZJ3tSi3WExovfEMA2j%2BX3j9ykN7yVah2V02XoA1QKPbNNBrJohudSFhC5L2MsJvXQsDJpW9YzPUsZntZokE75l0vijpgLR5orZX%2B%2F43wXfgEYA%2FLKY7dZHYZ9L9Yf0F7P9u5Vyjejl7i3FJGqNu1znlnMZDunq9zBMK%2Fg9ry56rrGme8kBwwqCGeu9SM4GSagC7%2FVW4IUW3fhSnYoj%2Bek82QAM0Azlx%2BLjHtDdtf6kNe0EqMVLJwnThgpbTxQDSxjGBLDhq6MIB%2FY2U13yjmGS79%2BmYkr0SE%2B9gy%2Fmyhc6iGzvnlnyDK3zzPwCsVqm4hUgi0NXTy07JpDb1hCRmTRYu5Ftp7eYghnJV5UAunpxwqIxy20%2FDylELFhuA3kZrE5KYSl97Hh7TwSDsnoBiR%2FUtr7GjQM1USahxXUNf2gX9BegTahTzNG38bM0spdXH3oyi%2BPW8TEkkie8tHCeIEcBasRFwdsYvcYr4Uq5X1yOSpcE4%2B9UJB5tx2MPaR6M4GOqUB9DuqHEx1ouUlny5N0G0l%2B57b2794vOvXtsrEZTRsTE9BN%2BJiXeg1rpGMa%2FJ%2Bc1au%2FfuVYwRbUqAKIFB4OofbysfrXkDsRCNpwf%2Fv1MoAsMKKzhouHhViPhXdYydPCQ0miKv1xe2ps4OjNxjH9I2JErlf3lPTFdDZSAOkrixJ%2Bz2AOIoorq7c%2F3oRVv4vQe72tL9MrKkHt8L1D5RgYvoG6NTjIb3I&X-Amz-Signature=62bf6170ec1d69e3ebb7732e0686512f4f77c4ea9ba26fccf01abc484a47fad5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QJR6LJA5%2F20260411%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260411T084138Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIEDAHMD33EKgOiRpVSTU03qGWY8Yy2WJpmxZDjQJTbi7AiEA9HSG2QgYUi74N2%2Bl2XYhDGle5l74lURQkHsLRMsi554q%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDL1dVo0JQooSkZgO3CrcA5KLnig29FogNFW31KwP5I7uc%2FcnS8VbbdkuVibNLpP%2FrzVjfb6f3L049t%2Bx3gBd9LzPg6h2Eohscox%2Brq4SRPDP8KtMZ1DLhXgbk3Iy2XhUtJpCdT0%2FPHe54UacNd4Q3q8EZJ3tSi3WExovfEMA2j%2BX3j9ykN7yVah2V02XoA1QKPbNNBrJohudSFhC5L2MsJvXQsDJpW9YzPUsZntZokE75l0vijpgLR5orZX%2B%2F43wXfgEYA%2FLKY7dZHYZ9L9Yf0F7P9u5Vyjejl7i3FJGqNu1znlnMZDunq9zBMK%2Fg9ry56rrGme8kBwwqCGeu9SM4GSagC7%2FVW4IUW3fhSnYoj%2Bek82QAM0Azlx%2BLjHtDdtf6kNe0EqMVLJwnThgpbTxQDSxjGBLDhq6MIB%2FY2U13yjmGS79%2BmYkr0SE%2B9gy%2Fmyhc6iGzvnlnyDK3zzPwCsVqm4hUgi0NXTy07JpDb1hCRmTRYu5Ftp7eYghnJV5UAunpxwqIxy20%2FDylELFhuA3kZrE5KYSl97Hh7TwSDsnoBiR%2FUtr7GjQM1USahxXUNf2gX9BegTahTzNG38bM0spdXH3oyi%2BPW8TEkkie8tHCeIEcBasRFwdsYvcYr4Uq5X1yOSpcE4%2B9UJB5tx2MPaR6M4GOqUB9DuqHEx1ouUlny5N0G0l%2B57b2794vOvXtsrEZTRsTE9BN%2BJiXeg1rpGMa%2FJ%2Bc1au%2FfuVYwRbUqAKIFB4OofbysfrXkDsRCNpwf%2Fv1MoAsMKKzhouHhViPhXdYydPCQ0miKv1xe2ps4OjNxjH9I2JErlf3lPTFdDZSAOkrixJ%2Bz2AOIoorq7c%2F3oRVv4vQe72tL9MrKkHt8L1D5RgYvoG6NTjIb3I&X-Amz-Signature=bf49b56b586d2f2d6a0090d4aa44d9112b86f07cdb82bfb808dd749b7f3ed46f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
