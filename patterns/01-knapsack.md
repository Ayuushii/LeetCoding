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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXUIE7ZE%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0NkInZe0A%2B5zCkLBjtpPBfPzehFZ7FCPAzQ%2BBOYE9XAIhANfXv9Sb4OyXvOxmTqGu69%2FL5vYtPxUPIrO1vZ8%2B5oh%2BKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxjI0vki9WCZUG%2FL%2B0q3APJlRITYduWTNCzWy%2Bi%2FVhVmd7GANlWRpNb2N2n5zTv8rG%2BdqNKJn1fKGtzqjcsUyNg71JBrB4Cn%2B9veLssvcNhF2rHswc4ZjQM2UhOCW%2BJ%2FqRca9KFud8SpkaSgJYHminypF%2F08BIQPm0DQn%2BBUUzd8ogacsTjrkFaREZc61q6Q%2FXz1jiCcIRn0UW6Uu4eBzI%2BjkfoFh5IGdMEZWHzEPkxDNz5FncDaAwFq2yRkh6iDx43Mxi3yioRdM5IBck5JxpoBeenq0w1fvhZQEDZYSr7Q4i6w23qUCuILHUFmWBX3lKVLvzGlyAsFl8Spx5%2FJ1aLAf8bH3IrN80TLNuThGmm5mq9Q8sTDb0Nb9Xq1AX6kxdvygXulnHOSY74ERnxmzCatWO6m%2FB%2FggT%2BfJw6NeklFqq08hnT%2BcDl49KW4hyCNW6%2B0aNZ32A4xkw3AcV4jU%2FozswzlGUouXkVnIWANLDk230yOSAtF8W450%2B1Lqq5hyRWIQY6UKQ25A%2FsaIAd84iol1X3RR0KGaYBNiEZ41IcZFDSEyLxS31vRLq6leRufvMm7aMn7xwj6Tu4B4bcmyh5jTF2gewyGoNRQuAvOZmNhOT1wlTQfhOwjDzmWrZcylGV9X8NsS5FjmhTmzCcwZ%2FNBjqkAfLzGPNf5gtUeo4i9eYryDGanVpxAruScY8Zum1Osr1DXKsOSHawrPCWhJcRbU4TEkAPHnbz3FwXq%2Bq93CZdB6hr8JA0a71BHTFvm%2BaefZhKhwDwkMPX9T7aTbhUQzV8w%2BVvZ5snjV0OqVtmYEA4gRQrBpTXxTBDE3D3TvoDAtoDbVzrou3GC7JLxtA5L5za06Ka7XwTwOm8ZgCvbfpH7Em1xRFw&X-Amz-Signature=e098a1639ed0a289ef824a47a03730a229d7f70b86d4920586f390ee42ce64e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXUIE7ZE%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0NkInZe0A%2B5zCkLBjtpPBfPzehFZ7FCPAzQ%2BBOYE9XAIhANfXv9Sb4OyXvOxmTqGu69%2FL5vYtPxUPIrO1vZ8%2B5oh%2BKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxjI0vki9WCZUG%2FL%2B0q3APJlRITYduWTNCzWy%2Bi%2FVhVmd7GANlWRpNb2N2n5zTv8rG%2BdqNKJn1fKGtzqjcsUyNg71JBrB4Cn%2B9veLssvcNhF2rHswc4ZjQM2UhOCW%2BJ%2FqRca9KFud8SpkaSgJYHminypF%2F08BIQPm0DQn%2BBUUzd8ogacsTjrkFaREZc61q6Q%2FXz1jiCcIRn0UW6Uu4eBzI%2BjkfoFh5IGdMEZWHzEPkxDNz5FncDaAwFq2yRkh6iDx43Mxi3yioRdM5IBck5JxpoBeenq0w1fvhZQEDZYSr7Q4i6w23qUCuILHUFmWBX3lKVLvzGlyAsFl8Spx5%2FJ1aLAf8bH3IrN80TLNuThGmm5mq9Q8sTDb0Nb9Xq1AX6kxdvygXulnHOSY74ERnxmzCatWO6m%2FB%2FggT%2BfJw6NeklFqq08hnT%2BcDl49KW4hyCNW6%2B0aNZ32A4xkw3AcV4jU%2FozswzlGUouXkVnIWANLDk230yOSAtF8W450%2B1Lqq5hyRWIQY6UKQ25A%2FsaIAd84iol1X3RR0KGaYBNiEZ41IcZFDSEyLxS31vRLq6leRufvMm7aMn7xwj6Tu4B4bcmyh5jTF2gewyGoNRQuAvOZmNhOT1wlTQfhOwjDzmWrZcylGV9X8NsS5FjmhTmzCcwZ%2FNBjqkAfLzGPNf5gtUeo4i9eYryDGanVpxAruScY8Zum1Osr1DXKsOSHawrPCWhJcRbU4TEkAPHnbz3FwXq%2Bq93CZdB6hr8JA0a71BHTFvm%2BaefZhKhwDwkMPX9T7aTbhUQzV8w%2BVvZ5snjV0OqVtmYEA4gRQrBpTXxTBDE3D3TvoDAtoDbVzrou3GC7JLxtA5L5za06Ka7XwTwOm8ZgCvbfpH7Em1xRFw&X-Amz-Signature=e7d28f0f30eb273f7fd26ff80f7d8e2f7a809cfa5aa8c22f66cdd9b514857c56&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXUIE7ZE%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0NkInZe0A%2B5zCkLBjtpPBfPzehFZ7FCPAzQ%2BBOYE9XAIhANfXv9Sb4OyXvOxmTqGu69%2FL5vYtPxUPIrO1vZ8%2B5oh%2BKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxjI0vki9WCZUG%2FL%2B0q3APJlRITYduWTNCzWy%2Bi%2FVhVmd7GANlWRpNb2N2n5zTv8rG%2BdqNKJn1fKGtzqjcsUyNg71JBrB4Cn%2B9veLssvcNhF2rHswc4ZjQM2UhOCW%2BJ%2FqRca9KFud8SpkaSgJYHminypF%2F08BIQPm0DQn%2BBUUzd8ogacsTjrkFaREZc61q6Q%2FXz1jiCcIRn0UW6Uu4eBzI%2BjkfoFh5IGdMEZWHzEPkxDNz5FncDaAwFq2yRkh6iDx43Mxi3yioRdM5IBck5JxpoBeenq0w1fvhZQEDZYSr7Q4i6w23qUCuILHUFmWBX3lKVLvzGlyAsFl8Spx5%2FJ1aLAf8bH3IrN80TLNuThGmm5mq9Q8sTDb0Nb9Xq1AX6kxdvygXulnHOSY74ERnxmzCatWO6m%2FB%2FggT%2BfJw6NeklFqq08hnT%2BcDl49KW4hyCNW6%2B0aNZ32A4xkw3AcV4jU%2FozswzlGUouXkVnIWANLDk230yOSAtF8W450%2B1Lqq5hyRWIQY6UKQ25A%2FsaIAd84iol1X3RR0KGaYBNiEZ41IcZFDSEyLxS31vRLq6leRufvMm7aMn7xwj6Tu4B4bcmyh5jTF2gewyGoNRQuAvOZmNhOT1wlTQfhOwjDzmWrZcylGV9X8NsS5FjmhTmzCcwZ%2FNBjqkAfLzGPNf5gtUeo4i9eYryDGanVpxAruScY8Zum1Osr1DXKsOSHawrPCWhJcRbU4TEkAPHnbz3FwXq%2Bq93CZdB6hr8JA0a71BHTFvm%2BaefZhKhwDwkMPX9T7aTbhUQzV8w%2BVvZ5snjV0OqVtmYEA4gRQrBpTXxTBDE3D3TvoDAtoDbVzrou3GC7JLxtA5L5za06Ka7XwTwOm8ZgCvbfpH7Em1xRFw&X-Amz-Signature=fd147f8e4977c2a0950c752017627dbc23ec8d6734cc327936da7a67440cc05f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZK4TWNFW%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBu9FQnidk%2F0HrnzZ4sMYTDNIGbfWKWBmU671wpL8oaQIhAMdkNy1Y92%2BKshSkhWfii4qCZMNSAu1F2vKrh3qZJeyTKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxG9ICmD6RLXh4%2F6%2FIq3AOb0QckKVIPnEonUoNA1%2BfMPiVHwDnyHEQSKrOGs%2Fi5Kfa9%2FOsynRer2Lvq7X7DKf%2BN9TFrzz9wXGZ07S6%2FPjJX2QFNJEl7ajzmUnd2iYEoS3PKmkIxFtqHC1k4Pw2YoUibkVSLA3uliVPwI2C4%2BKZPS32VBDZ5p3iemGYIegDKyS3e6t4Vix9JZDQWDPRrzZlHNj%2B9tkPyZUEeOhOcMixUILSJFQCfp7GpxctlXDwL3vBSqExQ4LvVJONKaYlvMLCZHQiILg2WUukJbc2gHiXM5GZxvH4usM04WXesSHeSSbYyFHP82CxYhmcky3MhIJHL0m3QJG%2B%2B0oCOQ4jTjGdV1rVAJb9%2Fox2IjY0EWfuGM17kvocCSfOi1eC1q910EGWSodvat1Bxi%2FM9G%2BG%2BqHAzG9JuonUviymyF2%2FQoEeU5q1H6hlBq%2BObjdWcPG8ubY9UASdpeI7GoamwnpbX1mPsFnuw9R7hmge2trXQlzdMHLCy7nDVqTGhZoSMH65XKyKi%2FpF64eF19lIrbNfIZeOF0NImGFdZBT2LcevRcZpUnZRNBsNgbbkWI1zlRyl4A8zIYfgzRA1zRwsIGRS8gADybrDmZpGq6SZiovgaA48thhoMg2PZlMShVVQ0lzCAw5%2FNBjqkAQ66wug6PRD4xsnyDtV%2BEEobuZNTvf9LjO4I1atKXUXAaSOnUo8RxeTGytq7985CANz6q9OwB3BllLJzcRYne3TerXTGitvuEYuq%2BNztX%2FmfXX6TtlaEDNs0s9r1SiT7zn05ofAv3zICrq9OIXvrFaipMMHwqMEV8F6vc%2BLevveAU7%2Bx1OJtcAuvvhp4VtHWtv0id6yI6%2BQAAYaqPvHlr9OdiF85&X-Amz-Signature=0a89daa46fd515ab64c85997b53ca9404314e9cacef998e2287aa6df90c29976&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZK4TWNFW%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBu9FQnidk%2F0HrnzZ4sMYTDNIGbfWKWBmU671wpL8oaQIhAMdkNy1Y92%2BKshSkhWfii4qCZMNSAu1F2vKrh3qZJeyTKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxG9ICmD6RLXh4%2F6%2FIq3AOb0QckKVIPnEonUoNA1%2BfMPiVHwDnyHEQSKrOGs%2Fi5Kfa9%2FOsynRer2Lvq7X7DKf%2BN9TFrzz9wXGZ07S6%2FPjJX2QFNJEl7ajzmUnd2iYEoS3PKmkIxFtqHC1k4Pw2YoUibkVSLA3uliVPwI2C4%2BKZPS32VBDZ5p3iemGYIegDKyS3e6t4Vix9JZDQWDPRrzZlHNj%2B9tkPyZUEeOhOcMixUILSJFQCfp7GpxctlXDwL3vBSqExQ4LvVJONKaYlvMLCZHQiILg2WUukJbc2gHiXM5GZxvH4usM04WXesSHeSSbYyFHP82CxYhmcky3MhIJHL0m3QJG%2B%2B0oCOQ4jTjGdV1rVAJb9%2Fox2IjY0EWfuGM17kvocCSfOi1eC1q910EGWSodvat1Bxi%2FM9G%2BG%2BqHAzG9JuonUviymyF2%2FQoEeU5q1H6hlBq%2BObjdWcPG8ubY9UASdpeI7GoamwnpbX1mPsFnuw9R7hmge2trXQlzdMHLCy7nDVqTGhZoSMH65XKyKi%2FpF64eF19lIrbNfIZeOF0NImGFdZBT2LcevRcZpUnZRNBsNgbbkWI1zlRyl4A8zIYfgzRA1zRwsIGRS8gADybrDmZpGq6SZiovgaA48thhoMg2PZlMShVVQ0lzCAw5%2FNBjqkAQ66wug6PRD4xsnyDtV%2BEEobuZNTvf9LjO4I1atKXUXAaSOnUo8RxeTGytq7985CANz6q9OwB3BllLJzcRYne3TerXTGitvuEYuq%2BNztX%2FmfXX6TtlaEDNs0s9r1SiT7zn05ofAv3zICrq9OIXvrFaipMMHwqMEV8F6vc%2BLevveAU7%2Bx1OJtcAuvvhp4VtHWtv0id6yI6%2BQAAYaqPvHlr9OdiF85&X-Amz-Signature=56280809d7fe321a379e44e6699532d736db1c5a75a630e19b4b22f6fbfc567b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZK4TWNFW%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBu9FQnidk%2F0HrnzZ4sMYTDNIGbfWKWBmU671wpL8oaQIhAMdkNy1Y92%2BKshSkhWfii4qCZMNSAu1F2vKrh3qZJeyTKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxG9ICmD6RLXh4%2F6%2FIq3AOb0QckKVIPnEonUoNA1%2BfMPiVHwDnyHEQSKrOGs%2Fi5Kfa9%2FOsynRer2Lvq7X7DKf%2BN9TFrzz9wXGZ07S6%2FPjJX2QFNJEl7ajzmUnd2iYEoS3PKmkIxFtqHC1k4Pw2YoUibkVSLA3uliVPwI2C4%2BKZPS32VBDZ5p3iemGYIegDKyS3e6t4Vix9JZDQWDPRrzZlHNj%2B9tkPyZUEeOhOcMixUILSJFQCfp7GpxctlXDwL3vBSqExQ4LvVJONKaYlvMLCZHQiILg2WUukJbc2gHiXM5GZxvH4usM04WXesSHeSSbYyFHP82CxYhmcky3MhIJHL0m3QJG%2B%2B0oCOQ4jTjGdV1rVAJb9%2Fox2IjY0EWfuGM17kvocCSfOi1eC1q910EGWSodvat1Bxi%2FM9G%2BG%2BqHAzG9JuonUviymyF2%2FQoEeU5q1H6hlBq%2BObjdWcPG8ubY9UASdpeI7GoamwnpbX1mPsFnuw9R7hmge2trXQlzdMHLCy7nDVqTGhZoSMH65XKyKi%2FpF64eF19lIrbNfIZeOF0NImGFdZBT2LcevRcZpUnZRNBsNgbbkWI1zlRyl4A8zIYfgzRA1zRwsIGRS8gADybrDmZpGq6SZiovgaA48thhoMg2PZlMShVVQ0lzCAw5%2FNBjqkAQ66wug6PRD4xsnyDtV%2BEEobuZNTvf9LjO4I1atKXUXAaSOnUo8RxeTGytq7985CANz6q9OwB3BllLJzcRYne3TerXTGitvuEYuq%2BNztX%2FmfXX6TtlaEDNs0s9r1SiT7zn05ofAv3zICrq9OIXvrFaipMMHwqMEV8F6vc%2BLevveAU7%2Bx1OJtcAuvvhp4VtHWtv0id6yI6%2BQAAYaqPvHlr9OdiF85&X-Amz-Signature=35d8880797b007eb7908945ac66e7045ebdb1e53e54295b5b54fc804f9f80fac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZK4TWNFW%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBu9FQnidk%2F0HrnzZ4sMYTDNIGbfWKWBmU671wpL8oaQIhAMdkNy1Y92%2BKshSkhWfii4qCZMNSAu1F2vKrh3qZJeyTKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxG9ICmD6RLXh4%2F6%2FIq3AOb0QckKVIPnEonUoNA1%2BfMPiVHwDnyHEQSKrOGs%2Fi5Kfa9%2FOsynRer2Lvq7X7DKf%2BN9TFrzz9wXGZ07S6%2FPjJX2QFNJEl7ajzmUnd2iYEoS3PKmkIxFtqHC1k4Pw2YoUibkVSLA3uliVPwI2C4%2BKZPS32VBDZ5p3iemGYIegDKyS3e6t4Vix9JZDQWDPRrzZlHNj%2B9tkPyZUEeOhOcMixUILSJFQCfp7GpxctlXDwL3vBSqExQ4LvVJONKaYlvMLCZHQiILg2WUukJbc2gHiXM5GZxvH4usM04WXesSHeSSbYyFHP82CxYhmcky3MhIJHL0m3QJG%2B%2B0oCOQ4jTjGdV1rVAJb9%2Fox2IjY0EWfuGM17kvocCSfOi1eC1q910EGWSodvat1Bxi%2FM9G%2BG%2BqHAzG9JuonUviymyF2%2FQoEeU5q1H6hlBq%2BObjdWcPG8ubY9UASdpeI7GoamwnpbX1mPsFnuw9R7hmge2trXQlzdMHLCy7nDVqTGhZoSMH65XKyKi%2FpF64eF19lIrbNfIZeOF0NImGFdZBT2LcevRcZpUnZRNBsNgbbkWI1zlRyl4A8zIYfgzRA1zRwsIGRS8gADybrDmZpGq6SZiovgaA48thhoMg2PZlMShVVQ0lzCAw5%2FNBjqkAQ66wug6PRD4xsnyDtV%2BEEobuZNTvf9LjO4I1atKXUXAaSOnUo8RxeTGytq7985CANz6q9OwB3BllLJzcRYne3TerXTGitvuEYuq%2BNztX%2FmfXX6TtlaEDNs0s9r1SiT7zn05ofAv3zICrq9OIXvrFaipMMHwqMEV8F6vc%2BLevveAU7%2Bx1OJtcAuvvhp4VtHWtv0id6yI6%2BQAAYaqPvHlr9OdiF85&X-Amz-Signature=3c68922f852c2a475769cd3683f51e287d2a9add94498c05ed1d748da7fb0410&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZWOMUNMC%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDkUu%2F25viItaSewhkvSzugVo1FFr7In7rAQejWq%2B6APwIhAPLJgyjVOlca9bgbQy2pJ%2Fiq63hPqiWLGj7E6K1ab62iKogECLH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFFYeg%2FE2JOmHGkNgq3ANvtfi1sG58z3BF5dZuqsJKrR8iqkGI9SVSgHDGUf15ikN8mUKHMhB0RuC0Keu2eLacc%2FeH7V79cBiL70sqVq69ev2mIONgjwHim7CxRK%2BOaDYtYzjBLpP4TjPyVidS7oL2C5NQZ4C3OYdUsYjeuzRnT8S3qL0UxC%2F1SSiCyrTzC0EyL2z5FVgpm0iHf5%2BoZ%2FPpPPZvB5PLAoNVpL75p%2FDzTrIEKRapgQhxub5Sb%2FW5VFfmBly6ooEUn8A1I31q5P%2Bnev9AqEcCTCj8uXfgb2AfrvXhI5nI9GQ1wtHjMorvLfa%2FjZeEAL%2FDHV%2F3sn05fDQdPjs6c%2FGPiNLRhcOxq6d2T77cmhQ5o5FbeJ8xJupJGFEoXG6gkC2N9vAXaXR5wMe7qgk6f4b6TjcTbXeeW8HaLLVtc%2BacJvb8%2BDipT5gAnOtGW%2BgoLGqxnsa49bo232elgEPEAZaJOr%2Bvnl22965sETy%2BbdvP6qJReA4c9XXawKI4YxNOMraOc0d7MsKZgX41VNukJOFF3nCpkWSWunANecfeqHHQCv4wp2NRlCconzPNKQIySEbKwyAaa5GVQW%2BwuTOEFQ1S5Uiv4IsuG4odg%2FsyDpcFqzDgWZG5CVfjhTQeJYaK13BjNmgCVjCVw5%2FNBjqkAajI4fCyX%2BNikUUGa0E8Z2R2RPAXBBf2o5cnF4JuYvNGkeXXC0ZeVLyzB2wbZnbxPFgNFX43qw%2Ft1OYmDuJco8E9YuDRni5F99eA4ke%2FzoZwXTm0C37MgTxTcQ4f1Rhwcu%2Fktj6JoFJYm3r02nDHF7ZiM6XqnVaatHSQPF4jadOW9JkQBl6we%2FQZhukrgrkeOQOA%2BJki7Yl0qOtzOUlLUHX2Ukje&X-Amz-Signature=3f4aa6407d8f1e2d94fc6a6519ec7b724ba05f4912523c0b56d95954359695e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFNM4BWD%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgg7k2kGiLUD8jLw9I9eQCQ4i06J5ZXYf8zo3GWuJloAiEA9RV42s9VQleZzkXM%2FIw81G%2FV2RunjDU0S1%2BDJbO9BGUqiAQIsf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJtqWpZMQBYqCl%2FxSircA8Pd1LGzoeVdz7vNt07XsFP%2BQYNVLa8Sa96H0RG4ShuJJV%2FskPT6QxIJp48stcAIK2azFV%2BeO2e5kaLgaIbKf0YGe5ox8aUQ38kL3y%2BGGDjUCQSTi%2BaqL9p4KAmxDznaO8ixbzGjaewLwFqwMsVTIzAfZ8xHX62IbPGwwU2PKLU%2BX1QUpAzxFFysSJr7L5xC5q%2FVCVg1mdrP8NxQz9fW4i2P29p7A%2FBLyScnVbpSfxTPyN6vvVYCcqBs7RL0R9Usy6RoKPQeJzz%2BrJ4VrdgSEbDC9VV5bUt60f0P5lkVzFtzpiu%2B%2FT8nQI2NCvcXG1nM30ohJzv%2FFlfwDcWmuEm9Wa%2FACeYPJLzMKGaRZkWOdjVbbR1huLKqFcfDwp5Zfwa%2Bc9NFExfodCGgpJYMb5GG8HkgYuYZs1JcG3r%2B9juobOFG7NP2tgqWMYm9Jk%2BslOpYZ6vVq1rzvON3agaE1M8BqTNFgGHQxXRDqIKq%2BccH1Pxtzclu6XWj7xEZqGXZLsd1xOCUUtOLlsaxQ7qqLi04aeoFN1acTsegwzvMy%2FO%2B6y5LxrweayxAreoA4NJW2%2BmaOtpU3O%2F5fvTlSDZ9wNi10FWugIK19eXP9VTTKsY0doC2koA1DL57Rj%2FLY9PtMJvCn80GOqUBUFvJxjn06FjUzm0mUykiIX%2FK5pjDEAOpr44uXbhg5wvoq4R3zHxf0A%2BXwa922NgEUejlRwkZK1XK3unClQHFSSlEWQyD3gzbwjlcnB3uarljl6dWYs8NlDPKqWF1SOt6d78NRCZd%2BNKl7ikDofoug3uGy8xYBd1EphAOlE5fSIJkDuOHN2UIqIU48aTxSnEE1h7oC216R8Asv5cB2%2FtOOxWMEKSO&X-Amz-Signature=a916339c1b6aeb1af64cc72e032c0a1919392a4ad52bfb111737c684548148ac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFNM4BWD%2F20260304%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260304T083844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgg7k2kGiLUD8jLw9I9eQCQ4i06J5ZXYf8zo3GWuJloAiEA9RV42s9VQleZzkXM%2FIw81G%2FV2RunjDU0S1%2BDJbO9BGUqiAQIsf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJtqWpZMQBYqCl%2FxSircA8Pd1LGzoeVdz7vNt07XsFP%2BQYNVLa8Sa96H0RG4ShuJJV%2FskPT6QxIJp48stcAIK2azFV%2BeO2e5kaLgaIbKf0YGe5ox8aUQ38kL3y%2BGGDjUCQSTi%2BaqL9p4KAmxDznaO8ixbzGjaewLwFqwMsVTIzAfZ8xHX62IbPGwwU2PKLU%2BX1QUpAzxFFysSJr7L5xC5q%2FVCVg1mdrP8NxQz9fW4i2P29p7A%2FBLyScnVbpSfxTPyN6vvVYCcqBs7RL0R9Usy6RoKPQeJzz%2BrJ4VrdgSEbDC9VV5bUt60f0P5lkVzFtzpiu%2B%2FT8nQI2NCvcXG1nM30ohJzv%2FFlfwDcWmuEm9Wa%2FACeYPJLzMKGaRZkWOdjVbbR1huLKqFcfDwp5Zfwa%2Bc9NFExfodCGgpJYMb5GG8HkgYuYZs1JcG3r%2B9juobOFG7NP2tgqWMYm9Jk%2BslOpYZ6vVq1rzvON3agaE1M8BqTNFgGHQxXRDqIKq%2BccH1Pxtzclu6XWj7xEZqGXZLsd1xOCUUtOLlsaxQ7qqLi04aeoFN1acTsegwzvMy%2FO%2B6y5LxrweayxAreoA4NJW2%2BmaOtpU3O%2F5fvTlSDZ9wNi10FWugIK19eXP9VTTKsY0doC2koA1DL57Rj%2FLY9PtMJvCn80GOqUBUFvJxjn06FjUzm0mUykiIX%2FK5pjDEAOpr44uXbhg5wvoq4R3zHxf0A%2BXwa922NgEUejlRwkZK1XK3unClQHFSSlEWQyD3gzbwjlcnB3uarljl6dWYs8NlDPKqWF1SOt6d78NRCZd%2BNKl7ikDofoug3uGy8xYBd1EphAOlE5fSIJkDuOHN2UIqIU48aTxSnEE1h7oC216R8Asv5cB2%2FtOOxWMEKSO&X-Amz-Signature=ca3eb84899a91fccd55d79c0962aab8832a5212e71c5217749a685cb37cdb4ed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
