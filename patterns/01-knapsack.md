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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QZHS6TA%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJHMEUCIQC3JMLfM6IDqgIvjYza9tClbX0%2BP0Y8pB1%2FXqddHK2svgIgN6WTGskbv8tg6ZQwDpXZLxHuu%2FiRDmCVN4Tg8NraHwYq%2FwMIIhAAGgw2Mzc0MjMxODM4MDUiDBRxmVTE3nc3tYnO6yrcA%2BaAwyu8aQZyWmkuhamda7QRCyQxjsjb0B7w9TZ06Lpc6py9VnO96uhCvvfNjap%2Bgua2OfHH5AMvKOVsMU9CdXA9LSe%2BCsrKU4fRA3JH7KW7DYngbx7PcVHoOu67YfEEtdezncT9oOlAsY6WLD%2BzKGKWx68kS35UvboLwTOYKB3gjZZWPH4o50%2F3mEehml%2FAff1TGfzkTwIJO3Fb17rHxwfftSovxkWz4hcEkuot8iCXh%2B0NLEvqsa9w9t05c8ohgubKektzfjlFMWzAvH62iVXGxl%2FADcseJCgvC2OLKsHRnaST%2FRaSsKCuO8GExjWjtd1akGj0vj2MJBVOGEXHUElrldDFv4ogCi2WfQVW4ahm%2FTwGTJz8g9syjJQNbEg7Cq6Tie6FZFmXgn3NhqiYH9qQZxv47sEmWJpzh9arkAYOMxpFmKoeZ55Bkm%2BEf%2BkB7BLLXY6q3JmwESYz7ZZDiGpOEmoKA1AJ3X2nB%2Fjowp9amqtAPDmhV5Nr0au1r0noaIAPho1te2U5q6DsOKympIvDmDa5ctHqBCYUGFmaJBKvDiTd1QU2PkG107BVTiWAUl%2FlVSJbQL6PFVlvjVqwiNBVAouy8%2FyrYaJfmo14u1yciOmOeXTiZCS4pP5xMJzW0c8GOqUBcgUB2mabdheBbI7cK4F6E0r5EdoRDEqCFT8RRUaRlGrWDbBXntc%2F8XnOCBhtW2m5ufjXP0rizWBnpile0px99frtSSGWT2upFSyHFxzSvrxUTBQlxICtGDiYHlW46pXFOPoD9SOij4MycaoM2wNBUWi63mujv2PEixuVORCmtXEMoTzizLDFyQvgyx0gfn2nzTErwXAzTcEZYfUtnlyXA3U9sAff&X-Amz-Signature=c9f497ec85270864597bd46468eaa17ebcd7f72b64b78d741fe35b7bbc3d0627&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QZHS6TA%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJHMEUCIQC3JMLfM6IDqgIvjYza9tClbX0%2BP0Y8pB1%2FXqddHK2svgIgN6WTGskbv8tg6ZQwDpXZLxHuu%2FiRDmCVN4Tg8NraHwYq%2FwMIIhAAGgw2Mzc0MjMxODM4MDUiDBRxmVTE3nc3tYnO6yrcA%2BaAwyu8aQZyWmkuhamda7QRCyQxjsjb0B7w9TZ06Lpc6py9VnO96uhCvvfNjap%2Bgua2OfHH5AMvKOVsMU9CdXA9LSe%2BCsrKU4fRA3JH7KW7DYngbx7PcVHoOu67YfEEtdezncT9oOlAsY6WLD%2BzKGKWx68kS35UvboLwTOYKB3gjZZWPH4o50%2F3mEehml%2FAff1TGfzkTwIJO3Fb17rHxwfftSovxkWz4hcEkuot8iCXh%2B0NLEvqsa9w9t05c8ohgubKektzfjlFMWzAvH62iVXGxl%2FADcseJCgvC2OLKsHRnaST%2FRaSsKCuO8GExjWjtd1akGj0vj2MJBVOGEXHUElrldDFv4ogCi2WfQVW4ahm%2FTwGTJz8g9syjJQNbEg7Cq6Tie6FZFmXgn3NhqiYH9qQZxv47sEmWJpzh9arkAYOMxpFmKoeZ55Bkm%2BEf%2BkB7BLLXY6q3JmwESYz7ZZDiGpOEmoKA1AJ3X2nB%2Fjowp9amqtAPDmhV5Nr0au1r0noaIAPho1te2U5q6DsOKympIvDmDa5ctHqBCYUGFmaJBKvDiTd1QU2PkG107BVTiWAUl%2FlVSJbQL6PFVlvjVqwiNBVAouy8%2FyrYaJfmo14u1yciOmOeXTiZCS4pP5xMJzW0c8GOqUBcgUB2mabdheBbI7cK4F6E0r5EdoRDEqCFT8RRUaRlGrWDbBXntc%2F8XnOCBhtW2m5ufjXP0rizWBnpile0px99frtSSGWT2upFSyHFxzSvrxUTBQlxICtGDiYHlW46pXFOPoD9SOij4MycaoM2wNBUWi63mujv2PEixuVORCmtXEMoTzizLDFyQvgyx0gfn2nzTErwXAzTcEZYfUtnlyXA3U9sAff&X-Amz-Signature=39b52a68ae9c572eb767bf868ce74c2dbd6912b044638a41ab6fc577eedb2eda&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QZHS6TA%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJHMEUCIQC3JMLfM6IDqgIvjYza9tClbX0%2BP0Y8pB1%2FXqddHK2svgIgN6WTGskbv8tg6ZQwDpXZLxHuu%2FiRDmCVN4Tg8NraHwYq%2FwMIIhAAGgw2Mzc0MjMxODM4MDUiDBRxmVTE3nc3tYnO6yrcA%2BaAwyu8aQZyWmkuhamda7QRCyQxjsjb0B7w9TZ06Lpc6py9VnO96uhCvvfNjap%2Bgua2OfHH5AMvKOVsMU9CdXA9LSe%2BCsrKU4fRA3JH7KW7DYngbx7PcVHoOu67YfEEtdezncT9oOlAsY6WLD%2BzKGKWx68kS35UvboLwTOYKB3gjZZWPH4o50%2F3mEehml%2FAff1TGfzkTwIJO3Fb17rHxwfftSovxkWz4hcEkuot8iCXh%2B0NLEvqsa9w9t05c8ohgubKektzfjlFMWzAvH62iVXGxl%2FADcseJCgvC2OLKsHRnaST%2FRaSsKCuO8GExjWjtd1akGj0vj2MJBVOGEXHUElrldDFv4ogCi2WfQVW4ahm%2FTwGTJz8g9syjJQNbEg7Cq6Tie6FZFmXgn3NhqiYH9qQZxv47sEmWJpzh9arkAYOMxpFmKoeZ55Bkm%2BEf%2BkB7BLLXY6q3JmwESYz7ZZDiGpOEmoKA1AJ3X2nB%2Fjowp9amqtAPDmhV5Nr0au1r0noaIAPho1te2U5q6DsOKympIvDmDa5ctHqBCYUGFmaJBKvDiTd1QU2PkG107BVTiWAUl%2FlVSJbQL6PFVlvjVqwiNBVAouy8%2FyrYaJfmo14u1yciOmOeXTiZCS4pP5xMJzW0c8GOqUBcgUB2mabdheBbI7cK4F6E0r5EdoRDEqCFT8RRUaRlGrWDbBXntc%2F8XnOCBhtW2m5ufjXP0rizWBnpile0px99frtSSGWT2upFSyHFxzSvrxUTBQlxICtGDiYHlW46pXFOPoD9SOij4MycaoM2wNBUWi63mujv2PEixuVORCmtXEMoTzizLDFyQvgyx0gfn2nzTErwXAzTcEZYfUtnlyXA3U9sAff&X-Amz-Signature=84756f6396ad178874a2274c6e6e8db68b216589fef2a9ff5fb6fd9a4ee987ab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TCSRXQ4%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJGMEQCIAekuCeSeOm0Hda6n%2FFTtoKLi%2BfGpcE3PG6QMQyUstA%2FAiBRcoftMQwIqSmQqHi%2FzKrJUbBDL5ht%2BQcWOLs5Rt5w6Sr%2FAwgiEAAaDDYzNzQyMzE4MzgwNSIMeMU6cEneWhzlOOTZKtwDpFwtyNtqlP2VdjX83CYNw6%2F3Nu6RezZCBL1IVSaqt%2Bvh9YUQ0AHHvwLsW38VCo7omx%2BkTVnK2A%2BuW34nk2wBLTp%2BhkHKTLiV7Lc92jW9VFjMRyGqsHOgnk%2BUAHRQoESnM%2B9Gp1%2Bg7s9cEt7FpeDkc32LdxBLicSTpVcMrCFWdCpeDkj6%2BaE%2FLFLIg0HYJLpx3t4Xy7r%2F%2FUsF7u73xi1v8BOmJFmkwnzWBciX4Uf4qxf8UIT2lULR0KT07iU33DMBdI6inNieAyeBDCb6QFOoe5HWfwWvAP0rIxthxjQSDODhKRXtc77%2BxUkKoALg8k%2BTTMxSXJnDf6pOFzEFEBPgvFN3HMNGIR3mjsgrVXL1xu3GNWSRn5R8RxtaC6KiC46o%2BiHB1gGXjcqbhTmZVFvMkgNMlv95c1CRwWN2YaBnopdblI8WGWISg9vyTvbNGBXYK2x6WzKgPaRXVpNCrcFgDr8jK03P%2BL1KqDmSYUpJ2c4qeac8ODhE95SJEbL6LFXv2MYkaqK7SgI7Ktdkl%2FjAnkKQ9zc%2F8wcivb0bmaws%2BWbnR3W8AHpykSDxprs3rfVxSvrKpD3gCYxHzsN4QqJFz%2FRPKfp2vpM0jmdYOZNhSnwXRcltNvbHUArObGMwodXRzwY6pgFEqGVazCRPi9dziWCJuqNmkq5oFB6%2FaNtTB8TL19MkVuMXjU9x6Ob3JIGBK2nC4I9lfdt4%2FNQpNFNdz%2BXSImDqYKyJ5BJXZxSNoPKQ3nPK2%2BbTBakWy8IG1qYLeD1YyxPsmw4PMV89S3MKiQ489I57LnY6qVAMvbsA7Kr4hj%2BbwE2S5cfwTbsFT0ctP9JTcw2ru0D1EX0LgtvtNhG%2BvQHAXk1IH7X6&X-Amz-Signature=7def558e3076ba02040777f8e5bf2ec8cb2205ce0e56e8b725e8506c521de724&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TCSRXQ4%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJGMEQCIAekuCeSeOm0Hda6n%2FFTtoKLi%2BfGpcE3PG6QMQyUstA%2FAiBRcoftMQwIqSmQqHi%2FzKrJUbBDL5ht%2BQcWOLs5Rt5w6Sr%2FAwgiEAAaDDYzNzQyMzE4MzgwNSIMeMU6cEneWhzlOOTZKtwDpFwtyNtqlP2VdjX83CYNw6%2F3Nu6RezZCBL1IVSaqt%2Bvh9YUQ0AHHvwLsW38VCo7omx%2BkTVnK2A%2BuW34nk2wBLTp%2BhkHKTLiV7Lc92jW9VFjMRyGqsHOgnk%2BUAHRQoESnM%2B9Gp1%2Bg7s9cEt7FpeDkc32LdxBLicSTpVcMrCFWdCpeDkj6%2BaE%2FLFLIg0HYJLpx3t4Xy7r%2F%2FUsF7u73xi1v8BOmJFmkwnzWBciX4Uf4qxf8UIT2lULR0KT07iU33DMBdI6inNieAyeBDCb6QFOoe5HWfwWvAP0rIxthxjQSDODhKRXtc77%2BxUkKoALg8k%2BTTMxSXJnDf6pOFzEFEBPgvFN3HMNGIR3mjsgrVXL1xu3GNWSRn5R8RxtaC6KiC46o%2BiHB1gGXjcqbhTmZVFvMkgNMlv95c1CRwWN2YaBnopdblI8WGWISg9vyTvbNGBXYK2x6WzKgPaRXVpNCrcFgDr8jK03P%2BL1KqDmSYUpJ2c4qeac8ODhE95SJEbL6LFXv2MYkaqK7SgI7Ktdkl%2FjAnkKQ9zc%2F8wcivb0bmaws%2BWbnR3W8AHpykSDxprs3rfVxSvrKpD3gCYxHzsN4QqJFz%2FRPKfp2vpM0jmdYOZNhSnwXRcltNvbHUArObGMwodXRzwY6pgFEqGVazCRPi9dziWCJuqNmkq5oFB6%2FaNtTB8TL19MkVuMXjU9x6Ob3JIGBK2nC4I9lfdt4%2FNQpNFNdz%2BXSImDqYKyJ5BJXZxSNoPKQ3nPK2%2BbTBakWy8IG1qYLeD1YyxPsmw4PMV89S3MKiQ489I57LnY6qVAMvbsA7Kr4hj%2BbwE2S5cfwTbsFT0ctP9JTcw2ru0D1EX0LgtvtNhG%2BvQHAXk1IH7X6&X-Amz-Signature=56cdb2aca640ea852f34408ad7a81f26918d5a4f18a2a76bb2f000f6f4cf4df7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TCSRXQ4%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJGMEQCIAekuCeSeOm0Hda6n%2FFTtoKLi%2BfGpcE3PG6QMQyUstA%2FAiBRcoftMQwIqSmQqHi%2FzKrJUbBDL5ht%2BQcWOLs5Rt5w6Sr%2FAwgiEAAaDDYzNzQyMzE4MzgwNSIMeMU6cEneWhzlOOTZKtwDpFwtyNtqlP2VdjX83CYNw6%2F3Nu6RezZCBL1IVSaqt%2Bvh9YUQ0AHHvwLsW38VCo7omx%2BkTVnK2A%2BuW34nk2wBLTp%2BhkHKTLiV7Lc92jW9VFjMRyGqsHOgnk%2BUAHRQoESnM%2B9Gp1%2Bg7s9cEt7FpeDkc32LdxBLicSTpVcMrCFWdCpeDkj6%2BaE%2FLFLIg0HYJLpx3t4Xy7r%2F%2FUsF7u73xi1v8BOmJFmkwnzWBciX4Uf4qxf8UIT2lULR0KT07iU33DMBdI6inNieAyeBDCb6QFOoe5HWfwWvAP0rIxthxjQSDODhKRXtc77%2BxUkKoALg8k%2BTTMxSXJnDf6pOFzEFEBPgvFN3HMNGIR3mjsgrVXL1xu3GNWSRn5R8RxtaC6KiC46o%2BiHB1gGXjcqbhTmZVFvMkgNMlv95c1CRwWN2YaBnopdblI8WGWISg9vyTvbNGBXYK2x6WzKgPaRXVpNCrcFgDr8jK03P%2BL1KqDmSYUpJ2c4qeac8ODhE95SJEbL6LFXv2MYkaqK7SgI7Ktdkl%2FjAnkKQ9zc%2F8wcivb0bmaws%2BWbnR3W8AHpykSDxprs3rfVxSvrKpD3gCYxHzsN4QqJFz%2FRPKfp2vpM0jmdYOZNhSnwXRcltNvbHUArObGMwodXRzwY6pgFEqGVazCRPi9dziWCJuqNmkq5oFB6%2FaNtTB8TL19MkVuMXjU9x6Ob3JIGBK2nC4I9lfdt4%2FNQpNFNdz%2BXSImDqYKyJ5BJXZxSNoPKQ3nPK2%2BbTBakWy8IG1qYLeD1YyxPsmw4PMV89S3MKiQ489I57LnY6qVAMvbsA7Kr4hj%2BbwE2S5cfwTbsFT0ctP9JTcw2ru0D1EX0LgtvtNhG%2BvQHAXk1IH7X6&X-Amz-Signature=ede5ab4aff08ba5b790d478b4c5f6801e83eec1f1c003d81170d88ece260c5a5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TCSRXQ4%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFkaCXVzLXdlc3QtMiJGMEQCIAekuCeSeOm0Hda6n%2FFTtoKLi%2BfGpcE3PG6QMQyUstA%2FAiBRcoftMQwIqSmQqHi%2FzKrJUbBDL5ht%2BQcWOLs5Rt5w6Sr%2FAwgiEAAaDDYzNzQyMzE4MzgwNSIMeMU6cEneWhzlOOTZKtwDpFwtyNtqlP2VdjX83CYNw6%2F3Nu6RezZCBL1IVSaqt%2Bvh9YUQ0AHHvwLsW38VCo7omx%2BkTVnK2A%2BuW34nk2wBLTp%2BhkHKTLiV7Lc92jW9VFjMRyGqsHOgnk%2BUAHRQoESnM%2B9Gp1%2Bg7s9cEt7FpeDkc32LdxBLicSTpVcMrCFWdCpeDkj6%2BaE%2FLFLIg0HYJLpx3t4Xy7r%2F%2FUsF7u73xi1v8BOmJFmkwnzWBciX4Uf4qxf8UIT2lULR0KT07iU33DMBdI6inNieAyeBDCb6QFOoe5HWfwWvAP0rIxthxjQSDODhKRXtc77%2BxUkKoALg8k%2BTTMxSXJnDf6pOFzEFEBPgvFN3HMNGIR3mjsgrVXL1xu3GNWSRn5R8RxtaC6KiC46o%2BiHB1gGXjcqbhTmZVFvMkgNMlv95c1CRwWN2YaBnopdblI8WGWISg9vyTvbNGBXYK2x6WzKgPaRXVpNCrcFgDr8jK03P%2BL1KqDmSYUpJ2c4qeac8ODhE95SJEbL6LFXv2MYkaqK7SgI7Ktdkl%2FjAnkKQ9zc%2F8wcivb0bmaws%2BWbnR3W8AHpykSDxprs3rfVxSvrKpD3gCYxHzsN4QqJFz%2FRPKfp2vpM0jmdYOZNhSnwXRcltNvbHUArObGMwodXRzwY6pgFEqGVazCRPi9dziWCJuqNmkq5oFB6%2FaNtTB8TL19MkVuMXjU9x6Ob3JIGBK2nC4I9lfdt4%2FNQpNFNdz%2BXSImDqYKyJ5BJXZxSNoPKQ3nPK2%2BbTBakWy8IG1qYLeD1YyxPsmw4PMV89S3MKiQ489I57LnY6qVAMvbsA7Kr4hj%2BbwE2S5cfwTbsFT0ctP9JTcw2ru0D1EX0LgtvtNhG%2BvQHAXk1IH7X6&X-Amz-Signature=1009f2ccfacfa0250c2a9e368d96b4077e434eab963f5025452397ba1fa93391&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W6PYXAB4%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094501Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCIQCqHFN67cL0Y5GnMacjz%2FF4xVCntYDJYAlg5Dpx%2F3VrSAIgKY0K5s45s5gaKkbRGIdhWCiaPeqhvCVX84ZrhLn3O20q%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDMxDa4yi3BKiybcK5ircA%2ByKfZLsNxbN1O8urRPqHzME9HlmPBdJ2MXcmNJTqhvdoiNHFTeo7KPMYxjOFG6jbUV7Wyh%2Fbu9b2S48QodLIbkDtlAbV%2BJmuaUN8tPPOTV%2BmK1fmI%2BzMra9n56E9PqY0AEcGCHtNG8kFFYhkRYsnNlHCD7dalQ1loinCNr7yTrlYyptf5VZUaQkHhV7NZe7QhmJlJ%2FFMNhgm%2FEx6UaZGO0eGo22BTdOKjeoX7IcyjDtjs7Scun0W%2Bb2vU2xsQqqkTpQKrS0YsV8IpDdFP4yavtX%2Fk2hfJNy4%2BMestS9CDBUYV1OC7e5bV07t5cj23vQROve6uim%2FH0acW0Yn5evzqJATh9ZfA4gilEt9bCYKWmrDnl7jyqOCQ%2FLSBTH6SZQ4MTl6ZeIlHkJR1azcccG%2BMohWUzbP5Ak%2FyD16o4aJQWUN%2F1XZf%2BuL0VS1pGxH7OJ48uwIdFW30laGFe0m%2BqQtGQpjYXDCjdW3pElkXdCHaI%2Fy8bT8kKOU5UjtTQvuQkBDcyi4sAyLwyZy7jrdcczelbgXjUjFQLiDECIuoJIQwstPBgR%2FxPQ7PDIBOoJxfTvcNi8ShgXlTNywJqBtAXS%2BFZm8Hh6eGmcPNNRcim8FuYk%2FCM0eRAPd4wDnN3lMIjl0c8GOqUByF2SKv%2BE0Vi1Sv1roZC5GM%2FJpT%2BL3dc3CXnHHjzUaY9rs4eAX0eJHPpRxOM8ALX5I6S6DTqGCPjvvS5z82Rnil6jfbySo4Lq34KLV667fg7hWYoIDxD1SQkZ1FVd55cUrh6klHKkWU30DobYWtfjdJM1extH4eF3uLWDKtmSO7Ghah5KpBFXFdxlFi9lFF8nnntEkAHZbilayBhEmrdaFUSEpRDQ&X-Amz-Signature=82e40ad52488f4c4b31875ea38277b8346112c16cf1a0fbcd7089448bdbc5ee4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YI24Z6JU%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094501Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCICKG9cPTX4h2TF8AZbmtDTxWTkbEmT%2BIebRFZFE1cwoKAiEAoW9gSjUr7tBhwLkY%2BbEZmY07%2BpsaKSdKyFdRbCggb74q%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDHVkVFtGvk1mAhRw7SrcA%2FzdvwCAmU80xKluJjr1F5rnw7wEFqVmXHV03fGNDlYe8og7xCPtu2%2FYXPhDPnmCjey699o3IdkiesAdD4nosI1z4biKzJ6bx8ms%2BOjvRTDu0%2BAXhy6Zg8v30VbMyAKpRTie6JQKf92N15Xq9HS7qenXW5%2BLlkyn0zT24uaCye316fOot%2F0Vh37HCzCI%2F%2B%2FWinMQcAJcZ%2Frou5x%2BbcMWhtZ7D3h7%2BAVr8aLU94h9ocFOAiEPab3b7TSDPo2qhRpOntyt4UoASOmk8m67HaWticaGXQ2kCKCnkUUBrx5VYQvglbeOvH8sJbcGhEGwEraXlbatWFmozG5CzRjVHS3kR%2BX3uTqEkGmURcnJRomqGVrgtj0Ci9rDnaCd1mRTe56sLKR8x3o8BkFNlibg5a9aIVhUf8C%2Bh%2Fh312aqY0BIELfpODaOCYBfJRDSivVf%2FHEGNDE%2F2db5IqkYkrTEjlHxnbgD4WxNpdgl8Z6GUESzdkC86gdtvO4ydga83Xz6DT5W%2BLqrjnwy6to36Pv%2FcX5NFwms2J%2B%2FEEyKUWvoejzW1VkQv5%2BjA49VBoa6ELc%2Fko5%2B6g67SptRijh5R4SX6uTZOpjscOOowKxBH7rEgT%2BN%2F8LUl7DO%2BiLdbaXqneEmMMjk0c8GOqUBo04nOkG2sFgBDv201EE67pNd22VHm4zZakt6QjlF3VlONjX3dhcRSYWJ5XtBLSm89jVNtt2a7q%2FNuRYeu9ftwaEDM7keZlKqgWyjrIsQvFqy8RG64EyQh6ZWvtvHVbgK2o9C5X3r2fK3rPxOgdK%2Bb2ZjsQ96NsA3QHuq4W8nsGIffPVLs8CJJg3eBEVZDisljAot%2BU70Sdh90FmjHfJmviys2zkK&X-Amz-Signature=c252029d2ab63b5b557fd87d02dd034046fca131c520156983c1268c948d469f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YI24Z6JU%2F20260501%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260501T094501Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCICKG9cPTX4h2TF8AZbmtDTxWTkbEmT%2BIebRFZFE1cwoKAiEAoW9gSjUr7tBhwLkY%2BbEZmY07%2BpsaKSdKyFdRbCggb74q%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDHVkVFtGvk1mAhRw7SrcA%2FzdvwCAmU80xKluJjr1F5rnw7wEFqVmXHV03fGNDlYe8og7xCPtu2%2FYXPhDPnmCjey699o3IdkiesAdD4nosI1z4biKzJ6bx8ms%2BOjvRTDu0%2BAXhy6Zg8v30VbMyAKpRTie6JQKf92N15Xq9HS7qenXW5%2BLlkyn0zT24uaCye316fOot%2F0Vh37HCzCI%2F%2B%2FWinMQcAJcZ%2Frou5x%2BbcMWhtZ7D3h7%2BAVr8aLU94h9ocFOAiEPab3b7TSDPo2qhRpOntyt4UoASOmk8m67HaWticaGXQ2kCKCnkUUBrx5VYQvglbeOvH8sJbcGhEGwEraXlbatWFmozG5CzRjVHS3kR%2BX3uTqEkGmURcnJRomqGVrgtj0Ci9rDnaCd1mRTe56sLKR8x3o8BkFNlibg5a9aIVhUf8C%2Bh%2Fh312aqY0BIELfpODaOCYBfJRDSivVf%2FHEGNDE%2F2db5IqkYkrTEjlHxnbgD4WxNpdgl8Z6GUESzdkC86gdtvO4ydga83Xz6DT5W%2BLqrjnwy6to36Pv%2FcX5NFwms2J%2B%2FEEyKUWvoejzW1VkQv5%2BjA49VBoa6ELc%2Fko5%2B6g67SptRijh5R4SX6uTZOpjscOOowKxBH7rEgT%2BN%2F8LUl7DO%2BiLdbaXqneEmMMjk0c8GOqUBo04nOkG2sFgBDv201EE67pNd22VHm4zZakt6QjlF3VlONjX3dhcRSYWJ5XtBLSm89jVNtt2a7q%2FNuRYeu9ftwaEDM7keZlKqgWyjrIsQvFqy8RG64EyQh6ZWvtvHVbgK2o9C5X3r2fK3rPxOgdK%2Bb2ZjsQ96NsA3QHuq4W8nsGIffPVLs8CJJg3eBEVZDisljAot%2BU70Sdh90FmjHfJmviys2zkK&X-Amz-Signature=a03227ac6d7d8e318143552545d569d3e2f6660193a629373d36dfdd3acc0379&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
