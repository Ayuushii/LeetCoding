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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIMU2IVH%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6Fy2r%2Fd4t97V5WDuUKmiEM3J3%2B15Nm2lIe%2B8oZbZu9AIhAPdJ%2BzrCoRHO51ocYqgK4xXS6LblvuORkgU%2F7CrcUVXJKogECI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgybHOL3tcsmkjcZLdgq3AM1qy3mPdYF38zVBCqi5A5PTQF%2FqBL%2FYNQer8PbFzxUTYB0H92ZXXST4rOg%2F3mkfDuwyp4rRgouDbV0NlSo%2FWICKijplEz2PxHBaYmdxxuTNveqzg1faA4jF9bLZDB3fMPFQqL5iPriUX4c0js4KTJs8ILrBuk643T2SRZLcs3JLXFaGz6LpXE1edRBSGoMwYeVuIKasnF2ntTHtJZG6W8xZJTZkdZ%2BpJRgADyVD3%2BWeBKgBDpD%2FgnbvD9bHrX6T1scQBZ33r%2F2oHWI82sfVtf9S8ad7i2koq93PR7LC1z0A%2FMbQj43MMozclvJHj9FUXc3cvNphZBa3zuFJ%2F9mv49WguOEFReV9dfVdh0Me%2B5KKWpAeBlMaLXpeEEQkaO7fnLq%2FJOWnZKR7fAwo3aru8BwX46fx0pSeUR0tnjC3zUsAs0rsh70nCgTuHwyg5KomkLWDv1X7UN%2FKCVw3VaThG2o9C%2FuashZBQbADRjF73Kjun4xXKspDc2F1NYd3JNtfJRz2NvuV2KJAL%2BsCwrSRuKAjs%2F9dr1d7ggxy9sdTg3SMD7CwlchCPiJ%2BX0l4T85MJ6deUiy9i79FUd5QEqDODfPYwxxIOJedFXKbRH6uJuVGFjAYEx7ULjqRoVeGzDgke3WBjqkARNIqD4Ad2%2B2h%2BIWuNvGQHF0GtHargw52aCIMx2Xr0hYS161PnzYFWuEVZfalaLNxWFURXyv9C0kwZ0FvBeF1aak1NZLkwcYeE%2F%2B70roNl5vcDAMnOeA1UU37MHeFo4VvisdPkmGbn5zqKAlT%2B03gA6SyfQ%2FynVTfETTAbsNc5eQqnvFItyiF7ybtlGS1HCxT49q0SUAP8Eni0j8R2DyJpTNzavf&X-Amz-Signature=cbab9d57a3a8c4b2ef6d069be209c5d70f415c4ef1119099e09d4dbc56bcf518&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIMU2IVH%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6Fy2r%2Fd4t97V5WDuUKmiEM3J3%2B15Nm2lIe%2B8oZbZu9AIhAPdJ%2BzrCoRHO51ocYqgK4xXS6LblvuORkgU%2F7CrcUVXJKogECI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgybHOL3tcsmkjcZLdgq3AM1qy3mPdYF38zVBCqi5A5PTQF%2FqBL%2FYNQer8PbFzxUTYB0H92ZXXST4rOg%2F3mkfDuwyp4rRgouDbV0NlSo%2FWICKijplEz2PxHBaYmdxxuTNveqzg1faA4jF9bLZDB3fMPFQqL5iPriUX4c0js4KTJs8ILrBuk643T2SRZLcs3JLXFaGz6LpXE1edRBSGoMwYeVuIKasnF2ntTHtJZG6W8xZJTZkdZ%2BpJRgADyVD3%2BWeBKgBDpD%2FgnbvD9bHrX6T1scQBZ33r%2F2oHWI82sfVtf9S8ad7i2koq93PR7LC1z0A%2FMbQj43MMozclvJHj9FUXc3cvNphZBa3zuFJ%2F9mv49WguOEFReV9dfVdh0Me%2B5KKWpAeBlMaLXpeEEQkaO7fnLq%2FJOWnZKR7fAwo3aru8BwX46fx0pSeUR0tnjC3zUsAs0rsh70nCgTuHwyg5KomkLWDv1X7UN%2FKCVw3VaThG2o9C%2FuashZBQbADRjF73Kjun4xXKspDc2F1NYd3JNtfJRz2NvuV2KJAL%2BsCwrSRuKAjs%2F9dr1d7ggxy9sdTg3SMD7CwlchCPiJ%2BX0l4T85MJ6deUiy9i79FUd5QEqDODfPYwxxIOJedFXKbRH6uJuVGFjAYEx7ULjqRoVeGzDgke3WBjqkARNIqD4Ad2%2B2h%2BIWuNvGQHF0GtHargw52aCIMx2Xr0hYS161PnzYFWuEVZfalaLNxWFURXyv9C0kwZ0FvBeF1aak1NZLkwcYeE%2F%2B70roNl5vcDAMnOeA1UU37MHeFo4VvisdPkmGbn5zqKAlT%2B03gA6SyfQ%2FynVTfETTAbsNc5eQqnvFItyiF7ybtlGS1HCxT49q0SUAP8Eni0j8R2DyJpTNzavf&X-Amz-Signature=a98cde3910f48eb443bb23d0edcf0b90f789b1d2cbef7f44cf29af8323155e36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIMU2IVH%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6Fy2r%2Fd4t97V5WDuUKmiEM3J3%2B15Nm2lIe%2B8oZbZu9AIhAPdJ%2BzrCoRHO51ocYqgK4xXS6LblvuORkgU%2F7CrcUVXJKogECI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgybHOL3tcsmkjcZLdgq3AM1qy3mPdYF38zVBCqi5A5PTQF%2FqBL%2FYNQer8PbFzxUTYB0H92ZXXST4rOg%2F3mkfDuwyp4rRgouDbV0NlSo%2FWICKijplEz2PxHBaYmdxxuTNveqzg1faA4jF9bLZDB3fMPFQqL5iPriUX4c0js4KTJs8ILrBuk643T2SRZLcs3JLXFaGz6LpXE1edRBSGoMwYeVuIKasnF2ntTHtJZG6W8xZJTZkdZ%2BpJRgADyVD3%2BWeBKgBDpD%2FgnbvD9bHrX6T1scQBZ33r%2F2oHWI82sfVtf9S8ad7i2koq93PR7LC1z0A%2FMbQj43MMozclvJHj9FUXc3cvNphZBa3zuFJ%2F9mv49WguOEFReV9dfVdh0Me%2B5KKWpAeBlMaLXpeEEQkaO7fnLq%2FJOWnZKR7fAwo3aru8BwX46fx0pSeUR0tnjC3zUsAs0rsh70nCgTuHwyg5KomkLWDv1X7UN%2FKCVw3VaThG2o9C%2FuashZBQbADRjF73Kjun4xXKspDc2F1NYd3JNtfJRz2NvuV2KJAL%2BsCwrSRuKAjs%2F9dr1d7ggxy9sdTg3SMD7CwlchCPiJ%2BX0l4T85MJ6deUiy9i79FUd5QEqDODfPYwxxIOJedFXKbRH6uJuVGFjAYEx7ULjqRoVeGzDgke3WBjqkARNIqD4Ad2%2B2h%2BIWuNvGQHF0GtHargw52aCIMx2Xr0hYS161PnzYFWuEVZfalaLNxWFURXyv9C0kwZ0FvBeF1aak1NZLkwcYeE%2F%2B70roNl5vcDAMnOeA1UU37MHeFo4VvisdPkmGbn5zqKAlT%2B03gA6SyfQ%2FynVTfETTAbsNc5eQqnvFItyiF7ybtlGS1HCxT49q0SUAP8Eni0j8R2DyJpTNzavf&X-Amz-Signature=2bf98d9970a5f7b7e96f5f78f27732721dc7bc38dee7bdfd9b30c38c03e3d862&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VEDD34OC%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCkDvvTmoKiOpdkwbWthX%2FhEF35NiI%2B2cnmZjXPecYoLQIhAMObXVwtQf5qHJD5%2FX0pcLvgxFYkzE1FstI9aKEOcHEUKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyM%2BqogBNYE6fAyAkkq3ANC5B151fDEraT48vf0XOrKJThcwkukXI1Gv5xRIqEptEcOf%2BVsZLF8FFAEXoER9%2BuY2MsXXzf5Ue1Mrfu%2Bqzq%2Brg1e%2BxVvZscsI19u56jEaUP%2FlbFcssgRwJxA%2Bf%2B6d2Ox02oNReLe%2FKZjS19ZHnZLYglVTfVSMBIC6V7v8vVeVhvNt1kawByxXMPZ6Jd7cgUc%2BtRyx0iPk4%2FATyDctqD7uNwKmIlAlt3NWE9GVM%2BsfO%2FrLfQJ%2BN9D7M4UWRB3uyxzfQRwEtPCd5ifNmFKx%2BivgUIQUNR4679ANorqd96VVYX%2BrHNyegMKdm6M9Nk1%2BI2RVAcbdvw5dkjGgoSv3elltNjZuVyKtDsoQRGnVGIb4OWszK5zLzQE0Q%2F1H4SROHmUJYjdhG15z0wd%2Buckbuk1c4dq2%2Fwl5N8DYgYKrMteG4SUHhJp2YMpExnuqLb1MyPmk1BSO%2Bl5NJWuiiJxXaSjIz4Ymur5BNvsbGJV1vMqTqSv7qzjIV09XPVN0OgaKX%2B8B7MQ%2Fzd0inQPdBaRhUBqLy7DgIu0xZSGejHJ7MxrDGRl6tAZeutsGreo0hXerdyUdfbIW1gZRCoVjn7ooRbMOTSQDHBy%2FLG48f6e%2FnaeLjm8hvwibeDGA1z%2BZDCGke3WBjqkAUvM%2FSTRjTUqyO1iXOEd%2FF0MNJq8XmaX%2FG%2BjCaHpcNgKCZnzbTHuhVSp36Qm2XGWMLddRzCvuCJk5GDNzE42q6OZ23zfNSWB4xtCGR0AymTz4AP3IpLK4UXih5xbWGNxhVoHv4TjmfFouxaj4ogfDaalseDyZMOBU4ubgnTpv3qjVarDHlBk2hz1WqO%2BrWs3TpDRpd6u0qCnlSGLkGaX%2BxHt8ZXx&X-Amz-Signature=7bbeb6d1b3d1ec81cf1376f789682f43d773f887e703fee800683c2e77119023&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VEDD34OC%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCkDvvTmoKiOpdkwbWthX%2FhEF35NiI%2B2cnmZjXPecYoLQIhAMObXVwtQf5qHJD5%2FX0pcLvgxFYkzE1FstI9aKEOcHEUKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyM%2BqogBNYE6fAyAkkq3ANC5B151fDEraT48vf0XOrKJThcwkukXI1Gv5xRIqEptEcOf%2BVsZLF8FFAEXoER9%2BuY2MsXXzf5Ue1Mrfu%2Bqzq%2Brg1e%2BxVvZscsI19u56jEaUP%2FlbFcssgRwJxA%2Bf%2B6d2Ox02oNReLe%2FKZjS19ZHnZLYglVTfVSMBIC6V7v8vVeVhvNt1kawByxXMPZ6Jd7cgUc%2BtRyx0iPk4%2FATyDctqD7uNwKmIlAlt3NWE9GVM%2BsfO%2FrLfQJ%2BN9D7M4UWRB3uyxzfQRwEtPCd5ifNmFKx%2BivgUIQUNR4679ANorqd96VVYX%2BrHNyegMKdm6M9Nk1%2BI2RVAcbdvw5dkjGgoSv3elltNjZuVyKtDsoQRGnVGIb4OWszK5zLzQE0Q%2F1H4SROHmUJYjdhG15z0wd%2Buckbuk1c4dq2%2Fwl5N8DYgYKrMteG4SUHhJp2YMpExnuqLb1MyPmk1BSO%2Bl5NJWuiiJxXaSjIz4Ymur5BNvsbGJV1vMqTqSv7qzjIV09XPVN0OgaKX%2B8B7MQ%2Fzd0inQPdBaRhUBqLy7DgIu0xZSGejHJ7MxrDGRl6tAZeutsGreo0hXerdyUdfbIW1gZRCoVjn7ooRbMOTSQDHBy%2FLG48f6e%2FnaeLjm8hvwibeDGA1z%2BZDCGke3WBjqkAUvM%2FSTRjTUqyO1iXOEd%2FF0MNJq8XmaX%2FG%2BjCaHpcNgKCZnzbTHuhVSp36Qm2XGWMLddRzCvuCJk5GDNzE42q6OZ23zfNSWB4xtCGR0AymTz4AP3IpLK4UXih5xbWGNxhVoHv4TjmfFouxaj4ogfDaalseDyZMOBU4ubgnTpv3qjVarDHlBk2hz1WqO%2BrWs3TpDRpd6u0qCnlSGLkGaX%2BxHt8ZXx&X-Amz-Signature=a3afcc2280b35562edddfa51d5ce1d7afd548c99c9a18536bf9b7a98ccb95b6a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VEDD34OC%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCkDvvTmoKiOpdkwbWthX%2FhEF35NiI%2B2cnmZjXPecYoLQIhAMObXVwtQf5qHJD5%2FX0pcLvgxFYkzE1FstI9aKEOcHEUKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyM%2BqogBNYE6fAyAkkq3ANC5B151fDEraT48vf0XOrKJThcwkukXI1Gv5xRIqEptEcOf%2BVsZLF8FFAEXoER9%2BuY2MsXXzf5Ue1Mrfu%2Bqzq%2Brg1e%2BxVvZscsI19u56jEaUP%2FlbFcssgRwJxA%2Bf%2B6d2Ox02oNReLe%2FKZjS19ZHnZLYglVTfVSMBIC6V7v8vVeVhvNt1kawByxXMPZ6Jd7cgUc%2BtRyx0iPk4%2FATyDctqD7uNwKmIlAlt3NWE9GVM%2BsfO%2FrLfQJ%2BN9D7M4UWRB3uyxzfQRwEtPCd5ifNmFKx%2BivgUIQUNR4679ANorqd96VVYX%2BrHNyegMKdm6M9Nk1%2BI2RVAcbdvw5dkjGgoSv3elltNjZuVyKtDsoQRGnVGIb4OWszK5zLzQE0Q%2F1H4SROHmUJYjdhG15z0wd%2Buckbuk1c4dq2%2Fwl5N8DYgYKrMteG4SUHhJp2YMpExnuqLb1MyPmk1BSO%2Bl5NJWuiiJxXaSjIz4Ymur5BNvsbGJV1vMqTqSv7qzjIV09XPVN0OgaKX%2B8B7MQ%2Fzd0inQPdBaRhUBqLy7DgIu0xZSGejHJ7MxrDGRl6tAZeutsGreo0hXerdyUdfbIW1gZRCoVjn7ooRbMOTSQDHBy%2FLG48f6e%2FnaeLjm8hvwibeDGA1z%2BZDCGke3WBjqkAUvM%2FSTRjTUqyO1iXOEd%2FF0MNJq8XmaX%2FG%2BjCaHpcNgKCZnzbTHuhVSp36Qm2XGWMLddRzCvuCJk5GDNzE42q6OZ23zfNSWB4xtCGR0AymTz4AP3IpLK4UXih5xbWGNxhVoHv4TjmfFouxaj4ogfDaalseDyZMOBU4ubgnTpv3qjVarDHlBk2hz1WqO%2BrWs3TpDRpd6u0qCnlSGLkGaX%2BxHt8ZXx&X-Amz-Signature=1d79e9bf581f9e2f66acbedc73bf105f5c9ba8f92154afc7d9d73ec41ad1612a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VEDD34OC%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130441Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCkDvvTmoKiOpdkwbWthX%2FhEF35NiI%2B2cnmZjXPecYoLQIhAMObXVwtQf5qHJD5%2FX0pcLvgxFYkzE1FstI9aKEOcHEUKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyM%2BqogBNYE6fAyAkkq3ANC5B151fDEraT48vf0XOrKJThcwkukXI1Gv5xRIqEptEcOf%2BVsZLF8FFAEXoER9%2BuY2MsXXzf5Ue1Mrfu%2Bqzq%2Brg1e%2BxVvZscsI19u56jEaUP%2FlbFcssgRwJxA%2Bf%2B6d2Ox02oNReLe%2FKZjS19ZHnZLYglVTfVSMBIC6V7v8vVeVhvNt1kawByxXMPZ6Jd7cgUc%2BtRyx0iPk4%2FATyDctqD7uNwKmIlAlt3NWE9GVM%2BsfO%2FrLfQJ%2BN9D7M4UWRB3uyxzfQRwEtPCd5ifNmFKx%2BivgUIQUNR4679ANorqd96VVYX%2BrHNyegMKdm6M9Nk1%2BI2RVAcbdvw5dkjGgoSv3elltNjZuVyKtDsoQRGnVGIb4OWszK5zLzQE0Q%2F1H4SROHmUJYjdhG15z0wd%2Buckbuk1c4dq2%2Fwl5N8DYgYKrMteG4SUHhJp2YMpExnuqLb1MyPmk1BSO%2Bl5NJWuiiJxXaSjIz4Ymur5BNvsbGJV1vMqTqSv7qzjIV09XPVN0OgaKX%2B8B7MQ%2Fzd0inQPdBaRhUBqLy7DgIu0xZSGejHJ7MxrDGRl6tAZeutsGreo0hXerdyUdfbIW1gZRCoVjn7ooRbMOTSQDHBy%2FLG48f6e%2FnaeLjm8hvwibeDGA1z%2BZDCGke3WBjqkAUvM%2FSTRjTUqyO1iXOEd%2FF0MNJq8XmaX%2FG%2BjCaHpcNgKCZnzbTHuhVSp36Qm2XGWMLddRzCvuCJk5GDNzE42q6OZ23zfNSWB4xtCGR0AymTz4AP3IpLK4UXih5xbWGNxhVoHv4TjmfFouxaj4ogfDaalseDyZMOBU4ubgnTpv3qjVarDHlBk2hz1WqO%2BrWs3TpDRpd6u0qCnlSGLkGaX%2BxHt8ZXx&X-Amz-Signature=9b0b74e15c717e8d6af3ea3c7fa74e64d24633df19530f49f97fb85873089115&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SCROEMGX%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDf87%2F41UOLq5a02lP4aBj0NjB%2FaqW8Th7MFFWQbMeIKAiAizx6Ys10DZ6KSeEn4g83iYODk%2BntTCAsfUbR%2FOLsr8SqIBAiM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMsNlS9JQWo7po6fS8KtwDBuyH16wtuQGZvmgWzsH5hi6BCbzLO2wIxJZ3PcilhmXW6tIoahrhdrl%2B3%2F0xa9Tpi72vzvBJHUGLZ1IAzOkWa6u7Y556tp0v%2FHuK1LN1z3A88gmu%2BB9hOVtq0d0ZOwmTQwyuVVDSmOZRqToIHNOeUfa%2BZB5tH7RQqlttQXHdnnPacUZTnqszRs0bKKyL563djyLk714poYDnFiCbapop4xhQVoX70hCD2sDbbyeCfWpblabbzX3hPIlQJPtyqfuqnLquxjv1WblKva8JE2tWmalqHYOse3kq5JbfYRU7OGdWuf4hPi39aRs5QIlHCi5NvhXutLRTAAeRVa%2BIJ1TbsB3%2BlWrE6t%2Fblu%2BOPNudUzBSePV40T%2FhBnwz2Hjl7pGv8rwCaWBERiDt1VtqH23w8AveInM7%2Bla6yT8lnRlgx2C%2B9gl22XoXMt%2BFbLa5CsEzUa%2BTlEOWTVHvfDTMsvB6kttS7tUyYowBEBN74HomExvCyZn22wrUHUhhqaWf7Ai8k8aXbbHMtejwjkLsrTr3vrjAQ%2BX8Zq%2BTx6bMyoFCu5DhmrWwdHmAaVA9vh07L7iLa2vqTTumQ7HgmjOSR7IBCqAV3zfBACPugodYeBoU8%2Fq%2BiFxRaHwWBIo8cGEwzpHt1gY6pgE8iqfo2YWfUYENYjdOggJju2LCDG45fg5G4xVyf5HxRiRmmDstTGm3v1NlPJlMxqpBgpy53sUJ6nrZvujGTmMAVxm%2Bv%2BiVwRLrHlsQHu7FpxiepZtO6OqZZiElKkjRXXIYqlX1ux3mfERCF6zFbMHu56g5jNNvUE1DtIkfCo8wp4j6fEbgNPKk7mmc78U1v5a5I%2B7BCadIAmfOg6b%2BIpfOkq5IEs8Y&X-Amz-Signature=d4039cac8236170859376227babdf1e2bf36dddc7258bc545c9153e3505639a5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZHDAJHRU%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCyDSL3ymkpL5mDMUkGSLPRV3KPyJEdjpZJpNB%2BOlCKewIgJzpqLFj%2F50NIUyTNa8HPdy3sUKMN9Ud8ne6%2Fu9P7X8gqiAQIjP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNbi3heI8QeFyfOWQSrcA3VKmrq2GN6EalLwClFP%2BxnjxCEi11TD3fZ2uH%2BuHoqJcNQvq80vmpMr2CT7D5Dkn68DUNjBail9KA81XKpF8rwHFgAUBkTfjZICL6ep3JhK082nrim6TlLpmxrToX3HWPO%2FKj1Du1ypYbcAC44trvHDAEtsRaJWjSYdwe8taquxpRcESo97hMrOmEqHa%2BFM3QBf0aGHGG4OuPrOLitumXwi3O%2B24%2BulFrs24p1cf16laNxcXJyfxfu2%2BXQyeCDF9ARfnYBpH0R96poyS9D709jj1Uu%2Fpidw2sapo%2BH6BTD0w95d2GQMwcOwgG2k53PdnjdTftVYdB5WZgWmDl8%2BaqtjLTCDPoFGT423qMF3iyaaVNKVyuOg%2BKu%2F2c7Pi63TFAQfFIob5LlET%2FATbFut8nzbKfv%2FlRZvBMZpoLdTs%2FlUZaiS9EuF7rIDkIC09cOm4XxNsqgjhFYOn4l3JtfeU7U64uQ2O6Sv87NooYbdt%2B%2F1vjLLpBOlYk1MSovuvIUW0ze%2FD7IfoBITO0rVX%2FqUTQNz4Cx%2Bza6nft6HVN1BP7P%2B7obxxMWYz7uFrP9%2FAlZIBRc5rEDNhC%2FndJ5RcnE%2BPdRBI7YHwxDfN5hFFK48ye8ySjvfMjOVSC6wQNJIMI%2BR7dYGOqUBvanJzF3KpuVoFREC0My%2F2l4dbF7VN%2FrMl2t1MxXEOv9Oqd6k6fQK12zjKVBiELn6wabClvW7IVHXouy3oufc12MJyOFvUUF2o5Igek2gPG%2B4ZyIuurb%2BmHmaXKvVxSxbSsBdMfs6pWOppi4XU7X2Kuy%2FctJcWEzDbkJrigysXjUVm4w4PH3OIowMzVZqlKeyE2K5sMBVoWxw2vobpPiipM4grmpf&X-Amz-Signature=867b8376e89dfc79e8c91488107cb836ef4d02b6a571aceabfc4efec49d5a0ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZHDAJHRU%2F20261023%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261023T130442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCyDSL3ymkpL5mDMUkGSLPRV3KPyJEdjpZJpNB%2BOlCKewIgJzpqLFj%2F50NIUyTNa8HPdy3sUKMN9Ud8ne6%2Fu9P7X8gqiAQIjP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNbi3heI8QeFyfOWQSrcA3VKmrq2GN6EalLwClFP%2BxnjxCEi11TD3fZ2uH%2BuHoqJcNQvq80vmpMr2CT7D5Dkn68DUNjBail9KA81XKpF8rwHFgAUBkTfjZICL6ep3JhK082nrim6TlLpmxrToX3HWPO%2FKj1Du1ypYbcAC44trvHDAEtsRaJWjSYdwe8taquxpRcESo97hMrOmEqHa%2BFM3QBf0aGHGG4OuPrOLitumXwi3O%2B24%2BulFrs24p1cf16laNxcXJyfxfu2%2BXQyeCDF9ARfnYBpH0R96poyS9D709jj1Uu%2Fpidw2sapo%2BH6BTD0w95d2GQMwcOwgG2k53PdnjdTftVYdB5WZgWmDl8%2BaqtjLTCDPoFGT423qMF3iyaaVNKVyuOg%2BKu%2F2c7Pi63TFAQfFIob5LlET%2FATbFut8nzbKfv%2FlRZvBMZpoLdTs%2FlUZaiS9EuF7rIDkIC09cOm4XxNsqgjhFYOn4l3JtfeU7U64uQ2O6Sv87NooYbdt%2B%2F1vjLLpBOlYk1MSovuvIUW0ze%2FD7IfoBITO0rVX%2FqUTQNz4Cx%2Bza6nft6HVN1BP7P%2B7obxxMWYz7uFrP9%2FAlZIBRc5rEDNhC%2FndJ5RcnE%2BPdRBI7YHwxDfN5hFFK48ye8ySjvfMjOVSC6wQNJIMI%2BR7dYGOqUBvanJzF3KpuVoFREC0My%2F2l4dbF7VN%2FrMl2t1MxXEOv9Oqd6k6fQK12zjKVBiELn6wabClvW7IVHXouy3oufc12MJyOFvUUF2o5Igek2gPG%2B4ZyIuurb%2BmHmaXKvVxSxbSsBdMfs6pWOppi4XU7X2Kuy%2FctJcWEzDbkJrigysXjUVm4w4PH3OIowMzVZqlKeyE2K5sMBVoWxw2vobpPiipM4grmpf&X-Amz-Signature=f83637da4dafa9e45c79f593ba4dc78984bcd74a2761be0f8639d33b30facff3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
