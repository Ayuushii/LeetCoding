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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSJTTKWI%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJGMEQCICMkhR0Yuh0xYPOASo1rNG0keu0TLTjb3hxm3I5F0fT7AiB2tC%2F5uLy24EXQUVNzTyn0Jso8QbDRZqtdYiozyOPKeSr%2FAwg6EAAaDDYzNzQyMzE4MzgwNSIMfg0tbAdrgUH30S6QKtwDUeLHINk9horGEsTUqrBPrCEOb5vAGa2VKvjZCXA55iq7ap%2B7Rdh6LTMDBkJ%2FYcTCPE0Z4nufIyMesDEnEqP6PLVUA4qC053WwR4ozy8vamJf%2BSk1bT2oD%2BycpeW%2Fp3nB11tXEVkTn1KU%2BpcalFBXbku6rj2FghWr0fKs2vZEq%2BJTIvgtwkBAt6fxpW3uyGNGmQdfDEp%2BIuKCDzxen%2BkbXSQ6b%2F4yUN5Igv%2BZ0YKlW1X%2B9TnYnqxsfrN6ZvWS%2F%2FAle2uE2cUP41I7LJ3vV0ibunxpnx8Y%2BJuMWQ2zqUBpVj9arNpj8A%2BVMT%2Btn8TBfrm8H0R2XnE3HoXba34P5DxT7CZ8ue6ViwEpmc2R%2FQ0wl8uHIlvjFQ0fBLF2fJgASR5OE1l7AV69SH6Ja7g1PB%2FNcxO9h7kSmgjw4jtgKntTm4wA%2FYMrKa8volavVcUvGTYpMjoMN1YsmXwcHy2r7D%2BqHoint0qVhbMtwOt9t7PKy6JBL%2BXkf6hvBCp3mQcF9Er8nyEbRkZg0LpOrOrALHs2QpGXsyHMZeqh5nAMGxIOfWsLfGi%2BcrKbUiqQo7d3EvS%2BzBM8DSrKL5hCh8xfL%2Fr9g6fyaGqkJ2xmAFJZHCaAL66LFijqryECJgp16sswxejWzwY6pgEQ9ldaOx%2FCA8lWXQgorrFk9awuQJ%2FeVn2OFp6nM3n43BwnZL%2BMXFXeKp2EwnMJapSnfh4zWr80S5eOGhxXhRNFKF0Id2e%2FTXRVFCwVkX0f6sfytgfBitC1aLNt1TjASVgM3pee6U3xsjmaGet69q2NRBXD%2B3bh65Hv4rU6pklp6h8OPbIHr3KbTyUek1AbdMeUZZvrkh3fBYZWEOmntHS6v2%2Bw%2FqFI&X-Amz-Signature=3ed015e8ceedcaff45f6cd186cfe66cfe0a0973725da72521af9f7e913b39bc1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSJTTKWI%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJGMEQCICMkhR0Yuh0xYPOASo1rNG0keu0TLTjb3hxm3I5F0fT7AiB2tC%2F5uLy24EXQUVNzTyn0Jso8QbDRZqtdYiozyOPKeSr%2FAwg6EAAaDDYzNzQyMzE4MzgwNSIMfg0tbAdrgUH30S6QKtwDUeLHINk9horGEsTUqrBPrCEOb5vAGa2VKvjZCXA55iq7ap%2B7Rdh6LTMDBkJ%2FYcTCPE0Z4nufIyMesDEnEqP6PLVUA4qC053WwR4ozy8vamJf%2BSk1bT2oD%2BycpeW%2Fp3nB11tXEVkTn1KU%2BpcalFBXbku6rj2FghWr0fKs2vZEq%2BJTIvgtwkBAt6fxpW3uyGNGmQdfDEp%2BIuKCDzxen%2BkbXSQ6b%2F4yUN5Igv%2BZ0YKlW1X%2B9TnYnqxsfrN6ZvWS%2F%2FAle2uE2cUP41I7LJ3vV0ibunxpnx8Y%2BJuMWQ2zqUBpVj9arNpj8A%2BVMT%2Btn8TBfrm8H0R2XnE3HoXba34P5DxT7CZ8ue6ViwEpmc2R%2FQ0wl8uHIlvjFQ0fBLF2fJgASR5OE1l7AV69SH6Ja7g1PB%2FNcxO9h7kSmgjw4jtgKntTm4wA%2FYMrKa8volavVcUvGTYpMjoMN1YsmXwcHy2r7D%2BqHoint0qVhbMtwOt9t7PKy6JBL%2BXkf6hvBCp3mQcF9Er8nyEbRkZg0LpOrOrALHs2QpGXsyHMZeqh5nAMGxIOfWsLfGi%2BcrKbUiqQo7d3EvS%2BzBM8DSrKL5hCh8xfL%2Fr9g6fyaGqkJ2xmAFJZHCaAL66LFijqryECJgp16sswxejWzwY6pgEQ9ldaOx%2FCA8lWXQgorrFk9awuQJ%2FeVn2OFp6nM3n43BwnZL%2BMXFXeKp2EwnMJapSnfh4zWr80S5eOGhxXhRNFKF0Id2e%2FTXRVFCwVkX0f6sfytgfBitC1aLNt1TjASVgM3pee6U3xsjmaGet69q2NRBXD%2B3bh65Hv4rU6pklp6h8OPbIHr3KbTyUek1AbdMeUZZvrkh3fBYZWEOmntHS6v2%2Bw%2FqFI&X-Amz-Signature=d02cb2726b5cd503abb78e8f4d894f026b5b11cb1b5c7a239d1c90886ae4a541&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSJTTKWI%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJGMEQCICMkhR0Yuh0xYPOASo1rNG0keu0TLTjb3hxm3I5F0fT7AiB2tC%2F5uLy24EXQUVNzTyn0Jso8QbDRZqtdYiozyOPKeSr%2FAwg6EAAaDDYzNzQyMzE4MzgwNSIMfg0tbAdrgUH30S6QKtwDUeLHINk9horGEsTUqrBPrCEOb5vAGa2VKvjZCXA55iq7ap%2B7Rdh6LTMDBkJ%2FYcTCPE0Z4nufIyMesDEnEqP6PLVUA4qC053WwR4ozy8vamJf%2BSk1bT2oD%2BycpeW%2Fp3nB11tXEVkTn1KU%2BpcalFBXbku6rj2FghWr0fKs2vZEq%2BJTIvgtwkBAt6fxpW3uyGNGmQdfDEp%2BIuKCDzxen%2BkbXSQ6b%2F4yUN5Igv%2BZ0YKlW1X%2B9TnYnqxsfrN6ZvWS%2F%2FAle2uE2cUP41I7LJ3vV0ibunxpnx8Y%2BJuMWQ2zqUBpVj9arNpj8A%2BVMT%2Btn8TBfrm8H0R2XnE3HoXba34P5DxT7CZ8ue6ViwEpmc2R%2FQ0wl8uHIlvjFQ0fBLF2fJgASR5OE1l7AV69SH6Ja7g1PB%2FNcxO9h7kSmgjw4jtgKntTm4wA%2FYMrKa8volavVcUvGTYpMjoMN1YsmXwcHy2r7D%2BqHoint0qVhbMtwOt9t7PKy6JBL%2BXkf6hvBCp3mQcF9Er8nyEbRkZg0LpOrOrALHs2QpGXsyHMZeqh5nAMGxIOfWsLfGi%2BcrKbUiqQo7d3EvS%2BzBM8DSrKL5hCh8xfL%2Fr9g6fyaGqkJ2xmAFJZHCaAL66LFijqryECJgp16sswxejWzwY6pgEQ9ldaOx%2FCA8lWXQgorrFk9awuQJ%2FeVn2OFp6nM3n43BwnZL%2BMXFXeKp2EwnMJapSnfh4zWr80S5eOGhxXhRNFKF0Id2e%2FTXRVFCwVkX0f6sfytgfBitC1aLNt1TjASVgM3pee6U3xsjmaGet69q2NRBXD%2B3bh65Hv4rU6pklp6h8OPbIHr3KbTyUek1AbdMeUZZvrkh3fBYZWEOmntHS6v2%2Bw%2FqFI&X-Amz-Signature=a318a6a3e7d6608193a3b9534ac060fc36638fa42b5909d15e8230217371923e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IQISO63%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIQCSPdYyYAT82Sh1Gx0eH0kE7SRs%2Fv6TGyGP6v07olq%2B2wIgN2g0m8DzYCrlMJdoywJGwUqzsEgMIob9BYL2%2BGismfMq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDJ%2F21wZKZH17aTYUOyrcA7NdMDZe04YpsP8e2G%2BHUJIU5DPrS3qNpXhs4%2Flr%2Fjli66IyObGa9D8GEVihkqMN6LSLgUaR6dts6ph50aJtqdyNXQF%2F8tb4P%2FGmwIfd51zr3L2BGsH0smp8Eu%2BILRTsr%2BLo8MhSYfwyuF9SVzOodMXoKrknnuQGWhONnMKhx4MOeGQ18PRpiiXFb8uAc0073wDSIyh%2F7swJTmkO4QrPNtXhLn2%2BVM8XoYzPnq83R2asapreq%2Btl1qQSPOAzs97q8BTIXur16RUkWaWgifD5TsTwTJeQ4Gw9wKkJ8gzMf9nQABo3FFomYXqXPeLge2Jfya3LCOmlMBm5nPL%2BVY9iPzeMFVTj465l3JPMJawYmUCBn1OHOObh0hlgVdc4Tf%2BBVJRt9SWUsRN1Bqt2ddb5wr%2BUyQ2KbvfyM3LiiEjKZaUhRA2XGDtfJESXFDX7p2bpIbUJ8L9Ss7LQZtzDWwXpw6SAyhuBMrwLbsKpZRQIOtRiMayn7cyIMn%2FIiQx8XQgdSIqydvwgSARfROkSbHtq05UKipCQkHDCLp2yxgpNukz7UWzwzHc%2Bccw%2F9%2BFThm41I1sxPQXNBhtI2ZbIKe1JD0HX%2FJhr%2FdHa%2FAr%2B6ONEfTDWy7ghH9af78TfrEAeML%2Fp1s8GOqUBkjLZLCxLmqLTtOLP6hhLrtj%2FAr1lbsHtRrYvvnXpkq1todD8vMEdA5tgicIlfa%2BZ65yLUi6%2FuWSkybMFILewsdNduZc%2B7YdAn2GscKQnGzj%2BDyy6aDyQRHYs1MmosfNH2Fz1jnhvevgJdByjrBxTwKoO5UJNJN0ZV9Nmu%2Bi%2BoHgg%2FWBXYGX%2Bd0HMcck6BVavn7WSOPKKurrcG272V8nJGYXapE0D&X-Amz-Signature=8e300c86a460183158dafeaae05da5ed56d49a37e2b11595593c16d7af33e84e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IQISO63%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIQCSPdYyYAT82Sh1Gx0eH0kE7SRs%2Fv6TGyGP6v07olq%2B2wIgN2g0m8DzYCrlMJdoywJGwUqzsEgMIob9BYL2%2BGismfMq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDJ%2F21wZKZH17aTYUOyrcA7NdMDZe04YpsP8e2G%2BHUJIU5DPrS3qNpXhs4%2Flr%2Fjli66IyObGa9D8GEVihkqMN6LSLgUaR6dts6ph50aJtqdyNXQF%2F8tb4P%2FGmwIfd51zr3L2BGsH0smp8Eu%2BILRTsr%2BLo8MhSYfwyuF9SVzOodMXoKrknnuQGWhONnMKhx4MOeGQ18PRpiiXFb8uAc0073wDSIyh%2F7swJTmkO4QrPNtXhLn2%2BVM8XoYzPnq83R2asapreq%2Btl1qQSPOAzs97q8BTIXur16RUkWaWgifD5TsTwTJeQ4Gw9wKkJ8gzMf9nQABo3FFomYXqXPeLge2Jfya3LCOmlMBm5nPL%2BVY9iPzeMFVTj465l3JPMJawYmUCBn1OHOObh0hlgVdc4Tf%2BBVJRt9SWUsRN1Bqt2ddb5wr%2BUyQ2KbvfyM3LiiEjKZaUhRA2XGDtfJESXFDX7p2bpIbUJ8L9Ss7LQZtzDWwXpw6SAyhuBMrwLbsKpZRQIOtRiMayn7cyIMn%2FIiQx8XQgdSIqydvwgSARfROkSbHtq05UKipCQkHDCLp2yxgpNukz7UWzwzHc%2Bccw%2F9%2BFThm41I1sxPQXNBhtI2ZbIKe1JD0HX%2FJhr%2FdHa%2FAr%2B6ONEfTDWy7ghH9af78TfrEAeML%2Fp1s8GOqUBkjLZLCxLmqLTtOLP6hhLrtj%2FAr1lbsHtRrYvvnXpkq1todD8vMEdA5tgicIlfa%2BZ65yLUi6%2FuWSkybMFILewsdNduZc%2B7YdAn2GscKQnGzj%2BDyy6aDyQRHYs1MmosfNH2Fz1jnhvevgJdByjrBxTwKoO5UJNJN0ZV9Nmu%2Bi%2BoHgg%2FWBXYGX%2Bd0HMcck6BVavn7WSOPKKurrcG272V8nJGYXapE0D&X-Amz-Signature=e503439645302b9e97102bfd034e24009eacf0c8ab68c12c4e145d18bc292938&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IQISO63%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIQCSPdYyYAT82Sh1Gx0eH0kE7SRs%2Fv6TGyGP6v07olq%2B2wIgN2g0m8DzYCrlMJdoywJGwUqzsEgMIob9BYL2%2BGismfMq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDJ%2F21wZKZH17aTYUOyrcA7NdMDZe04YpsP8e2G%2BHUJIU5DPrS3qNpXhs4%2Flr%2Fjli66IyObGa9D8GEVihkqMN6LSLgUaR6dts6ph50aJtqdyNXQF%2F8tb4P%2FGmwIfd51zr3L2BGsH0smp8Eu%2BILRTsr%2BLo8MhSYfwyuF9SVzOodMXoKrknnuQGWhONnMKhx4MOeGQ18PRpiiXFb8uAc0073wDSIyh%2F7swJTmkO4QrPNtXhLn2%2BVM8XoYzPnq83R2asapreq%2Btl1qQSPOAzs97q8BTIXur16RUkWaWgifD5TsTwTJeQ4Gw9wKkJ8gzMf9nQABo3FFomYXqXPeLge2Jfya3LCOmlMBm5nPL%2BVY9iPzeMFVTj465l3JPMJawYmUCBn1OHOObh0hlgVdc4Tf%2BBVJRt9SWUsRN1Bqt2ddb5wr%2BUyQ2KbvfyM3LiiEjKZaUhRA2XGDtfJESXFDX7p2bpIbUJ8L9Ss7LQZtzDWwXpw6SAyhuBMrwLbsKpZRQIOtRiMayn7cyIMn%2FIiQx8XQgdSIqydvwgSARfROkSbHtq05UKipCQkHDCLp2yxgpNukz7UWzwzHc%2Bccw%2F9%2BFThm41I1sxPQXNBhtI2ZbIKe1JD0HX%2FJhr%2FdHa%2FAr%2B6ONEfTDWy7ghH9af78TfrEAeML%2Fp1s8GOqUBkjLZLCxLmqLTtOLP6hhLrtj%2FAr1lbsHtRrYvvnXpkq1todD8vMEdA5tgicIlfa%2BZ65yLUi6%2FuWSkybMFILewsdNduZc%2B7YdAn2GscKQnGzj%2BDyy6aDyQRHYs1MmosfNH2Fz1jnhvevgJdByjrBxTwKoO5UJNJN0ZV9Nmu%2Bi%2BoHgg%2FWBXYGX%2Bd0HMcck6BVavn7WSOPKKurrcG272V8nJGYXapE0D&X-Amz-Signature=f9cb5616a8d109b2a37ff2011158a8c20fe52efe33f9b71e03486ab246399e85&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IQISO63%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090517Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIQCSPdYyYAT82Sh1Gx0eH0kE7SRs%2Fv6TGyGP6v07olq%2B2wIgN2g0m8DzYCrlMJdoywJGwUqzsEgMIob9BYL2%2BGismfMq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDJ%2F21wZKZH17aTYUOyrcA7NdMDZe04YpsP8e2G%2BHUJIU5DPrS3qNpXhs4%2Flr%2Fjli66IyObGa9D8GEVihkqMN6LSLgUaR6dts6ph50aJtqdyNXQF%2F8tb4P%2FGmwIfd51zr3L2BGsH0smp8Eu%2BILRTsr%2BLo8MhSYfwyuF9SVzOodMXoKrknnuQGWhONnMKhx4MOeGQ18PRpiiXFb8uAc0073wDSIyh%2F7swJTmkO4QrPNtXhLn2%2BVM8XoYzPnq83R2asapreq%2Btl1qQSPOAzs97q8BTIXur16RUkWaWgifD5TsTwTJeQ4Gw9wKkJ8gzMf9nQABo3FFomYXqXPeLge2Jfya3LCOmlMBm5nPL%2BVY9iPzeMFVTj465l3JPMJawYmUCBn1OHOObh0hlgVdc4Tf%2BBVJRt9SWUsRN1Bqt2ddb5wr%2BUyQ2KbvfyM3LiiEjKZaUhRA2XGDtfJESXFDX7p2bpIbUJ8L9Ss7LQZtzDWwXpw6SAyhuBMrwLbsKpZRQIOtRiMayn7cyIMn%2FIiQx8XQgdSIqydvwgSARfROkSbHtq05UKipCQkHDCLp2yxgpNukz7UWzwzHc%2Bccw%2F9%2BFThm41I1sxPQXNBhtI2ZbIKe1JD0HX%2FJhr%2FdHa%2FAr%2B6ONEfTDWy7ghH9af78TfrEAeML%2Fp1s8GOqUBkjLZLCxLmqLTtOLP6hhLrtj%2FAr1lbsHtRrYvvnXpkq1todD8vMEdA5tgicIlfa%2BZ65yLUi6%2FuWSkybMFILewsdNduZc%2B7YdAn2GscKQnGzj%2BDyy6aDyQRHYs1MmosfNH2Fz1jnhvevgJdByjrBxTwKoO5UJNJN0ZV9Nmu%2Bi%2BoHgg%2FWBXYGX%2Bd0HMcck6BVavn7WSOPKKurrcG272V8nJGYXapE0D&X-Amz-Signature=df2381c3344f362e14e1337b13e8a32a600b1ae7ca020a2d8a05ba9ee4380a6f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V7BYWTQ3%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090518Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJGMEQCID6IVEWAS2atFe5HL4UPV0odu48IopMd67zmpGmXDTx5AiBbXUdoiY2qxtRAeR76Uwncv0PGCRNG7kwK%2Bxz9sxmXeSr%2FAwg5EAAaDDYzNzQyMzE4MzgwNSIMsIjDa%2Bp4zV1CVn3gKtwDllRs9INj0oWUPthd1oOO1ZgH6s9Vn%2BQzRzm0a%2BqUHZHoc%2BfqlB2I7J%2BhXY%2F2wTCfdzkjTJDlrGZLhFzwifSz0urxMbMhdb8HMeAnug3Gw6gLjZmClB%2B0SPITt%2FeQv7c7o%2F1x82NzNl1zgb59AXkt8IGU%2F8LI7qIdQvviJCQTDm9smmQ3uG9%2FQw5okPx6t4zz%2BEIOURARDKFw7CdicvVa2Y7rU%2FvGedo%2Bkay%2FSp1jErjaX1RzJW4JUQDIQpLA9fKvO1tLzMiTlPe3EZRJfDQghqTS41k3zT%2BuWcAYOD5r853bIKgX1D8k%2F1aA6%2Brk9yJh%2BhZ10d0K3GKd4c9W%2BhOz%2BfueGC63zgnvShryIrfezsUN06dYz20szgiDKOKtSybrivwz9tGQHpEGPeQWWHgOs63VQpM3ObALKo4%2FljAKPSz9TLyCETfW%2BXaqbzjSUR5WSyfpcZLTY%2BPYzwWqhmig8Ap5obwRUYbInys%2FPXAhiUsgfMn5Qk3GX76msVxVRSamg2fFbZgn2WnM%2BTEQPYUZoupAwleH8dgF%2Bv2jqFPJLwLjgE4PEYyQRX1cN51izV8m%2F2abIrc0VID1jfM19UbCUM43L9dRzNH9KgOyUHrZ8%2B9Ai04nNm%2F%2FXe5gWUIw4ejWzwY6pgEDOd%2FLGYAv0zTItqrHrEWqPGLILHVWZm6t3lYOP5ouTHEcfuMWepo9%2FwyYROGx86fA83wnEtQEJB8nM8jhF4TpKZuFIIX%2FEfNlrMmc%2BS4bQr8e8ak%2B0hOYWh1CZhy5Po1Kp2siuAwHK95vuFQziQ%2BElaIzDNSb3Wqc5bAAkOUdrg2tmDWUmYql8C6lgPMt1GN9xc9amrDETLC0wP0GNmG7qTmWoU3w&X-Amz-Signature=ef525f029d45763d5bacf7b245cbc963dc978f67598bb24226e7d78364e141cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RR7F3WFP%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090518Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIQCQ%2FgYAFDwAV11Xejy8iYbyLuu%2BAyfbjWHOooi6yQ2StAIgUPX%2BkEe0WnIc3bbklceaIWtNnokvGHp1F%2BCE%2Bu5Oyf8q%2FwMIOhAAGgw2Mzc0MjMxODM4MDUiDJuchxY83Iy4ZLGO3SrcA46XmNNEZcoC0QMPN0J4nB8MvMxJ3uwNn6W2QKLuCtHBQNsi9ht7WmPCAScF7OG7%2BMYpxV6AYW3IQHpqPHk5rR%2B9HaWXSu6xCGQuz44oDZEi6HShKUHgXN%2BFKEWzoverGzfmY5hVDYjzxB0d0PGBsOlR9hBCT4me34L2y8Lx3ccjd6SD1uiZb3N3%2F7Z05F0Z3%2BOGZiftRW6aGh9syjKFBSqPSJPqsS7g4uuJoinFf0a3plGqoJt%2BxecDEYfDUn2A%2BiPS43QyDYQZ57W5L2L3n8iamWCND6u8gtTl4%2BAfV8H3OdV%2FJlgnVfZayA7hzHad9VnzOPCdYXlmOdryQJOitCXypQ1y5pmRmTf2nIb%2BZfb%2BMHMcyzLhXVzHfmaSrbj29j3ApmdO2%2FdktdEgMMzbHIhTj1yS58NCH4sMWhrqBJiIGVw0QH8WmewqHxZeplC4r1oDC5anUbOzP1mm7K8dDXj3UUqpgtqFmm7ZuPtynVIWiOKzdtzTshevdhEsEU0%2F5jqMdPwYnLsLFg7cwzGcns6B9sGLHnm9I%2B6SR4dFOzkiRu39r9eJFpdwYFrOXTlXOu8j2Wq8Qo%2BcbZfWSNNDH%2BXP%2BRpXGrxjohVEc5wtfWZdMwBTnZOhwmP4SwJBMPzp1s8GOqUBGV9Gi%2BLV2aslCxBbQcjQoUztjXLIOeXCf98hUejxkyj1QKpa9%2FAt9I7q9UVnJXtYeqpbEUHpNqoM1PX2ueVaDSQLhEdJ4jfCAonDE788XAIX9mlvog%2BlN%2B8kpE8W19EajQaLh2EDDcM2iNpbG3ZtLTQE7G00ygLBVnMbzv31BjwHbhYH9wUZFCzJ7vZ5OQ2sFt03gEG2ELnRrq7ITvmOQUYfel2v&X-Amz-Signature=7e2b803218b2fbd4fff1ec3c9fb95dbdf287574aa554d3c949af45303382e1a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RR7F3WFP%2F20260502%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260502T090518Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIQCQ%2FgYAFDwAV11Xejy8iYbyLuu%2BAyfbjWHOooi6yQ2StAIgUPX%2BkEe0WnIc3bbklceaIWtNnokvGHp1F%2BCE%2Bu5Oyf8q%2FwMIOhAAGgw2Mzc0MjMxODM4MDUiDJuchxY83Iy4ZLGO3SrcA46XmNNEZcoC0QMPN0J4nB8MvMxJ3uwNn6W2QKLuCtHBQNsi9ht7WmPCAScF7OG7%2BMYpxV6AYW3IQHpqPHk5rR%2B9HaWXSu6xCGQuz44oDZEi6HShKUHgXN%2BFKEWzoverGzfmY5hVDYjzxB0d0PGBsOlR9hBCT4me34L2y8Lx3ccjd6SD1uiZb3N3%2F7Z05F0Z3%2BOGZiftRW6aGh9syjKFBSqPSJPqsS7g4uuJoinFf0a3plGqoJt%2BxecDEYfDUn2A%2BiPS43QyDYQZ57W5L2L3n8iamWCND6u8gtTl4%2BAfV8H3OdV%2FJlgnVfZayA7hzHad9VnzOPCdYXlmOdryQJOitCXypQ1y5pmRmTf2nIb%2BZfb%2BMHMcyzLhXVzHfmaSrbj29j3ApmdO2%2FdktdEgMMzbHIhTj1yS58NCH4sMWhrqBJiIGVw0QH8WmewqHxZeplC4r1oDC5anUbOzP1mm7K8dDXj3UUqpgtqFmm7ZuPtynVIWiOKzdtzTshevdhEsEU0%2F5jqMdPwYnLsLFg7cwzGcns6B9sGLHnm9I%2B6SR4dFOzkiRu39r9eJFpdwYFrOXTlXOu8j2Wq8Qo%2BcbZfWSNNDH%2BXP%2BRpXGrxjohVEc5wtfWZdMwBTnZOhwmP4SwJBMPzp1s8GOqUBGV9Gi%2BLV2aslCxBbQcjQoUztjXLIOeXCf98hUejxkyj1QKpa9%2FAt9I7q9UVnJXtYeqpbEUHpNqoM1PX2ueVaDSQLhEdJ4jfCAonDE788XAIX9mlvog%2BlN%2B8kpE8W19EajQaLh2EDDcM2iNpbG3ZtLTQE7G00ygLBVnMbzv31BjwHbhYH9wUZFCzJ7vZ5OQ2sFt03gEG2ELnRrq7ITvmOQUYfel2v&X-Amz-Signature=18adae4d2d2d4f5b30cd8b0244697e1428fa18f65963e190f4a2c3cd4384c22d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
