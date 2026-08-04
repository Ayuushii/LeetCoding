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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGESHMB7%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIBoTU54r2GoY5bTWyymZgDxaMAFvgqoI%2F0aTiDOUOElfAiABwJSTnMK23%2Fx07zkYtp6EjcKBZDUGAZTEC%2BG8N9a2nCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIME940XLA1NKUrgd0CKtwDV1wIXnA%2FryIjUxFjBctF3oOP7zv4xSPv%2FnE4%2FnZu%2FZ6Cq%2BQaeXlBF1IPeI1by%2FimweKVEoBLENY7sveUSJz0BxpfI%2F8u6UPZNVxDvxqrLenyKbjwgghuD8AmT3ZPy9Ee9sImW3nOUhOTgFrbP5vHlhPNu8evH2Ta32O78FzSGXxybrSTrrNM37u%2Bl6mOUM6KvSHNraFXC%2BuOMtr%2FGQpSsfHerBDgO3UlarAedV3J%2BasDg57G2lz3uvu4Uo%2FD%2BWUtaGUZFfFJWCMe26QBTtIDFM9VZmZfTik90M%2FvLeBhAbOeKAkabr6tDbnEdzAMfEVX67FIhKACPefGcLVTOYVRo2vXgBMyFOKIft4YYmxSSHYpG%2B0NGldftuBYeVHtzFSt7tNw728FGUzmzNVHTRt5o4fR7nLSKAyYMwx%2FMlZMEU96T%2FzBVNEp0FDCYdL5NfGDsTvYuBjeVctuXiwQsMOOGa2wNX5lfyRIQhYoXRtO687mgQroBGMN3Ugi02b7kPl7MYDAvBIU%2FPKNS3zcv1ZUQInPPSXRuYIr6WhBTbrraRIZLkscykWeh5Z%2Bpf37Ps4a5qANwOmrln%2BrFbZybCLln4UaYPipFIND5PhM83o7vRBy1h7KXesOZ3buDN8w%2Bu7G0wY6pgF6YSfBr8gz2LWf5MeNvxP9H0Iec8oDLtDGTWSQrrowS4EKFOU0Zc1fdNv4yRHKZBsJ1uhxiBYAX9Wg%2BK77JUM7vmr8AVRiLrBYpuWT2FxFNfoKEfUHNZVCv0fdHng3NZ8%2F8wRvnEai3mhw%2BSBJssZWQGWT2xzJKynJkgRk72aMev%2Bs26wQeCLVfXEZvIE9GZX9KKZencLIPJTE1KRn4Tn9ubrHmYTn&X-Amz-Signature=208b42a0885f79c1ef835636beedd8680d312dc20032d7eb28dca879b30ff5fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGESHMB7%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIBoTU54r2GoY5bTWyymZgDxaMAFvgqoI%2F0aTiDOUOElfAiABwJSTnMK23%2Fx07zkYtp6EjcKBZDUGAZTEC%2BG8N9a2nCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIME940XLA1NKUrgd0CKtwDV1wIXnA%2FryIjUxFjBctF3oOP7zv4xSPv%2FnE4%2FnZu%2FZ6Cq%2BQaeXlBF1IPeI1by%2FimweKVEoBLENY7sveUSJz0BxpfI%2F8u6UPZNVxDvxqrLenyKbjwgghuD8AmT3ZPy9Ee9sImW3nOUhOTgFrbP5vHlhPNu8evH2Ta32O78FzSGXxybrSTrrNM37u%2Bl6mOUM6KvSHNraFXC%2BuOMtr%2FGQpSsfHerBDgO3UlarAedV3J%2BasDg57G2lz3uvu4Uo%2FD%2BWUtaGUZFfFJWCMe26QBTtIDFM9VZmZfTik90M%2FvLeBhAbOeKAkabr6tDbnEdzAMfEVX67FIhKACPefGcLVTOYVRo2vXgBMyFOKIft4YYmxSSHYpG%2B0NGldftuBYeVHtzFSt7tNw728FGUzmzNVHTRt5o4fR7nLSKAyYMwx%2FMlZMEU96T%2FzBVNEp0FDCYdL5NfGDsTvYuBjeVctuXiwQsMOOGa2wNX5lfyRIQhYoXRtO687mgQroBGMN3Ugi02b7kPl7MYDAvBIU%2FPKNS3zcv1ZUQInPPSXRuYIr6WhBTbrraRIZLkscykWeh5Z%2Bpf37Ps4a5qANwOmrln%2BrFbZybCLln4UaYPipFIND5PhM83o7vRBy1h7KXesOZ3buDN8w%2Bu7G0wY6pgF6YSfBr8gz2LWf5MeNvxP9H0Iec8oDLtDGTWSQrrowS4EKFOU0Zc1fdNv4yRHKZBsJ1uhxiBYAX9Wg%2BK77JUM7vmr8AVRiLrBYpuWT2FxFNfoKEfUHNZVCv0fdHng3NZ8%2F8wRvnEai3mhw%2BSBJssZWQGWT2xzJKynJkgRk72aMev%2Bs26wQeCLVfXEZvIE9GZX9KKZencLIPJTE1KRn4Tn9ubrHmYTn&X-Amz-Signature=ae33603f0f4646a24188ab110f8a28b68b7305eff4a48f56db846cc8b23f6ba9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGESHMB7%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIBoTU54r2GoY5bTWyymZgDxaMAFvgqoI%2F0aTiDOUOElfAiABwJSTnMK23%2Fx07zkYtp6EjcKBZDUGAZTEC%2BG8N9a2nCr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIME940XLA1NKUrgd0CKtwDV1wIXnA%2FryIjUxFjBctF3oOP7zv4xSPv%2FnE4%2FnZu%2FZ6Cq%2BQaeXlBF1IPeI1by%2FimweKVEoBLENY7sveUSJz0BxpfI%2F8u6UPZNVxDvxqrLenyKbjwgghuD8AmT3ZPy9Ee9sImW3nOUhOTgFrbP5vHlhPNu8evH2Ta32O78FzSGXxybrSTrrNM37u%2Bl6mOUM6KvSHNraFXC%2BuOMtr%2FGQpSsfHerBDgO3UlarAedV3J%2BasDg57G2lz3uvu4Uo%2FD%2BWUtaGUZFfFJWCMe26QBTtIDFM9VZmZfTik90M%2FvLeBhAbOeKAkabr6tDbnEdzAMfEVX67FIhKACPefGcLVTOYVRo2vXgBMyFOKIft4YYmxSSHYpG%2B0NGldftuBYeVHtzFSt7tNw728FGUzmzNVHTRt5o4fR7nLSKAyYMwx%2FMlZMEU96T%2FzBVNEp0FDCYdL5NfGDsTvYuBjeVctuXiwQsMOOGa2wNX5lfyRIQhYoXRtO687mgQroBGMN3Ugi02b7kPl7MYDAvBIU%2FPKNS3zcv1ZUQInPPSXRuYIr6WhBTbrraRIZLkscykWeh5Z%2Bpf37Ps4a5qANwOmrln%2BrFbZybCLln4UaYPipFIND5PhM83o7vRBy1h7KXesOZ3buDN8w%2Bu7G0wY6pgF6YSfBr8gz2LWf5MeNvxP9H0Iec8oDLtDGTWSQrrowS4EKFOU0Zc1fdNv4yRHKZBsJ1uhxiBYAX9Wg%2BK77JUM7vmr8AVRiLrBYpuWT2FxFNfoKEfUHNZVCv0fdHng3NZ8%2F8wRvnEai3mhw%2BSBJssZWQGWT2xzJKynJkgRk72aMev%2Bs26wQeCLVfXEZvIE9GZX9KKZencLIPJTE1KRn4Tn9ubrHmYTn&X-Amz-Signature=2ded312c086e634d32389525e65b94cecc5484aea5ba62638f2a899a3c6dadbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665S46R5NQ%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIAnlx8RjLznIZVk4J8I8h%2FuemZErqSZ9nb7xOqzLx%2FZaAiAsIS0U8uy3Pehi51Mjfiqmxo8Do5e8qvH9UAV7zI9nLSr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMRL8%2BOh6liz6F3oenKtwDP4HP3JVpETD7%2FYO9XxtVtg6rXjoG5nJcNo1q%2BHhbHYzJTrS7VHK8r0L%2BgReAbIniAvafb5tXtFIQhVrIZb9xIOKXheKGtwVvq2iq96KX3fNhoF2G56Q%2FE0xbdp0fcrXjPk711mCj673QxK7q1xCjzR01gEOwRi%2BvSCWHKAQ7wWxb1oAox3j5yzfNF1DuyP65Lqvbs1XZFDiNKywK4sDfPgtpFtUgAkozzQA5bklv3TJLUWjJPAPWKU%2BTEKb8wJSiy2Rw%2FExLIGkXdi6IsbM8uQ6LjDo8%2FrNIhuFk7oXl1CLKgOdFk8yEQ3smtIreyjT0YYmPNZtokjssa6QBZkSfS7dK8Ex6pejoz89sFm7S75X7lWgSa1aTag3blBuOgPM%2BQRiwEnGoxSPxaenSpwSyP48nwDQU7rFHshiP2lvw%2BnWIQcrvhg8mOa%2Fhwiclj6ZctVi7G013kALLaq5KukPrC8JaoJ8jt6V0AFXXtCiix2R%2FeYfipHaUs5TGvluC%2B6QjihNjXcJEm%2Bmkeo4BxjYcZ6zITwVbWnfApHEEmt5FLG4CYqTPoCMgQU8J6GdlZEK2Eh%2FkkCZZu4R7%2FpATW7gR67toI2Kfm6vFj5eY%2F0tok4gL21nN9WMC6dX7JcgwiuzG0wY6pgHMC5IRTEA1E7xz6DPON94u5gU3nL23DF8YkxaaCQJ2iCIbRTMIGtiWi79BKosSGizV0mV5XyFcYYJ3PvGy5bw3xcH2P%2BV8qcoF1OXg0yPC8xBezf%2BSRcZ4xRnDNvYrZScWCTRkWFFJncs8GgOgQwq6YcKvPccj1oaBmmDRkVFWYI3aEDBB%2FlUR2DouVWEyB2tZutBVP7SRYKLhIT58O2jWui3gG8qL&X-Amz-Signature=b11544c58c0884438c7bc5666b49c1c06161b830da271a4cc61ea9272f3ae9fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665S46R5NQ%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIAnlx8RjLznIZVk4J8I8h%2FuemZErqSZ9nb7xOqzLx%2FZaAiAsIS0U8uy3Pehi51Mjfiqmxo8Do5e8qvH9UAV7zI9nLSr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMRL8%2BOh6liz6F3oenKtwDP4HP3JVpETD7%2FYO9XxtVtg6rXjoG5nJcNo1q%2BHhbHYzJTrS7VHK8r0L%2BgReAbIniAvafb5tXtFIQhVrIZb9xIOKXheKGtwVvq2iq96KX3fNhoF2G56Q%2FE0xbdp0fcrXjPk711mCj673QxK7q1xCjzR01gEOwRi%2BvSCWHKAQ7wWxb1oAox3j5yzfNF1DuyP65Lqvbs1XZFDiNKywK4sDfPgtpFtUgAkozzQA5bklv3TJLUWjJPAPWKU%2BTEKb8wJSiy2Rw%2FExLIGkXdi6IsbM8uQ6LjDo8%2FrNIhuFk7oXl1CLKgOdFk8yEQ3smtIreyjT0YYmPNZtokjssa6QBZkSfS7dK8Ex6pejoz89sFm7S75X7lWgSa1aTag3blBuOgPM%2BQRiwEnGoxSPxaenSpwSyP48nwDQU7rFHshiP2lvw%2BnWIQcrvhg8mOa%2Fhwiclj6ZctVi7G013kALLaq5KukPrC8JaoJ8jt6V0AFXXtCiix2R%2FeYfipHaUs5TGvluC%2B6QjihNjXcJEm%2Bmkeo4BxjYcZ6zITwVbWnfApHEEmt5FLG4CYqTPoCMgQU8J6GdlZEK2Eh%2FkkCZZu4R7%2FpATW7gR67toI2Kfm6vFj5eY%2F0tok4gL21nN9WMC6dX7JcgwiuzG0wY6pgHMC5IRTEA1E7xz6DPON94u5gU3nL23DF8YkxaaCQJ2iCIbRTMIGtiWi79BKosSGizV0mV5XyFcYYJ3PvGy5bw3xcH2P%2BV8qcoF1OXg0yPC8xBezf%2BSRcZ4xRnDNvYrZScWCTRkWFFJncs8GgOgQwq6YcKvPccj1oaBmmDRkVFWYI3aEDBB%2FlUR2DouVWEyB2tZutBVP7SRYKLhIT58O2jWui3gG8qL&X-Amz-Signature=dcd5825b5c1d459f28869974fe2a11a9849ece33c115ca9e4dc15dc2c678901b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665S46R5NQ%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIAnlx8RjLznIZVk4J8I8h%2FuemZErqSZ9nb7xOqzLx%2FZaAiAsIS0U8uy3Pehi51Mjfiqmxo8Do5e8qvH9UAV7zI9nLSr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMRL8%2BOh6liz6F3oenKtwDP4HP3JVpETD7%2FYO9XxtVtg6rXjoG5nJcNo1q%2BHhbHYzJTrS7VHK8r0L%2BgReAbIniAvafb5tXtFIQhVrIZb9xIOKXheKGtwVvq2iq96KX3fNhoF2G56Q%2FE0xbdp0fcrXjPk711mCj673QxK7q1xCjzR01gEOwRi%2BvSCWHKAQ7wWxb1oAox3j5yzfNF1DuyP65Lqvbs1XZFDiNKywK4sDfPgtpFtUgAkozzQA5bklv3TJLUWjJPAPWKU%2BTEKb8wJSiy2Rw%2FExLIGkXdi6IsbM8uQ6LjDo8%2FrNIhuFk7oXl1CLKgOdFk8yEQ3smtIreyjT0YYmPNZtokjssa6QBZkSfS7dK8Ex6pejoz89sFm7S75X7lWgSa1aTag3blBuOgPM%2BQRiwEnGoxSPxaenSpwSyP48nwDQU7rFHshiP2lvw%2BnWIQcrvhg8mOa%2Fhwiclj6ZctVi7G013kALLaq5KukPrC8JaoJ8jt6V0AFXXtCiix2R%2FeYfipHaUs5TGvluC%2B6QjihNjXcJEm%2Bmkeo4BxjYcZ6zITwVbWnfApHEEmt5FLG4CYqTPoCMgQU8J6GdlZEK2Eh%2FkkCZZu4R7%2FpATW7gR67toI2Kfm6vFj5eY%2F0tok4gL21nN9WMC6dX7JcgwiuzG0wY6pgHMC5IRTEA1E7xz6DPON94u5gU3nL23DF8YkxaaCQJ2iCIbRTMIGtiWi79BKosSGizV0mV5XyFcYYJ3PvGy5bw3xcH2P%2BV8qcoF1OXg0yPC8xBezf%2BSRcZ4xRnDNvYrZScWCTRkWFFJncs8GgOgQwq6YcKvPccj1oaBmmDRkVFWYI3aEDBB%2FlUR2DouVWEyB2tZutBVP7SRYKLhIT58O2jWui3gG8qL&X-Amz-Signature=8f25a7395eb39574ce2fecb0c1ca9fa66a51eeb2d0a4c2ab988bb3eff664c6c8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665S46R5NQ%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIAnlx8RjLznIZVk4J8I8h%2FuemZErqSZ9nb7xOqzLx%2FZaAiAsIS0U8uy3Pehi51Mjfiqmxo8Do5e8qvH9UAV7zI9nLSr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMRL8%2BOh6liz6F3oenKtwDP4HP3JVpETD7%2FYO9XxtVtg6rXjoG5nJcNo1q%2BHhbHYzJTrS7VHK8r0L%2BgReAbIniAvafb5tXtFIQhVrIZb9xIOKXheKGtwVvq2iq96KX3fNhoF2G56Q%2FE0xbdp0fcrXjPk711mCj673QxK7q1xCjzR01gEOwRi%2BvSCWHKAQ7wWxb1oAox3j5yzfNF1DuyP65Lqvbs1XZFDiNKywK4sDfPgtpFtUgAkozzQA5bklv3TJLUWjJPAPWKU%2BTEKb8wJSiy2Rw%2FExLIGkXdi6IsbM8uQ6LjDo8%2FrNIhuFk7oXl1CLKgOdFk8yEQ3smtIreyjT0YYmPNZtokjssa6QBZkSfS7dK8Ex6pejoz89sFm7S75X7lWgSa1aTag3blBuOgPM%2BQRiwEnGoxSPxaenSpwSyP48nwDQU7rFHshiP2lvw%2BnWIQcrvhg8mOa%2Fhwiclj6ZctVi7G013kALLaq5KukPrC8JaoJ8jt6V0AFXXtCiix2R%2FeYfipHaUs5TGvluC%2B6QjihNjXcJEm%2Bmkeo4BxjYcZ6zITwVbWnfApHEEmt5FLG4CYqTPoCMgQU8J6GdlZEK2Eh%2FkkCZZu4R7%2FpATW7gR67toI2Kfm6vFj5eY%2F0tok4gL21nN9WMC6dX7JcgwiuzG0wY6pgHMC5IRTEA1E7xz6DPON94u5gU3nL23DF8YkxaaCQJ2iCIbRTMIGtiWi79BKosSGizV0mV5XyFcYYJ3PvGy5bw3xcH2P%2BV8qcoF1OXg0yPC8xBezf%2BSRcZ4xRnDNvYrZScWCTRkWFFJncs8GgOgQwq6YcKvPccj1oaBmmDRkVFWYI3aEDBB%2FlUR2DouVWEyB2tZutBVP7SRYKLhIT58O2jWui3gG8qL&X-Amz-Signature=b8745e3acee5abf1e7a552e0334bec391d987359eeaf6cf70481404555f9f806&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WMFWCFT%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIGfniy7F22AvTZkNZxaw%2FrNNfUPTzo2VF76Hhf5XEgJOAiBi5uD84FIXUeiDWooJRTmpdtibST8Y5AhEqrIHhsxHlyr%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMAZiqVP18%2FXRxJh19KtwDIHcu6XYv9%2F3tmCJT4RlxnYIGUYLXCMJSShhpXWy3oMkegpKNjWHWLJLAwlxMuFHQDVQULfKOO613%2F8siJtEEKGXAWBNeFq%2BMWK15i6Gvdaz2BSaJ0%2BfMp7zEh39glWCRyV1l66U0KzOrJARNaV%2F3as%2FhyQZ%2FkXPXJRgqQJBYpKXnr2dihus7oharnAqiuERL9%2BTHfNKu%2FUYm3WngnM1fGANDNHdggzhZFGVEV1JJZk23bHbaOvSMMpnspFEv%2BjJx0oHN6WpXChcvTjscS4qoNJAvoEsjnlOzlyyM%2BPUVgPUyvyaj80f%2Bmvp5GyKKHnVn2LK1CWvzwN4H4tS8jMpdPW1f7A9jzIJZ87yKbdjL7ea5k0H2nOU9nvm2jYXCMiwdhMGTCd5Y05Sj99Fdr%2FLnSFFPf9vpxLE7iiUniZvw1TkqNYGY6M2gsd%2FBdLSKQEqVdHAAZVX0Rbzv7XRuc1881hBi6Y5mzd9%2Fqzq47JaS5puvQ9gIJtS48WVccSUCukT3frbcEAE40de%2FVMouteefkfAcqGcWIY1BpqNyJ44CpzCTg49RZUAA%2B81oqdFsPKznQ6V8Vz0pA0f8BVQbLxajAjpSbAIqx%2BdsYijnPvFTlnzqcAYYxDd0zgsNhpMw1e3G0wY6pgHe%2FO7ZGsgMH3HXh5PgjkNKPvKv1UegPyIH1tL9%2BsSBKHHQqWSfXZjGtln2Tp9cFi%2BRJNnuqOf8pL0vqFUjKJz3lNbdkiDWReLgkjowsZjwg7jLte7bN%2FgiTOSW22A6vZ7B%2BhMJXbGt2JbbOjHsRj0ew5EpFf%2FQz8l8LIYVPKYWB%2FfV5d9Ds5RSjmUPLEZ%2FKxUhfut4gJGJMnxc5euN8Ec7H9%2FHKuZP&X-Amz-Signature=204f384eed76b921ac4072a46869ab00b2f5dce2cd0dd28ac02b3234452d07af&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665GTDGPPN%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIEjdZ0kuuqrzJWatadZ75iQ6JrJSPK6sRG%2FRSqDY9%2FvWAiAfPx8qZvjfrOXqAvgyf26tjA2sT6EjKXFIKIk0aojHuir%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMvT1Zwad8pyuEsvGLKtwDU3QnSodkWSCK5IEPG0nZpY4rt5shZk70CpY8yZOx5nDW4YlDsDlqqjrF3I8pVqLngzbTnYdFfM1WDwfOlbxmo4UAFjP2b9P2Aj7Or81hZl6Txxr%2BMkSiEMrAPj0Wg%2FhAdutKretLzEiuIKIQko%2F0ElfL1BygeCitmF5qqxxBp2A3pOVug0OBxMQp0Jt7QAyemFj23QZFCCJ3vIzAESWBh%2BfGMSPNT0rA5E%2BUiWXxEeZEv34%2F5lkswpjmfVr0t5GXoWu%2B1Asxv6BmOJQ9OaYDKQf3ucd7nR%2FvC9bfslBDfYyYXuFW027jVgYQGjXhD8zCV4HFL98VS43cTePRDMk9%2BC152nx9eG8s0WjPFLBQCSP%2FId08%2FkrF0TXeHryeagMngcM%2BnoDFT72eIseBDaKpNUHRY9N2nDAMbqmHiR23lxYshp6wZqQS%2F78rJs4BkUZvSf7dURbrxKSmNTeufG6ZAZ2R%2FY%2FjXfUffY7cq%2BnnhNX2MvyflhYsu5PhCJ2O4MxoPgb2ztDiacRU82HPdQOkfV%2FyTAgju4Y%2BsryWiWrbQy%2B%2BV8xEJD6OylHa4Q4nADr5DPMwaV7VNojqouBjaldheMYlB7dXhgnAasB9D%2FzA1dIyjV%2BaufL7lI0Pad0wruvG0wY6pgFRWLE7cHEQZ%2FaiOtRxl4Ssukv%2BAiAJw1amete8GDtEM%2B5mPxiKeZ%2FO6oEANAFsD3LXGinjtzv1Z3bf%2Bjw2MMUK0WiBywNL6Xny5yq8pGor7BCzvXjJeXNRfVq%2FvO3%2BZCoIsrln2HQ4qvTC7wQ4PXrBCRWh44SHeX3T9lywPn%2FTGiO6B98rpxLeOKGycnvov%2B9yJTSfKhjmKdN2CKA5xll%2BCe2JYopQ&X-Amz-Signature=fba7dab0f3404927461b8950dd00e3f9231fba352cb7b5af5a9915eda1b7a4ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665GTDGPPN%2F20260804%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260804T103701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEIaCXVzLXdlc3QtMiJGMEQCIEjdZ0kuuqrzJWatadZ75iQ6JrJSPK6sRG%2FRSqDY9%2FvWAiAfPx8qZvjfrOXqAvgyf26tjA2sT6EjKXFIKIk0aojHuir%2FAwgLEAAaDDYzNzQyMzE4MzgwNSIMvT1Zwad8pyuEsvGLKtwDU3QnSodkWSCK5IEPG0nZpY4rt5shZk70CpY8yZOx5nDW4YlDsDlqqjrF3I8pVqLngzbTnYdFfM1WDwfOlbxmo4UAFjP2b9P2Aj7Or81hZl6Txxr%2BMkSiEMrAPj0Wg%2FhAdutKretLzEiuIKIQko%2F0ElfL1BygeCitmF5qqxxBp2A3pOVug0OBxMQp0Jt7QAyemFj23QZFCCJ3vIzAESWBh%2BfGMSPNT0rA5E%2BUiWXxEeZEv34%2F5lkswpjmfVr0t5GXoWu%2B1Asxv6BmOJQ9OaYDKQf3ucd7nR%2FvC9bfslBDfYyYXuFW027jVgYQGjXhD8zCV4HFL98VS43cTePRDMk9%2BC152nx9eG8s0WjPFLBQCSP%2FId08%2FkrF0TXeHryeagMngcM%2BnoDFT72eIseBDaKpNUHRY9N2nDAMbqmHiR23lxYshp6wZqQS%2F78rJs4BkUZvSf7dURbrxKSmNTeufG6ZAZ2R%2FY%2FjXfUffY7cq%2BnnhNX2MvyflhYsu5PhCJ2O4MxoPgb2ztDiacRU82HPdQOkfV%2FyTAgju4Y%2BsryWiWrbQy%2B%2BV8xEJD6OylHa4Q4nADr5DPMwaV7VNojqouBjaldheMYlB7dXhgnAasB9D%2FzA1dIyjV%2BaufL7lI0Pad0wruvG0wY6pgFRWLE7cHEQZ%2FaiOtRxl4Ssukv%2BAiAJw1amete8GDtEM%2B5mPxiKeZ%2FO6oEANAFsD3LXGinjtzv1Z3bf%2Bjw2MMUK0WiBywNL6Xny5yq8pGor7BCzvXjJeXNRfVq%2FvO3%2BZCoIsrln2HQ4qvTC7wQ4PXrBCRWh44SHeX3T9lywPn%2FTGiO6B98rpxLeOKGycnvov%2B9yJTSfKhjmKdN2CKA5xll%2BCe2JYopQ&X-Amz-Signature=af86a43fb3b85544a6156f4c74cd2e60394c7ef1a6c3f3009a6fa8d2f3ea41ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
