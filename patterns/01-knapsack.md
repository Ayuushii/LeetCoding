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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OC7AFGS%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIHnS9JXE%2FTKzEpZglo2gAMgH6uhZn3aR83hF1%2BZ6FQwZAiEA5FQPbpCLWHQE1QMJmgpnTRD22qpBZqmrKwpr8rOxrQQqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLXLF52wA69lWsd7JCrcA2tY38ZzBYnEKYdon0Uf9qdhPjWZ2iFNcld8Wu8mWEW6m1XBKHCR2ZBsjSdWlC0w7Ja8ks9oEy0uE6%2B8Gak0HlxNeNbJ%2F%2B%2FZ39%2Fe6yBWcpEVCY%2FuxK%2F5qmCjK4NCudpZH%2BMZoepWNjZJNmzoxU%2BrEjoutzyleRQuV8SLfAfeFNdluftNsnctXFKKLkuFIExCtePuOe%2BgyOpBMmi0SnGtTzSsvYivGtX65Kab80kTIb3WQD6CCJ0Alez4X45WJ5LePF9hwfAfyxG7E1qA7zlpyHNBcOgCB32KaCi9bB%2FEUdoApsOpF9gsNu6qLNtU7R%2F5NuXBrG2Ssw%2Bm%2FW9Z1PnagXadRN%2B0oRfOndoQ3VzOsXtSFRjIMj7%2BZnVqz9SB%2Fk%2BXcfPldeWRTRoqOcfDftuyBBOizpwzs%2BYH7lt1gucvVBBleIt%2BhgtK5OxuLqL44SiKHTngA%2BxUyZL2zo0ddXjfMMSYd8Ka6wR0FikgzuvZVkMh32z9xUAgNoapqkI%2FFamIixuCNAPQIlO0hucXxA6IV1JqT%2Bci9JqJzaX15PlC71bc9fbbAvAvN9S2GdL4jfzUbhshtS6zyJDxWHS4%2Fh4JFGY4%2Blqb%2FLh2JeUbTbftTXrunoo0Txmu2bT3h7xnMOLin9EGOqUBrkxRrK4GsIWziWC%2FYE4UueuN7zi%2BpeaCQhMiHQ3byLBYkao5nOo76vf06t4pJRzRlFvR%2FMJzORpJo3Hmci3rOtXJttiea7cNr%2FfCi5iDaAEVOPTtC0dNzYFbE7pD7dd3%2FDTjISCO9dFYUWydk9oLDQegxRwXK3jsyIqsz2X%2B5vdsxlCry94Ur6UiKCuvXyJzuD4sorSEdPe%2BodgV4AwohuPHsrbk&X-Amz-Signature=c44d7546af48d462df4d000a6bff276ccad44703394707df9c63ecc57b423402&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OC7AFGS%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIHnS9JXE%2FTKzEpZglo2gAMgH6uhZn3aR83hF1%2BZ6FQwZAiEA5FQPbpCLWHQE1QMJmgpnTRD22qpBZqmrKwpr8rOxrQQqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLXLF52wA69lWsd7JCrcA2tY38ZzBYnEKYdon0Uf9qdhPjWZ2iFNcld8Wu8mWEW6m1XBKHCR2ZBsjSdWlC0w7Ja8ks9oEy0uE6%2B8Gak0HlxNeNbJ%2F%2B%2FZ39%2Fe6yBWcpEVCY%2FuxK%2F5qmCjK4NCudpZH%2BMZoepWNjZJNmzoxU%2BrEjoutzyleRQuV8SLfAfeFNdluftNsnctXFKKLkuFIExCtePuOe%2BgyOpBMmi0SnGtTzSsvYivGtX65Kab80kTIb3WQD6CCJ0Alez4X45WJ5LePF9hwfAfyxG7E1qA7zlpyHNBcOgCB32KaCi9bB%2FEUdoApsOpF9gsNu6qLNtU7R%2F5NuXBrG2Ssw%2Bm%2FW9Z1PnagXadRN%2B0oRfOndoQ3VzOsXtSFRjIMj7%2BZnVqz9SB%2Fk%2BXcfPldeWRTRoqOcfDftuyBBOizpwzs%2BYH7lt1gucvVBBleIt%2BhgtK5OxuLqL44SiKHTngA%2BxUyZL2zo0ddXjfMMSYd8Ka6wR0FikgzuvZVkMh32z9xUAgNoapqkI%2FFamIixuCNAPQIlO0hucXxA6IV1JqT%2Bci9JqJzaX15PlC71bc9fbbAvAvN9S2GdL4jfzUbhshtS6zyJDxWHS4%2Fh4JFGY4%2Blqb%2FLh2JeUbTbftTXrunoo0Txmu2bT3h7xnMOLin9EGOqUBrkxRrK4GsIWziWC%2FYE4UueuN7zi%2BpeaCQhMiHQ3byLBYkao5nOo76vf06t4pJRzRlFvR%2FMJzORpJo3Hmci3rOtXJttiea7cNr%2FfCi5iDaAEVOPTtC0dNzYFbE7pD7dd3%2FDTjISCO9dFYUWydk9oLDQegxRwXK3jsyIqsz2X%2B5vdsxlCry94Ur6UiKCuvXyJzuD4sorSEdPe%2BodgV4AwohuPHsrbk&X-Amz-Signature=1d2e1179c69d6d702420dcb9375f41b76f8ed80202e889013a423dabe2fb5bf7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664OC7AFGS%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIHnS9JXE%2FTKzEpZglo2gAMgH6uhZn3aR83hF1%2BZ6FQwZAiEA5FQPbpCLWHQE1QMJmgpnTRD22qpBZqmrKwpr8rOxrQQqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLXLF52wA69lWsd7JCrcA2tY38ZzBYnEKYdon0Uf9qdhPjWZ2iFNcld8Wu8mWEW6m1XBKHCR2ZBsjSdWlC0w7Ja8ks9oEy0uE6%2B8Gak0HlxNeNbJ%2F%2B%2FZ39%2Fe6yBWcpEVCY%2FuxK%2F5qmCjK4NCudpZH%2BMZoepWNjZJNmzoxU%2BrEjoutzyleRQuV8SLfAfeFNdluftNsnctXFKKLkuFIExCtePuOe%2BgyOpBMmi0SnGtTzSsvYivGtX65Kab80kTIb3WQD6CCJ0Alez4X45WJ5LePF9hwfAfyxG7E1qA7zlpyHNBcOgCB32KaCi9bB%2FEUdoApsOpF9gsNu6qLNtU7R%2F5NuXBrG2Ssw%2Bm%2FW9Z1PnagXadRN%2B0oRfOndoQ3VzOsXtSFRjIMj7%2BZnVqz9SB%2Fk%2BXcfPldeWRTRoqOcfDftuyBBOizpwzs%2BYH7lt1gucvVBBleIt%2BhgtK5OxuLqL44SiKHTngA%2BxUyZL2zo0ddXjfMMSYd8Ka6wR0FikgzuvZVkMh32z9xUAgNoapqkI%2FFamIixuCNAPQIlO0hucXxA6IV1JqT%2Bci9JqJzaX15PlC71bc9fbbAvAvN9S2GdL4jfzUbhshtS6zyJDxWHS4%2Fh4JFGY4%2Blqb%2FLh2JeUbTbftTXrunoo0Txmu2bT3h7xnMOLin9EGOqUBrkxRrK4GsIWziWC%2FYE4UueuN7zi%2BpeaCQhMiHQ3byLBYkao5nOo76vf06t4pJRzRlFvR%2FMJzORpJo3Hmci3rOtXJttiea7cNr%2FfCi5iDaAEVOPTtC0dNzYFbE7pD7dd3%2FDTjISCO9dFYUWydk9oLDQegxRwXK3jsyIqsz2X%2B5vdsxlCry94Ur6UiKCuvXyJzuD4sorSEdPe%2BodgV4AwohuPHsrbk&X-Amz-Signature=706dcc7a364483d5bda46cff7ec8241efd5b8ec0bac1d3debe3bca8366d2acb0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSIEYW4L%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIHasa5GfdpJ5gFuBJoL5XeyyWn3FUHZS35%2BZJlYmSWdtAiBSnhsVa3SRUl%2BG%2FCojlvuJzNo%2FWIg2Ko3H4AgRyPxNFCqIBAjM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBQyT73Hrw9mFCWNKtwDjv%2BBpOGBe35fWTRLbHSP1xj2y6lgHtpjgPt7ijLQ6GtrBuo63Yjlt6%2BLd08Mivk2Pl5PAl9xIVNU9ngVTZdp%2BOht7Hisnn7kJzFXV2gypuPt69gNPCLZPTG001gDxOItOZednJ7hpT2th3zggQLx51gcXyF1MuN7NqjoF%2F%2Bsi5OuIJMwYV10Lv6V9TLRYPvZe6BrPq1hn5KUPfTg2HyGoiRguGQZ0q1Hn1d%2BygwVYOFH56jath5NqreABJQHbLZ93ERTRi33%2FvnngTmnrFLywG46mX9%2F%2Ff3RzFDRW4gldlbL7nUQ73c1en3r5sr44qMWHse3P%2FISIKrHCpiPQ74WaacuTih5QbfVsK%2F02apYRSNRXzG5VYaK3F4pVFKYMR9USeetilt7u8buj0TPLDnSqpiwoYvZTQq01YvxLU6njFcZ0JNdnpQc4AXd8hZe5Zw4KcmeP4BkVx41bUP1lSKLtexGdoK8uLf9GTGZeKmuwHAqDJFfH7bu3%2FLol0TVXoapah0ATVlUbeuvygmUX2MGVydFKPdwUhuBI%2BTyzsrxb5SxOMMB7JLum5kDiDiIHTxgfcgPjXC6rOyove6qOSK%2Br7lygIINTgMEEbp757klpbF4DlvQSswDIpNrMVownOSf0QY6pgH4m1Xj4u8ChKMJOcTDj1XMxl%2FshkcKOlrfZpxRsl6ZLDO7nS0HRN5tjKiAFD2a1mis3SwKF7O9B%2B49f%2FcjXterP0QrJZyKWooVSHwfzgBeVUfBO9x0MY9S3A3e8Tke3I%2FCvgPUDiHIFuIpTtuCZXCXetJW1Go1QRwQBoXZHaCNssFQDuAlAEWzc3NL5jklPJ9v%2FK58jnSzGac614Q7OaJvaADrAZk4&X-Amz-Signature=44b1d2bb7e5d9f7184c0aad657f11eac0a08cbd58fcfa4db5aaf61d4f73f12d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSIEYW4L%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIHasa5GfdpJ5gFuBJoL5XeyyWn3FUHZS35%2BZJlYmSWdtAiBSnhsVa3SRUl%2BG%2FCojlvuJzNo%2FWIg2Ko3H4AgRyPxNFCqIBAjM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBQyT73Hrw9mFCWNKtwDjv%2BBpOGBe35fWTRLbHSP1xj2y6lgHtpjgPt7ijLQ6GtrBuo63Yjlt6%2BLd08Mivk2Pl5PAl9xIVNU9ngVTZdp%2BOht7Hisnn7kJzFXV2gypuPt69gNPCLZPTG001gDxOItOZednJ7hpT2th3zggQLx51gcXyF1MuN7NqjoF%2F%2Bsi5OuIJMwYV10Lv6V9TLRYPvZe6BrPq1hn5KUPfTg2HyGoiRguGQZ0q1Hn1d%2BygwVYOFH56jath5NqreABJQHbLZ93ERTRi33%2FvnngTmnrFLywG46mX9%2F%2Ff3RzFDRW4gldlbL7nUQ73c1en3r5sr44qMWHse3P%2FISIKrHCpiPQ74WaacuTih5QbfVsK%2F02apYRSNRXzG5VYaK3F4pVFKYMR9USeetilt7u8buj0TPLDnSqpiwoYvZTQq01YvxLU6njFcZ0JNdnpQc4AXd8hZe5Zw4KcmeP4BkVx41bUP1lSKLtexGdoK8uLf9GTGZeKmuwHAqDJFfH7bu3%2FLol0TVXoapah0ATVlUbeuvygmUX2MGVydFKPdwUhuBI%2BTyzsrxb5SxOMMB7JLum5kDiDiIHTxgfcgPjXC6rOyove6qOSK%2Br7lygIINTgMEEbp757klpbF4DlvQSswDIpNrMVownOSf0QY6pgH4m1Xj4u8ChKMJOcTDj1XMxl%2FshkcKOlrfZpxRsl6ZLDO7nS0HRN5tjKiAFD2a1mis3SwKF7O9B%2B49f%2FcjXterP0QrJZyKWooVSHwfzgBeVUfBO9x0MY9S3A3e8Tke3I%2FCvgPUDiHIFuIpTtuCZXCXetJW1Go1QRwQBoXZHaCNssFQDuAlAEWzc3NL5jklPJ9v%2FK58jnSzGac614Q7OaJvaADrAZk4&X-Amz-Signature=c11bb267191d2cb594b192fffbb16c761ecaaa4139bc613b2296af074bc205ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSIEYW4L%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIHasa5GfdpJ5gFuBJoL5XeyyWn3FUHZS35%2BZJlYmSWdtAiBSnhsVa3SRUl%2BG%2FCojlvuJzNo%2FWIg2Ko3H4AgRyPxNFCqIBAjM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBQyT73Hrw9mFCWNKtwDjv%2BBpOGBe35fWTRLbHSP1xj2y6lgHtpjgPt7ijLQ6GtrBuo63Yjlt6%2BLd08Mivk2Pl5PAl9xIVNU9ngVTZdp%2BOht7Hisnn7kJzFXV2gypuPt69gNPCLZPTG001gDxOItOZednJ7hpT2th3zggQLx51gcXyF1MuN7NqjoF%2F%2Bsi5OuIJMwYV10Lv6V9TLRYPvZe6BrPq1hn5KUPfTg2HyGoiRguGQZ0q1Hn1d%2BygwVYOFH56jath5NqreABJQHbLZ93ERTRi33%2FvnngTmnrFLywG46mX9%2F%2Ff3RzFDRW4gldlbL7nUQ73c1en3r5sr44qMWHse3P%2FISIKrHCpiPQ74WaacuTih5QbfVsK%2F02apYRSNRXzG5VYaK3F4pVFKYMR9USeetilt7u8buj0TPLDnSqpiwoYvZTQq01YvxLU6njFcZ0JNdnpQc4AXd8hZe5Zw4KcmeP4BkVx41bUP1lSKLtexGdoK8uLf9GTGZeKmuwHAqDJFfH7bu3%2FLol0TVXoapah0ATVlUbeuvygmUX2MGVydFKPdwUhuBI%2BTyzsrxb5SxOMMB7JLum5kDiDiIHTxgfcgPjXC6rOyove6qOSK%2Br7lygIINTgMEEbp757klpbF4DlvQSswDIpNrMVownOSf0QY6pgH4m1Xj4u8ChKMJOcTDj1XMxl%2FshkcKOlrfZpxRsl6ZLDO7nS0HRN5tjKiAFD2a1mis3SwKF7O9B%2B49f%2FcjXterP0QrJZyKWooVSHwfzgBeVUfBO9x0MY9S3A3e8Tke3I%2FCvgPUDiHIFuIpTtuCZXCXetJW1Go1QRwQBoXZHaCNssFQDuAlAEWzc3NL5jklPJ9v%2FK58jnSzGac614Q7OaJvaADrAZk4&X-Amz-Signature=29e7f193097fbd3faf3e18661e7ab2fed9d15a9191be6f62d1b1cf8e22312dff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSIEYW4L%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIHasa5GfdpJ5gFuBJoL5XeyyWn3FUHZS35%2BZJlYmSWdtAiBSnhsVa3SRUl%2BG%2FCojlvuJzNo%2FWIg2Ko3H4AgRyPxNFCqIBAjM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBQyT73Hrw9mFCWNKtwDjv%2BBpOGBe35fWTRLbHSP1xj2y6lgHtpjgPt7ijLQ6GtrBuo63Yjlt6%2BLd08Mivk2Pl5PAl9xIVNU9ngVTZdp%2BOht7Hisnn7kJzFXV2gypuPt69gNPCLZPTG001gDxOItOZednJ7hpT2th3zggQLx51gcXyF1MuN7NqjoF%2F%2Bsi5OuIJMwYV10Lv6V9TLRYPvZe6BrPq1hn5KUPfTg2HyGoiRguGQZ0q1Hn1d%2BygwVYOFH56jath5NqreABJQHbLZ93ERTRi33%2FvnngTmnrFLywG46mX9%2F%2Ff3RzFDRW4gldlbL7nUQ73c1en3r5sr44qMWHse3P%2FISIKrHCpiPQ74WaacuTih5QbfVsK%2F02apYRSNRXzG5VYaK3F4pVFKYMR9USeetilt7u8buj0TPLDnSqpiwoYvZTQq01YvxLU6njFcZ0JNdnpQc4AXd8hZe5Zw4KcmeP4BkVx41bUP1lSKLtexGdoK8uLf9GTGZeKmuwHAqDJFfH7bu3%2FLol0TVXoapah0ATVlUbeuvygmUX2MGVydFKPdwUhuBI%2BTyzsrxb5SxOMMB7JLum5kDiDiIHTxgfcgPjXC6rOyove6qOSK%2Br7lygIINTgMEEbp757klpbF4DlvQSswDIpNrMVownOSf0QY6pgH4m1Xj4u8ChKMJOcTDj1XMxl%2FshkcKOlrfZpxRsl6ZLDO7nS0HRN5tjKiAFD2a1mis3SwKF7O9B%2B49f%2FcjXterP0QrJZyKWooVSHwfzgBeVUfBO9x0MY9S3A3e8Tke3I%2FCvgPUDiHIFuIpTtuCZXCXetJW1Go1QRwQBoXZHaCNssFQDuAlAEWzc3NL5jklPJ9v%2FK58jnSzGac614Q7OaJvaADrAZk4&X-Amz-Signature=59759958cb85a4cc2f5b0de18988fae095eef05979ffb8a026e4f80cb8324489&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TW4OY7GG%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111328Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIDKiU8DIcONZ753FipEY0Nw5i%2B1qpsyBMz1BodLdwAHGAiEAyevwsatqGFo%2Fkubk4thD%2F9g5CxcPrjc35TbvPhoTSp0qiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEgWio4pUdXXyxhjxircA%2BBrJ9O%2BL1s6vny%2F3jVo%2Ffn0s98Lreie%2B5%2BBRI5tY852DQ4gcN2%2Be6Ju7O%2FFvyrII1wRYuy1lHkjLPWOR%2FM1mIpvU6ycoVcBJl94h%2Fb8761S%2BhsXuHfOUwp7pgyi%2Fmc47hMRSZm%2BdFoHEmAVDUOu73ddpIGkHdaA4eCYa%2BI%2BfVTVpXtQM8CZPgRj4o1i0LjtrBVGVZH0SS%2BU%2FcMsKOagjGlyFQkqqxuQcNxArY%2BF73WzzZNarlkDj0MOd1F2qEotaLoaa5f0E8CQuchPMKOala3zkfH3g%2BzavxYVYpdQbhrkB2KIRck5HUVzRkk9WXnd0prjiglTiyiOEYl46hGRirux1XbpQmbh6p2YzxJVrEHP2MVxrGZESafUKA%2BURCOO1yG7Tzz2nTnHCrpkZq5F%2B76dQ%2F7%2B1I%2BcX8MctFgRpekuE%2BcVr8V5aWXU%2FLhaQ6iFuXjyfN%2F4WPu3NhzKb1tQwqQhAEyh%2B5JppW3l2m48am3JtUqKz4%2Boxt9PwFUZz8GBFlT0WO3RrH6eBziGOziSB%2FQtP0N4qzt3bDzlPBswPX2W%2FsV6hDLlNd%2BqtE5atFxVGcfN0oOWHDijHp%2F2ZvNKi5MvXmcOdbX0au%2B6Pmwi9CYGUwOokpwc%2F0ulT3SYMOzkn9EGOqUBT02NdweCb3KwmAQCtr5o9cVLhG6xpvc4jJSYbfM9nXmc4I8XcU3s%2B90Ad%2BEnE6rFAIX83P1B%2FhabgSxj5N6wBELl5tdOceU1FiWkDYqLvvCyHkG5N3miPXQt0TFbTGGegatT7DuXyseTpz%2FiMScR57ShDk%2FSqL9gSjcbdtv6oQAO9qYk9zLDA%2BNup%2FTEP6jy9h2Hi0yAsytrwiwck8TT9W%2FRKWrH&X-Amz-Signature=ffb98bc89d02133f519d28eac7fddfacc6713469738a52c45649a69db7f8cf47&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T4ZI4N47%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111328Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIA%2FrRmyxO1oB5Nk%2Bn3y3IjNFPVj1maA9n7EO8G4XWZ1QAiEAky2Nrtb6Jv%2F7A99R3IdI0tBLZ1th2lKsEUxbVTNvNFQqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPGrLMaXApNbGXUbTircA9F1sPDXphV1iDUKppbXOUezXUhOEU3%2FTP6JQw1NcFPkQAd%2BaI%2Fk9MwJ41y79Heo21dpeZuGHE%2BZWf5Xboa50WXAQB1Ptwc0V7e1XyazKZsZOcUawBpHefctTjI5CpKMh4%2Bbjrp5oHTgvUv4jOc58PqoMV7q5Lm8px%2B5Su0G9fk84E4IXa%2Fs0Ufsz8zsyli9D47tdumMimNpH5pT9v6ajfB5ZLfEKfGCA6O8A%2B1MJv8GrPWXyJxjEOZrRoIuHtUrDOVEaZPNa0gRhBwCuLSXR4RQuw43UoaW7bzSg8OQXhOPj%2Fov83sg4ilDIAskeA7%2FwMfXsHSO27EX%2FNfrSfpXk7kmV6m3PzNU1H6mc4zLZljomuzP%2BCD1LIwQay7BJPkwH2hLl%2FKKDb7sOzPsHjuf%2BXWs7VU1F0u97ha2XeKVg5gZyCb68IK4IACNrprXWbV%2BmRDdKSXXqISvZ0TrYT9uvbhbBa5hrQ2qxdBNkr9IvsbSsUQoFzpL0RjO5tKeBGyo%2FzgRiqRNeE1b42PZK%2BSszboeWR7%2F9KEYi5MAJaxVBGy8Jzop6ZjtJ7YNKqxysz5RpBIl0WkDtVv1QDu6L7mNVrXxCxCzzW5cgGkIZLcPs%2FaV08%2Bf5clgI%2Bas%2Foc4MJnjn9EGOqUBwSwki6Nf8i%2Bp8QAJwrXjnkEdx86TnP21wuG6hASbi2AurgRCA%2BIKIbX0QcFps0U%2FFW%2BhA5EXvTusSfzWzhkDPPHfEnRPBuseeTzcTUBbzTjF5H4H8uSnKhZ0CO4T%2BpmMI60GEtYJ5jZLm0Hoa4uw4ghmBPb%2F9naIPIfEM1aIAWvOy6Wu%2FfB8D%2BkNMzknrSqEozbjPx3tSknnbnYXUK8oaI4uEewn&X-Amz-Signature=3e70c126b4e148dad2ab47272ca46e96311fbac3ce95737dd6e15ee6cafe60b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T4ZI4N47%2F20260609%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260609T111328Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJHMEUCIA%2FrRmyxO1oB5Nk%2Bn3y3IjNFPVj1maA9n7EO8G4XWZ1QAiEAky2Nrtb6Jv%2F7A99R3IdI0tBLZ1th2lKsEUxbVTNvNFQqiAQIzP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPGrLMaXApNbGXUbTircA9F1sPDXphV1iDUKppbXOUezXUhOEU3%2FTP6JQw1NcFPkQAd%2BaI%2Fk9MwJ41y79Heo21dpeZuGHE%2BZWf5Xboa50WXAQB1Ptwc0V7e1XyazKZsZOcUawBpHefctTjI5CpKMh4%2Bbjrp5oHTgvUv4jOc58PqoMV7q5Lm8px%2B5Su0G9fk84E4IXa%2Fs0Ufsz8zsyli9D47tdumMimNpH5pT9v6ajfB5ZLfEKfGCA6O8A%2B1MJv8GrPWXyJxjEOZrRoIuHtUrDOVEaZPNa0gRhBwCuLSXR4RQuw43UoaW7bzSg8OQXhOPj%2Fov83sg4ilDIAskeA7%2FwMfXsHSO27EX%2FNfrSfpXk7kmV6m3PzNU1H6mc4zLZljomuzP%2BCD1LIwQay7BJPkwH2hLl%2FKKDb7sOzPsHjuf%2BXWs7VU1F0u97ha2XeKVg5gZyCb68IK4IACNrprXWbV%2BmRDdKSXXqISvZ0TrYT9uvbhbBa5hrQ2qxdBNkr9IvsbSsUQoFzpL0RjO5tKeBGyo%2FzgRiqRNeE1b42PZK%2BSszboeWR7%2F9KEYi5MAJaxVBGy8Jzop6ZjtJ7YNKqxysz5RpBIl0WkDtVv1QDu6L7mNVrXxCxCzzW5cgGkIZLcPs%2FaV08%2Bf5clgI%2Bas%2Foc4MJnjn9EGOqUBwSwki6Nf8i%2Bp8QAJwrXjnkEdx86TnP21wuG6hASbi2AurgRCA%2BIKIbX0QcFps0U%2FFW%2BhA5EXvTusSfzWzhkDPPHfEnRPBuseeTzcTUBbzTjF5H4H8uSnKhZ0CO4T%2BpmMI60GEtYJ5jZLm0Hoa4uw4ghmBPb%2F9naIPIfEM1aIAWvOy6Wu%2FfB8D%2BkNMzknrSqEozbjPx3tSknnbnYXUK8oaI4uEewn&X-Amz-Signature=fb2611c5f1c04e93fe7ab79c892f75a4e7044bbc1c16d2548ac5d17f33425547&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
