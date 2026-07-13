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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLV7QXZZ%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJGMEQCIAlF4x%2BOdDTpl5K7RxqsCARu6marUatteftv02sXW53DAiB43ai%2Fy2T4ExWqqYPbCBDHUeOiBAnc7QIYIXmUm6J2iSqIBAj8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM2JFoGajy5TjOsL%2FhKtwD5i4LRyP752OP39PKwjwQdN0XSuP57MQVR1TjqLOwLvsvxOjC4KRLBDlr6iL9vzkuv41M5nn%2BJ7Bi65VQ8D59Rg2RGbGbw1YLDmx9Zn9cMMfVFajj%2FuQDaG6D2eDaqB%2Fhq6VFShZ8sdbgwcXdiClkNVSquESbfXrwLEuJk6Z10ThGYTR6UUcjUmv9%2Fxy9NSF5Acc5nYK%2Ffj0ZTW4atCwM84jp%2FeTzB7Xfu4r1UtbsXaYMadDv8H29d3k%2FkXgIes2CzoNtfAvoZxp22dol2MrSyxDPu1QFPgwLFUTLJMfmnp6n2AEdZMK1ajoSv%2B5kV8ddDD5jHhaZN7BTGfROBKmMzGcKiekfRWcuKCefiHfFn6ia7A0AGXN0n5ZSvM9SSpmCBHDzXQndwwK6G%2BT%2B9aPdakyb4pErGVHSO9qInSrvOC%2B8nMpy8Ib2rYBBAbhSMlaSYBu1l3e2BXptQC1Xpt1lsXjSuB5JpTJXzKmi%2FtsyvdTK6%2BGhlZPyC2Ddy%2Bq1afIlDnnV7%2BUfPU7esBjjoIPZJX5UchZwOyRSaQ%2B1WV8hPJk%2BrvIQjlKpEKbw2dmSR49HXStBc6JP4NVdMm6mrpv3gY8fk0ToC%2FrA9%2FMN6iBoylwrUG9wtFaC8X%2FzChUwxYDT0gY6pgHGVF73iSBMErYLVMUfVKyYeIS8GJVs5bEsttGkLEfdspwsqdFN48t%2FgVh10XmeYX0md4KeoBN4VkcJSWrb5JchGNbmlQINmOEBCpvZnMorv1ksBYTVkiUdtEXRkedxgpsVrh%2BCzz0MzF8%2BxC5tohjsi%2BmeRZN6i4kQOnACF2tVH%2BvIm5QtnGHtpVa3H4d4KXxVVEmxykKISJaRYCnK2vxdgp33p37T&X-Amz-Signature=98e52647d238d2df5fa686a352ae413a4c13f59a5eb20ee18c286edb496dd16f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLV7QXZZ%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJGMEQCIAlF4x%2BOdDTpl5K7RxqsCARu6marUatteftv02sXW53DAiB43ai%2Fy2T4ExWqqYPbCBDHUeOiBAnc7QIYIXmUm6J2iSqIBAj8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM2JFoGajy5TjOsL%2FhKtwD5i4LRyP752OP39PKwjwQdN0XSuP57MQVR1TjqLOwLvsvxOjC4KRLBDlr6iL9vzkuv41M5nn%2BJ7Bi65VQ8D59Rg2RGbGbw1YLDmx9Zn9cMMfVFajj%2FuQDaG6D2eDaqB%2Fhq6VFShZ8sdbgwcXdiClkNVSquESbfXrwLEuJk6Z10ThGYTR6UUcjUmv9%2Fxy9NSF5Acc5nYK%2Ffj0ZTW4atCwM84jp%2FeTzB7Xfu4r1UtbsXaYMadDv8H29d3k%2FkXgIes2CzoNtfAvoZxp22dol2MrSyxDPu1QFPgwLFUTLJMfmnp6n2AEdZMK1ajoSv%2B5kV8ddDD5jHhaZN7BTGfROBKmMzGcKiekfRWcuKCefiHfFn6ia7A0AGXN0n5ZSvM9SSpmCBHDzXQndwwK6G%2BT%2B9aPdakyb4pErGVHSO9qInSrvOC%2B8nMpy8Ib2rYBBAbhSMlaSYBu1l3e2BXptQC1Xpt1lsXjSuB5JpTJXzKmi%2FtsyvdTK6%2BGhlZPyC2Ddy%2Bq1afIlDnnV7%2BUfPU7esBjjoIPZJX5UchZwOyRSaQ%2B1WV8hPJk%2BrvIQjlKpEKbw2dmSR49HXStBc6JP4NVdMm6mrpv3gY8fk0ToC%2FrA9%2FMN6iBoylwrUG9wtFaC8X%2FzChUwxYDT0gY6pgHGVF73iSBMErYLVMUfVKyYeIS8GJVs5bEsttGkLEfdspwsqdFN48t%2FgVh10XmeYX0md4KeoBN4VkcJSWrb5JchGNbmlQINmOEBCpvZnMorv1ksBYTVkiUdtEXRkedxgpsVrh%2BCzz0MzF8%2BxC5tohjsi%2BmeRZN6i4kQOnACF2tVH%2BvIm5QtnGHtpVa3H4d4KXxVVEmxykKISJaRYCnK2vxdgp33p37T&X-Amz-Signature=f4d66bfe923528ad6587146b9619525f6a044f768de13865961f38b779ba8a9a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLV7QXZZ%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJGMEQCIAlF4x%2BOdDTpl5K7RxqsCARu6marUatteftv02sXW53DAiB43ai%2Fy2T4ExWqqYPbCBDHUeOiBAnc7QIYIXmUm6J2iSqIBAj8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM2JFoGajy5TjOsL%2FhKtwD5i4LRyP752OP39PKwjwQdN0XSuP57MQVR1TjqLOwLvsvxOjC4KRLBDlr6iL9vzkuv41M5nn%2BJ7Bi65VQ8D59Rg2RGbGbw1YLDmx9Zn9cMMfVFajj%2FuQDaG6D2eDaqB%2Fhq6VFShZ8sdbgwcXdiClkNVSquESbfXrwLEuJk6Z10ThGYTR6UUcjUmv9%2Fxy9NSF5Acc5nYK%2Ffj0ZTW4atCwM84jp%2FeTzB7Xfu4r1UtbsXaYMadDv8H29d3k%2FkXgIes2CzoNtfAvoZxp22dol2MrSyxDPu1QFPgwLFUTLJMfmnp6n2AEdZMK1ajoSv%2B5kV8ddDD5jHhaZN7BTGfROBKmMzGcKiekfRWcuKCefiHfFn6ia7A0AGXN0n5ZSvM9SSpmCBHDzXQndwwK6G%2BT%2B9aPdakyb4pErGVHSO9qInSrvOC%2B8nMpy8Ib2rYBBAbhSMlaSYBu1l3e2BXptQC1Xpt1lsXjSuB5JpTJXzKmi%2FtsyvdTK6%2BGhlZPyC2Ddy%2Bq1afIlDnnV7%2BUfPU7esBjjoIPZJX5UchZwOyRSaQ%2B1WV8hPJk%2BrvIQjlKpEKbw2dmSR49HXStBc6JP4NVdMm6mrpv3gY8fk0ToC%2FrA9%2FMN6iBoylwrUG9wtFaC8X%2FzChUwxYDT0gY6pgHGVF73iSBMErYLVMUfVKyYeIS8GJVs5bEsttGkLEfdspwsqdFN48t%2FgVh10XmeYX0md4KeoBN4VkcJSWrb5JchGNbmlQINmOEBCpvZnMorv1ksBYTVkiUdtEXRkedxgpsVrh%2BCzz0MzF8%2BxC5tohjsi%2BmeRZN6i4kQOnACF2tVH%2BvIm5QtnGHtpVa3H4d4KXxVVEmxykKISJaRYCnK2vxdgp33p37T&X-Amz-Signature=55df94c68941b2df66cfe31af359df73134de2c7c2e9824a53c048bffbfb5725&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YP4OANVO%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIQDZb44s%2BLgwg9qLjbKqGthgsSsKsaD7%2Bh5k%2BcEKxK%2FnGgIgBBOk3sLOSkJNqNPO44amKTsHGeD7UDZoCFqtjOoJDLkqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBm4EwokgBkUAIY2DyrcA1%2B6BOa9tzdEPLA98Sm8YXz%2F9313tENErgOvUs0Xcl%2FYrXjumDD5Q39vfZocSkT%2FC8X%2BSzhL2uypt6SEsrGjem1tlts3A80K9UupNSdI%2B%2FaYdEvlxIK6z1duUbsxMmRHiqrYWkpQGR0I0vbhE7pPONpOoPL7BtmJtfNM04OcCsPXI1Db%2BAQNncWHMRPH%2BRDcaa0oa34e3tPFP56b3fggborCsanJS%2F6vbjbg%2FpjO5yVXsj%2Bs%2F6OVTRoqdemjdp%2FdFb0YP2jNL2STKUd8UNFnAgt3pKjITWiG0psSYV9t%2FcQjdDoTW70hAQZpJW5LvW2ohg9Fl4RH%2BQ%2Bo2zPcn%2FaxRN4deG9WDwaikfIq%2BPtZVYpEPT2wM2ZXR9MMX3SWtXKiOIvIagV0PO0u8zxuRfefz9zlmj1UpVTYiYHxSSiXzLuRIjd4Pb5eCC8DbTOTSCEW5VIzWxK%2B7iQjNWL1IgHnR9FQZ9V9T3z4j7twl1F5WBcfTaq1fuu6%2FHY8qg5ibYazI0Obhw3bTVnKqO8112Qf2cAYEwu%2BK8aDCgLB1aUOiDIgl4YhZSG9EZJsLHtvjAAHo34wOd4rOpaF1oPHcmyrlK6xi8IZHeDVMmgCJ4ksgPBVxpkRmPlI6FtgGmp3MKCE09IGOqUB%2FQHiQpVbVVwQRoqGpbG%2BqoHc4l0iWtW9TXEzEP9ySuR7BNapgnPdzMw7DhDGhyjBT3bakte86SMm48W4HnEGSI69i5cYMJRlB6p03z6fCv%2BRYKzhxFQfgV36XfCQP5dzn2C8zWy4iN5ySZ37MwnEn%2FefI%2FivvpROxNOWFdScx%2F4wmhWYkFiN%2BG4mZffw0%2FgzsSkkS7Tz%2Ff88nqguZ7AEAsYGc3aV&X-Amz-Signature=b054ed67a978a9022b2589d93e8fad76f7c7642be79189c96eef039ceccf34e9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YP4OANVO%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIQDZb44s%2BLgwg9qLjbKqGthgsSsKsaD7%2Bh5k%2BcEKxK%2FnGgIgBBOk3sLOSkJNqNPO44amKTsHGeD7UDZoCFqtjOoJDLkqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBm4EwokgBkUAIY2DyrcA1%2B6BOa9tzdEPLA98Sm8YXz%2F9313tENErgOvUs0Xcl%2FYrXjumDD5Q39vfZocSkT%2FC8X%2BSzhL2uypt6SEsrGjem1tlts3A80K9UupNSdI%2B%2FaYdEvlxIK6z1duUbsxMmRHiqrYWkpQGR0I0vbhE7pPONpOoPL7BtmJtfNM04OcCsPXI1Db%2BAQNncWHMRPH%2BRDcaa0oa34e3tPFP56b3fggborCsanJS%2F6vbjbg%2FpjO5yVXsj%2Bs%2F6OVTRoqdemjdp%2FdFb0YP2jNL2STKUd8UNFnAgt3pKjITWiG0psSYV9t%2FcQjdDoTW70hAQZpJW5LvW2ohg9Fl4RH%2BQ%2Bo2zPcn%2FaxRN4deG9WDwaikfIq%2BPtZVYpEPT2wM2ZXR9MMX3SWtXKiOIvIagV0PO0u8zxuRfefz9zlmj1UpVTYiYHxSSiXzLuRIjd4Pb5eCC8DbTOTSCEW5VIzWxK%2B7iQjNWL1IgHnR9FQZ9V9T3z4j7twl1F5WBcfTaq1fuu6%2FHY8qg5ibYazI0Obhw3bTVnKqO8112Qf2cAYEwu%2BK8aDCgLB1aUOiDIgl4YhZSG9EZJsLHtvjAAHo34wOd4rOpaF1oPHcmyrlK6xi8IZHeDVMmgCJ4ksgPBVxpkRmPlI6FtgGmp3MKCE09IGOqUB%2FQHiQpVbVVwQRoqGpbG%2BqoHc4l0iWtW9TXEzEP9ySuR7BNapgnPdzMw7DhDGhyjBT3bakte86SMm48W4HnEGSI69i5cYMJRlB6p03z6fCv%2BRYKzhxFQfgV36XfCQP5dzn2C8zWy4iN5ySZ37MwnEn%2FefI%2FivvpROxNOWFdScx%2F4wmhWYkFiN%2BG4mZffw0%2FgzsSkkS7Tz%2Ff88nqguZ7AEAsYGc3aV&X-Amz-Signature=592159851a01a6532f4490a37de38e60f0946cd806126f54cd516f8fa81f425d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YP4OANVO%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIQDZb44s%2BLgwg9qLjbKqGthgsSsKsaD7%2Bh5k%2BcEKxK%2FnGgIgBBOk3sLOSkJNqNPO44amKTsHGeD7UDZoCFqtjOoJDLkqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBm4EwokgBkUAIY2DyrcA1%2B6BOa9tzdEPLA98Sm8YXz%2F9313tENErgOvUs0Xcl%2FYrXjumDD5Q39vfZocSkT%2FC8X%2BSzhL2uypt6SEsrGjem1tlts3A80K9UupNSdI%2B%2FaYdEvlxIK6z1duUbsxMmRHiqrYWkpQGR0I0vbhE7pPONpOoPL7BtmJtfNM04OcCsPXI1Db%2BAQNncWHMRPH%2BRDcaa0oa34e3tPFP56b3fggborCsanJS%2F6vbjbg%2FpjO5yVXsj%2Bs%2F6OVTRoqdemjdp%2FdFb0YP2jNL2STKUd8UNFnAgt3pKjITWiG0psSYV9t%2FcQjdDoTW70hAQZpJW5LvW2ohg9Fl4RH%2BQ%2Bo2zPcn%2FaxRN4deG9WDwaikfIq%2BPtZVYpEPT2wM2ZXR9MMX3SWtXKiOIvIagV0PO0u8zxuRfefz9zlmj1UpVTYiYHxSSiXzLuRIjd4Pb5eCC8DbTOTSCEW5VIzWxK%2B7iQjNWL1IgHnR9FQZ9V9T3z4j7twl1F5WBcfTaq1fuu6%2FHY8qg5ibYazI0Obhw3bTVnKqO8112Qf2cAYEwu%2BK8aDCgLB1aUOiDIgl4YhZSG9EZJsLHtvjAAHo34wOd4rOpaF1oPHcmyrlK6xi8IZHeDVMmgCJ4ksgPBVxpkRmPlI6FtgGmp3MKCE09IGOqUB%2FQHiQpVbVVwQRoqGpbG%2BqoHc4l0iWtW9TXEzEP9ySuR7BNapgnPdzMw7DhDGhyjBT3bakte86SMm48W4HnEGSI69i5cYMJRlB6p03z6fCv%2BRYKzhxFQfgV36XfCQP5dzn2C8zWy4iN5ySZ37MwnEn%2FefI%2FivvpROxNOWFdScx%2F4wmhWYkFiN%2BG4mZffw0%2FgzsSkkS7Tz%2Ff88nqguZ7AEAsYGc3aV&X-Amz-Signature=9a2467e9aa1a6993dd7c643f1492ea32636c4bb9f395c53a5d966cfb88844ff7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YP4OANVO%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIQDZb44s%2BLgwg9qLjbKqGthgsSsKsaD7%2Bh5k%2BcEKxK%2FnGgIgBBOk3sLOSkJNqNPO44amKTsHGeD7UDZoCFqtjOoJDLkqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBm4EwokgBkUAIY2DyrcA1%2B6BOa9tzdEPLA98Sm8YXz%2F9313tENErgOvUs0Xcl%2FYrXjumDD5Q39vfZocSkT%2FC8X%2BSzhL2uypt6SEsrGjem1tlts3A80K9UupNSdI%2B%2FaYdEvlxIK6z1duUbsxMmRHiqrYWkpQGR0I0vbhE7pPONpOoPL7BtmJtfNM04OcCsPXI1Db%2BAQNncWHMRPH%2BRDcaa0oa34e3tPFP56b3fggborCsanJS%2F6vbjbg%2FpjO5yVXsj%2Bs%2F6OVTRoqdemjdp%2FdFb0YP2jNL2STKUd8UNFnAgt3pKjITWiG0psSYV9t%2FcQjdDoTW70hAQZpJW5LvW2ohg9Fl4RH%2BQ%2Bo2zPcn%2FaxRN4deG9WDwaikfIq%2BPtZVYpEPT2wM2ZXR9MMX3SWtXKiOIvIagV0PO0u8zxuRfefz9zlmj1UpVTYiYHxSSiXzLuRIjd4Pb5eCC8DbTOTSCEW5VIzWxK%2B7iQjNWL1IgHnR9FQZ9V9T3z4j7twl1F5WBcfTaq1fuu6%2FHY8qg5ibYazI0Obhw3bTVnKqO8112Qf2cAYEwu%2BK8aDCgLB1aUOiDIgl4YhZSG9EZJsLHtvjAAHo34wOd4rOpaF1oPHcmyrlK6xi8IZHeDVMmgCJ4ksgPBVxpkRmPlI6FtgGmp3MKCE09IGOqUB%2FQHiQpVbVVwQRoqGpbG%2BqoHc4l0iWtW9TXEzEP9ySuR7BNapgnPdzMw7DhDGhyjBT3bakte86SMm48W4HnEGSI69i5cYMJRlB6p03z6fCv%2BRYKzhxFQfgV36XfCQP5dzn2C8zWy4iN5ySZ37MwnEn%2FefI%2FivvpROxNOWFdScx%2F4wmhWYkFiN%2BG4mZffw0%2FgzsSkkS7Tz%2Ff88nqguZ7AEAsYGc3aV&X-Amz-Signature=882f70874ae6ec24a3a6ff2d61db2386c85285760ff0af8acc40ddb49913d8f5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7WE36TE%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIQD19IXDILtaXieORV11BAZF%2FAOGxTSNFrRHNRLs0bfYkwIge8OSXdjniAD4l8BPTkjCIgcRCLiyf1kK0XZO%2FGSpF5IqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLwCeb5sYkjCewDgESrcAzZajDVn64X%2F18h9YstPePSkeWrZp0jxtFabjXWklJvrTpg0EI99hK7g0zJX1Znjf2KcnDj07%2B%2B3GKE9jFTNS6lnh8%2B88TF%2Fcff3VG7GsiU1H4%2FhbUtFOvHv9DbUWuGmGHbKajECokNI0MD37zxSEpEyJxY2zxNIK1DVht2rr1H1uuYulLBonrVfEIGIABl%2FY8VmIpjfvRHdq2SCDsRRdYwWsdB01ugHehgG%2FCIEti53PhHARaHgzePxvaEAbAY%2Fsg9b2%2FZpKhlBRrjy2jhvwAEFsQ3VZdslh%2FtqZ%2BwFcMewGC%2FKw%2Bua4zB5KJ8LhHo8HCbqO%2F6AFWI1G5U3Y3lgsU49oRJC6kq6pRUgaWaKypdmqoE4NMatdXZ7azAo9lx5Ky9vueoEKAUzWeIxQ1pmL49s8F4RctpxlXGTi3jL9imi54VVHmlW2clHyMRvUHY2Y5D%2F0wlWmNi9VlMOigeZ4nw4ZLY0gaPKpfC%2BISitzeA2IWlNxJ67pOby5GVkD8DfHY1tsQvvdoGH9SOC0riO2pnWWFCEOvYm6l4zpYS8QA6dV1wi7E7GK9ePZAIFcQobgwe%2Fj34Ma29B%2BQX9bdKL2Ox7HCicC4hUKNSIakquS4bKKN3%2FG%2BQMC062Q1uHMOz%2F0tIGOqUB88xXIAcC%2FPdEWcsfv9JXQFgxQMMtbg22id8EoNeFqbS%2FZE9fvtSM%2BX1YIU1YTtr%2Fm1bTIUnpu8CCkS2Cn9E3WbOHlPSeHauC65gVQnVFp8KdNWKhvagHDFCR%2BfLJlC0lggdJN9VPFo91RGB2PiknHIrbzEQToAQ1XEEhiAD5JVjzsRtNC5SA%2FHtW7yJyidhQiVgdFLvx63P6IC2C5F1eIJFd1MrA&X-Amz-Signature=1362cba51abfc64a342920c8b6536b30cbe11c8494df728d25cb7f0fd5b12cee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ABFLPKD%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIGQyNWwPancULpHo0kYbliAOHOvz%2F9ddn1OCvscEg4EqAiEA7yFPdMPSAXriZh0nhHDNs7mwRCraG%2F0IvRWWZtfd5NUqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDB4%2BJ%2FTqccWhDl0LkSrcA2VhgMLKiPOj8XduD2zQrnpZUjNpZ3QI9uDnxQGcIahCnV5jrxTfURYY6P1DnVgWLO%2BZCudZjiMPNZ5EYptnVA6dOy36bbkqMcWLkMBqwU%2BExOnl8LJrT76hhNLVbNlcjMtsj3juCvGAMVK%2FsdxJSKGav3EWKLPXl8jmEplBxH6yUDTDWEXxEylnYqW0n5Ien80KvJ%2F4jy589LQRyDp%2FVfb8rYNH4KYEBOpRhQjTxHSBZI1qB3iC8YBY1x0aWiYpZG2CR4ih2p37M2LGQhC3mgDPF6qHTTYwD51AV%2F2iLSM1qc4oVMcFimueDuY03GKkxrFQMTau4Zexg0YhBZ5IirK2NUozxTJmnfEWs429j4b9zepU5Eh%2BkW%2BfkE0xLLzdMxVa%2BkBtTe5HWoPKl6nmcXl%2F7V1VNok8yxt15VPJxT%2FXUa%2FAQAQbAjY6tRDH%2BH%2FjBn%2Ft1TbzqcL3c5wKv8cboqHkaJCVbPYwixpiMYp3ZZmJbPdE9JPycCuFW6idehBv3ajKG0Xr248mbgC5VgbkUAQrDo%2BXfHWIXDkXP3k46k3aoBcAaYkInZye8EsGKBJNW515paGCZ9jJHOi9MdwUa9hCSdWw5%2BGDi1El4HR90O%2BQj31aQZkfWm7yWKO8MM%2BD09IGOqUBsioYulrBKSBbFLXNmNho8756ttwTDzeeGSVaLqU646SEhvWrrR1PLi%2F5vXARvp7wFTOLQQflpRHTxa9wPSzW0IhqNTnq5%2Bc9uZ0O%2FnXjf%2F4JssdeE3heOQpRuNjLiOYNDVLvX2xqidjydSCitVyxfPApxkPLU%2BgtWGf1cB6EzXLfBhwGE3gSMIMZX0gd8y8DePB1GxpPOhUbkrJPk5VRtYtOz4B8&X-Amz-Signature=0f7293af8e50fcd578b4f2f6f990a0737988ff0d89fcbfcd1f1c427996b0c5f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ABFLPKD%2F20260713%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260713T110902Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDMaCXVzLXdlc3QtMiJHMEUCIGQyNWwPancULpHo0kYbliAOHOvz%2F9ddn1OCvscEg4EqAiEA7yFPdMPSAXriZh0nhHDNs7mwRCraG%2F0IvRWWZtfd5NUqiAQI%2FP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDB4%2BJ%2FTqccWhDl0LkSrcA2VhgMLKiPOj8XduD2zQrnpZUjNpZ3QI9uDnxQGcIahCnV5jrxTfURYY6P1DnVgWLO%2BZCudZjiMPNZ5EYptnVA6dOy36bbkqMcWLkMBqwU%2BExOnl8LJrT76hhNLVbNlcjMtsj3juCvGAMVK%2FsdxJSKGav3EWKLPXl8jmEplBxH6yUDTDWEXxEylnYqW0n5Ien80KvJ%2F4jy589LQRyDp%2FVfb8rYNH4KYEBOpRhQjTxHSBZI1qB3iC8YBY1x0aWiYpZG2CR4ih2p37M2LGQhC3mgDPF6qHTTYwD51AV%2F2iLSM1qc4oVMcFimueDuY03GKkxrFQMTau4Zexg0YhBZ5IirK2NUozxTJmnfEWs429j4b9zepU5Eh%2BkW%2BfkE0xLLzdMxVa%2BkBtTe5HWoPKl6nmcXl%2F7V1VNok8yxt15VPJxT%2FXUa%2FAQAQbAjY6tRDH%2BH%2FjBn%2Ft1TbzqcL3c5wKv8cboqHkaJCVbPYwixpiMYp3ZZmJbPdE9JPycCuFW6idehBv3ajKG0Xr248mbgC5VgbkUAQrDo%2BXfHWIXDkXP3k46k3aoBcAaYkInZye8EsGKBJNW515paGCZ9jJHOi9MdwUa9hCSdWw5%2BGDi1El4HR90O%2BQj31aQZkfWm7yWKO8MM%2BD09IGOqUBsioYulrBKSBbFLXNmNho8756ttwTDzeeGSVaLqU646SEhvWrrR1PLi%2F5vXARvp7wFTOLQQflpRHTxa9wPSzW0IhqNTnq5%2Bc9uZ0O%2FnXjf%2F4JssdeE3heOQpRuNjLiOYNDVLvX2xqidjydSCitVyxfPApxkPLU%2BgtWGf1cB6EzXLfBhwGE3gSMIMZX0gd8y8DePB1GxpPOhUbkrJPk5VRtYtOz4B8&X-Amz-Signature=dcb66025a071888224e1b4e40260c6e2ab8aa5c62073976d08ab21f4a5e12738&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
