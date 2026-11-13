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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKFDB2GW%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqMf774GMMxtnBEe8g%2Fj9vtLCg2RbDpbJCPKtu40YHIQIgYE2zeE1zXsTKQTto%2Brx3DY0PM0r532jPNFdBwZOXN4AqiAQIiP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJabm8GfovTfWaCEcircA4BzK%2B9v1sLsqORBiKMDsBAquuPgqnJbThW15TUR1VpnoKF6N8e7q2V1slx0wxd52dmMlZaiVfTWY6QRKdaoTzCoLFhXJgINO7UCla8bzbbNfwcgTVqBLY04aDYnsFGr3tAVYKah3VQzPiJQBp8KJCBRJ%2B5pfOf2xpy5%2Bj4V9M4cWAjX3Ro2DHvApBMN4n2sN0zUWMz9I0ft4Pv8bFeXAXxr7wYlx47zpmqbFPZ3r2%2BOVOKUoOpC5ebjH%2FMUPqPIhFhflOQmeNgxIcpQp2PdVDqUYoInjcOukWta%2F%2Fx6K6cBPcnG9mgmN0%2BWzgoNGXSz%2BQmUtkd5LcBDmCDbwvC8w4D9RQ%2BCP5QPcTXRnYzuxV8C6fnLeI3oyZrks6gBpyZ7el2SoZ0L0mcgNAmbBWpBAf2J6V4arMgp6vKWtiFbYzF9zXqWckwBWAqng5K2X7HxoimE9mEIckagPm3t6lCbfHnylOE66tItxXP0WzZJ4ge7S2oSzUu%2BU8Dg%2Fr3dNNs8ajZTLz6%2BjomfLKMs2j3YrWCwKy%2FWjMh795suWzjugGhewsFueb%2FKcPWppGNzP7HCjhms3OH2cX1NCzFPW1W%2FQvCvwo%2FPll2gCqhrUQhZ9bH1KKEvJXjnSEIV7mTgMP%2FK3NcGOqUBWXvxbfPz4ykdm1zEFNDNzO%2FJTJgqiJCzokemNDiZ1d2gnpjDN9LmT3wXmuIGTQ%2BbR98V5YZILK%2FsIzWfhwPmjF%2BvEi1c3mwnI54gfzeeIWwLKqu3%2Bjm8FDE3GVBCMsoaqMke7bi4aah099tphsFQOLGIwUnciNckXtcdjB1iJAIUkmIAotqt0O3dIFNL3go7Zz88DRFa0eI%2BZfMHY7fa9x%2BrElJg&X-Amz-Signature=09e82c4da16ec8b8ec4b127a1d22178807e7e4b405d04c122ce5b83b4c2a182d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKFDB2GW%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqMf774GMMxtnBEe8g%2Fj9vtLCg2RbDpbJCPKtu40YHIQIgYE2zeE1zXsTKQTto%2Brx3DY0PM0r532jPNFdBwZOXN4AqiAQIiP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJabm8GfovTfWaCEcircA4BzK%2B9v1sLsqORBiKMDsBAquuPgqnJbThW15TUR1VpnoKF6N8e7q2V1slx0wxd52dmMlZaiVfTWY6QRKdaoTzCoLFhXJgINO7UCla8bzbbNfwcgTVqBLY04aDYnsFGr3tAVYKah3VQzPiJQBp8KJCBRJ%2B5pfOf2xpy5%2Bj4V9M4cWAjX3Ro2DHvApBMN4n2sN0zUWMz9I0ft4Pv8bFeXAXxr7wYlx47zpmqbFPZ3r2%2BOVOKUoOpC5ebjH%2FMUPqPIhFhflOQmeNgxIcpQp2PdVDqUYoInjcOukWta%2F%2Fx6K6cBPcnG9mgmN0%2BWzgoNGXSz%2BQmUtkd5LcBDmCDbwvC8w4D9RQ%2BCP5QPcTXRnYzuxV8C6fnLeI3oyZrks6gBpyZ7el2SoZ0L0mcgNAmbBWpBAf2J6V4arMgp6vKWtiFbYzF9zXqWckwBWAqng5K2X7HxoimE9mEIckagPm3t6lCbfHnylOE66tItxXP0WzZJ4ge7S2oSzUu%2BU8Dg%2Fr3dNNs8ajZTLz6%2BjomfLKMs2j3YrWCwKy%2FWjMh795suWzjugGhewsFueb%2FKcPWppGNzP7HCjhms3OH2cX1NCzFPW1W%2FQvCvwo%2FPll2gCqhrUQhZ9bH1KKEvJXjnSEIV7mTgMP%2FK3NcGOqUBWXvxbfPz4ykdm1zEFNDNzO%2FJTJgqiJCzokemNDiZ1d2gnpjDN9LmT3wXmuIGTQ%2BbR98V5YZILK%2FsIzWfhwPmjF%2BvEi1c3mwnI54gfzeeIWwLKqu3%2Bjm8FDE3GVBCMsoaqMke7bi4aah099tphsFQOLGIwUnciNckXtcdjB1iJAIUkmIAotqt0O3dIFNL3go7Zz88DRFa0eI%2BZfMHY7fa9x%2BrElJg&X-Amz-Signature=c2c983ea1c85fa43b82e2004641dde9fe1d08d77a8f8b825161cff40fa8a214a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XKFDB2GW%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCqMf774GMMxtnBEe8g%2Fj9vtLCg2RbDpbJCPKtu40YHIQIgYE2zeE1zXsTKQTto%2Brx3DY0PM0r532jPNFdBwZOXN4AqiAQIiP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJabm8GfovTfWaCEcircA4BzK%2B9v1sLsqORBiKMDsBAquuPgqnJbThW15TUR1VpnoKF6N8e7q2V1slx0wxd52dmMlZaiVfTWY6QRKdaoTzCoLFhXJgINO7UCla8bzbbNfwcgTVqBLY04aDYnsFGr3tAVYKah3VQzPiJQBp8KJCBRJ%2B5pfOf2xpy5%2Bj4V9M4cWAjX3Ro2DHvApBMN4n2sN0zUWMz9I0ft4Pv8bFeXAXxr7wYlx47zpmqbFPZ3r2%2BOVOKUoOpC5ebjH%2FMUPqPIhFhflOQmeNgxIcpQp2PdVDqUYoInjcOukWta%2F%2Fx6K6cBPcnG9mgmN0%2BWzgoNGXSz%2BQmUtkd5LcBDmCDbwvC8w4D9RQ%2BCP5QPcTXRnYzuxV8C6fnLeI3oyZrks6gBpyZ7el2SoZ0L0mcgNAmbBWpBAf2J6V4arMgp6vKWtiFbYzF9zXqWckwBWAqng5K2X7HxoimE9mEIckagPm3t6lCbfHnylOE66tItxXP0WzZJ4ge7S2oSzUu%2BU8Dg%2Fr3dNNs8ajZTLz6%2BjomfLKMs2j3YrWCwKy%2FWjMh795suWzjugGhewsFueb%2FKcPWppGNzP7HCjhms3OH2cX1NCzFPW1W%2FQvCvwo%2FPll2gCqhrUQhZ9bH1KKEvJXjnSEIV7mTgMP%2FK3NcGOqUBWXvxbfPz4ykdm1zEFNDNzO%2FJTJgqiJCzokemNDiZ1d2gnpjDN9LmT3wXmuIGTQ%2BbR98V5YZILK%2FsIzWfhwPmjF%2BvEi1c3mwnI54gfzeeIWwLKqu3%2Bjm8FDE3GVBCMsoaqMke7bi4aah099tphsFQOLGIwUnciNckXtcdjB1iJAIUkmIAotqt0O3dIFNL3go7Zz88DRFa0eI%2BZfMHY7fa9x%2BrElJg&X-Amz-Signature=155bb7778401756b1d00c1aae83d915692a1fe2ea31daa0f2650411c37436345&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSB6ZBVI%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkeMDJ6t4g7ZXIFtL4IM%2FKLxquV5cEFHYopLW%2BsVxvmAiAJIgyTsBhoLkIZl0Ukle1IkAGqBG8YzbCpzNb4Br%2Fr%2ByqIBAiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmeA7qM7%2FhRYZK%2FsEKtwDRbcHxnwed8w4JnDYdieGcauSYQ0TY2vfEA%2FfvYcbaciIldc9J4BAIIZMEaMDnNlt50L4i4orc7LNSxK2dnVvdO9msuhAwrv01PYbqmsqGAcR4dYimiWmZnKPgL7Bx6aZ9xxxfxp4U%2BPh69%2BSllKwM6q%2FZS50cmfExrqYTToYInPo9yvzL9t3e3WMYX3uFBxaWqjXqHBziTUa3HAKyTqzo%2BXDGK6ONGp2IhGVKskjeotdMCSUapNcD0KCj5JXT8fUWCGuHQyVEx8jDtEIQDfu%2FDljgGJ6AGc%2FTkX7J8RrIhDevZdDIhOrfLqR1KxV6TTYifml1leMwPH54%2FekrBEj2CSv%2F6XsrdjUhS3Y3HsHsnnlBwz8mHa2B7cUsx1mXuW%2F23ptvSR%2BPd2tcC1mk9pvVEF8%2FQAQJUrB7r4ZNePGvD1uPzKCfp%2FTSLJYn2mlhdwHIEHK1uif30VBPr7%2BJSAbjaKwdAYkLiTjpb2lKoi1jKtp7BZT8E2dGM7mskBmnq9s6K566PR1SYJ3frFjXcmsmo2FsUQviPbfCxOfakGLdH6YJMSDU%2FwTIL8beVp28%2BIjrh5DpOCv0NQriI1e0soI5TCs6xZqea%2FlUw0Cw%2FDJay2D5pvuTXV6r8So2HAwy8zc1wY6pgEbmRpFR2TA6dMZpBb5cuRVfN4W18LQgM%2Bc4rzlF8SvKHe0vzEX7h2KDJ4vbgHS64pAqKF8dzdVTFCGZgufaFrXOINpsLqiYDC5OTVh7uG0IHTgbCgsxxZ2s%2FdrAkK29nmg1PW7XaMIJ0S4PXKsKZJsSs4mPH0Hc4w3pTaclmoM4TnjY204t4Hp6%2BS0KJpKA3%2BExkxcj5BBsXnooSdwh0E8%2F5DEXJuu&X-Amz-Signature=99d98dfa4f356a2c437a252d9455d814c0d79f439a2c73feb1419dcdc90dcdca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSB6ZBVI%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkeMDJ6t4g7ZXIFtL4IM%2FKLxquV5cEFHYopLW%2BsVxvmAiAJIgyTsBhoLkIZl0Ukle1IkAGqBG8YzbCpzNb4Br%2Fr%2ByqIBAiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmeA7qM7%2FhRYZK%2FsEKtwDRbcHxnwed8w4JnDYdieGcauSYQ0TY2vfEA%2FfvYcbaciIldc9J4BAIIZMEaMDnNlt50L4i4orc7LNSxK2dnVvdO9msuhAwrv01PYbqmsqGAcR4dYimiWmZnKPgL7Bx6aZ9xxxfxp4U%2BPh69%2BSllKwM6q%2FZS50cmfExrqYTToYInPo9yvzL9t3e3WMYX3uFBxaWqjXqHBziTUa3HAKyTqzo%2BXDGK6ONGp2IhGVKskjeotdMCSUapNcD0KCj5JXT8fUWCGuHQyVEx8jDtEIQDfu%2FDljgGJ6AGc%2FTkX7J8RrIhDevZdDIhOrfLqR1KxV6TTYifml1leMwPH54%2FekrBEj2CSv%2F6XsrdjUhS3Y3HsHsnnlBwz8mHa2B7cUsx1mXuW%2F23ptvSR%2BPd2tcC1mk9pvVEF8%2FQAQJUrB7r4ZNePGvD1uPzKCfp%2FTSLJYn2mlhdwHIEHK1uif30VBPr7%2BJSAbjaKwdAYkLiTjpb2lKoi1jKtp7BZT8E2dGM7mskBmnq9s6K566PR1SYJ3frFjXcmsmo2FsUQviPbfCxOfakGLdH6YJMSDU%2FwTIL8beVp28%2BIjrh5DpOCv0NQriI1e0soI5TCs6xZqea%2FlUw0Cw%2FDJay2D5pvuTXV6r8So2HAwy8zc1wY6pgEbmRpFR2TA6dMZpBb5cuRVfN4W18LQgM%2Bc4rzlF8SvKHe0vzEX7h2KDJ4vbgHS64pAqKF8dzdVTFCGZgufaFrXOINpsLqiYDC5OTVh7uG0IHTgbCgsxxZ2s%2FdrAkK29nmg1PW7XaMIJ0S4PXKsKZJsSs4mPH0Hc4w3pTaclmoM4TnjY204t4Hp6%2BS0KJpKA3%2BExkxcj5BBsXnooSdwh0E8%2F5DEXJuu&X-Amz-Signature=be3da856ce079f794a20522fee51bbefda49ed34cd94488e918312434d28496f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSB6ZBVI%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkeMDJ6t4g7ZXIFtL4IM%2FKLxquV5cEFHYopLW%2BsVxvmAiAJIgyTsBhoLkIZl0Ukle1IkAGqBG8YzbCpzNb4Br%2Fr%2ByqIBAiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmeA7qM7%2FhRYZK%2FsEKtwDRbcHxnwed8w4JnDYdieGcauSYQ0TY2vfEA%2FfvYcbaciIldc9J4BAIIZMEaMDnNlt50L4i4orc7LNSxK2dnVvdO9msuhAwrv01PYbqmsqGAcR4dYimiWmZnKPgL7Bx6aZ9xxxfxp4U%2BPh69%2BSllKwM6q%2FZS50cmfExrqYTToYInPo9yvzL9t3e3WMYX3uFBxaWqjXqHBziTUa3HAKyTqzo%2BXDGK6ONGp2IhGVKskjeotdMCSUapNcD0KCj5JXT8fUWCGuHQyVEx8jDtEIQDfu%2FDljgGJ6AGc%2FTkX7J8RrIhDevZdDIhOrfLqR1KxV6TTYifml1leMwPH54%2FekrBEj2CSv%2F6XsrdjUhS3Y3HsHsnnlBwz8mHa2B7cUsx1mXuW%2F23ptvSR%2BPd2tcC1mk9pvVEF8%2FQAQJUrB7r4ZNePGvD1uPzKCfp%2FTSLJYn2mlhdwHIEHK1uif30VBPr7%2BJSAbjaKwdAYkLiTjpb2lKoi1jKtp7BZT8E2dGM7mskBmnq9s6K566PR1SYJ3frFjXcmsmo2FsUQviPbfCxOfakGLdH6YJMSDU%2FwTIL8beVp28%2BIjrh5DpOCv0NQriI1e0soI5TCs6xZqea%2FlUw0Cw%2FDJay2D5pvuTXV6r8So2HAwy8zc1wY6pgEbmRpFR2TA6dMZpBb5cuRVfN4W18LQgM%2Bc4rzlF8SvKHe0vzEX7h2KDJ4vbgHS64pAqKF8dzdVTFCGZgufaFrXOINpsLqiYDC5OTVh7uG0IHTgbCgsxxZ2s%2FdrAkK29nmg1PW7XaMIJ0S4PXKsKZJsSs4mPH0Hc4w3pTaclmoM4TnjY204t4Hp6%2BS0KJpKA3%2BExkxcj5BBsXnooSdwh0E8%2F5DEXJuu&X-Amz-Signature=8c60709356fc90120fe14734cb88ede7112d0fca8eb803761338041bee8213e7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZSB6ZBVI%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155511Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICkeMDJ6t4g7ZXIFtL4IM%2FKLxquV5cEFHYopLW%2BsVxvmAiAJIgyTsBhoLkIZl0Ukle1IkAGqBG8YzbCpzNb4Br%2Fr%2ByqIBAiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmeA7qM7%2FhRYZK%2FsEKtwDRbcHxnwed8w4JnDYdieGcauSYQ0TY2vfEA%2FfvYcbaciIldc9J4BAIIZMEaMDnNlt50L4i4orc7LNSxK2dnVvdO9msuhAwrv01PYbqmsqGAcR4dYimiWmZnKPgL7Bx6aZ9xxxfxp4U%2BPh69%2BSllKwM6q%2FZS50cmfExrqYTToYInPo9yvzL9t3e3WMYX3uFBxaWqjXqHBziTUa3HAKyTqzo%2BXDGK6ONGp2IhGVKskjeotdMCSUapNcD0KCj5JXT8fUWCGuHQyVEx8jDtEIQDfu%2FDljgGJ6AGc%2FTkX7J8RrIhDevZdDIhOrfLqR1KxV6TTYifml1leMwPH54%2FekrBEj2CSv%2F6XsrdjUhS3Y3HsHsnnlBwz8mHa2B7cUsx1mXuW%2F23ptvSR%2BPd2tcC1mk9pvVEF8%2FQAQJUrB7r4ZNePGvD1uPzKCfp%2FTSLJYn2mlhdwHIEHK1uif30VBPr7%2BJSAbjaKwdAYkLiTjpb2lKoi1jKtp7BZT8E2dGM7mskBmnq9s6K566PR1SYJ3frFjXcmsmo2FsUQviPbfCxOfakGLdH6YJMSDU%2FwTIL8beVp28%2BIjrh5DpOCv0NQriI1e0soI5TCs6xZqea%2FlUw0Cw%2FDJay2D5pvuTXV6r8So2HAwy8zc1wY6pgEbmRpFR2TA6dMZpBb5cuRVfN4W18LQgM%2Bc4rzlF8SvKHe0vzEX7h2KDJ4vbgHS64pAqKF8dzdVTFCGZgufaFrXOINpsLqiYDC5OTVh7uG0IHTgbCgsxxZ2s%2FdrAkK29nmg1PW7XaMIJ0S4PXKsKZJsSs4mPH0Hc4w3pTaclmoM4TnjY204t4Hp6%2BS0KJpKA3%2BExkxcj5BBsXnooSdwh0E8%2F5DEXJuu&X-Amz-Signature=960c7d7974ccf800021fe4cca2544f74fd3dcdebc2425b474ed35ef2bd6b9f57&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TINLOIV%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155512Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGiYZ0nSm5cwMU4moNbjvpEML2hiQE3IxHX3CAOmWTqpAiBorvjywI41Oe1WOiI2ITQHyhnyAsqCYKlt8isBCQ9uJiqIBAiI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDGjPvfKOFu1ZohnaKtwDwQYUdtE9wmnNYMRcXCEonACjZYPVCmvuxtLwjN2SLkrvRmCW186O4HfgjP2p0DRhFXCMf6hctEDa%2BXjwJyckhsCInPSQtRxoksXOKtVyL%2Ft3taCmFGB4DLg55lxR%2BH9OQHgjpXacDvMPLgTSSZ3Wc5M9dXxKMzfRVK8iEDVpOsFtcWwb2shx%2FQWZ79%2F5iAkketqdrUsluX0R9yG%2F6LlRzbdaXLAFGaLXY8Y%2B07YXL%2BsDTdL9%2BeXBlZ4G7ZMalI45nIWf%2BnIGaVSROVWHR%2FTbhojXFUeWnWZkjLlYDxEWQGsYZHANAi3Jh83jld0VjNwU7KjbWjHhQLamPASRuDjNU2fA9EJhA9cdeyzi8jESyv7GCJoZj%2FowIWLRBLpuZnQTOiyOdWVutyw1jMjZiW%2Fug0D8WdJ%2BVySZmzcNU9456hDQ8G4OHbMJKXSl3nKPNq9OBuDG0YfKHQfAcLWZjAkISq22NGFuvtWVjRcyunnf9ZO3b3c%2B77lkN5d%2BQnypHNGF4iXWp%2FqZ3ZL9I%2F4drMflc5tiGAuYhHJBiVQ4Zb%2BqAS9JVDYCZZihvy2pHeEBJEFSPCmthAXf87L6Dqc8aPVbOZQvBAJOvqSKxZi932RZgJtN4DXZtCS9odeYJjkwp8vc1wY6pgGRO5AceM34b2o5J7ZFDKOuONBeS2%2FxeRT%2FYTeJHvbfG8mP9foojjjeL6ApWdOyb01MtxHfQjvwP4pCETM11CtTL%2BKZz6G4AvpeZrYeTd7bqeSWnGt78l6Z485rRcsZH3YfLscogDu8RWRUAM9SqBCX1bz%2Flvo0q8940xN9HOjkR68Ar6kbph315%2FDeUQkB6Z%2ByDJ1F2g7Ju2Q6oolZSRuukB0TukHO&X-Amz-Signature=224567075c39e8bc3a9b5427a973452aa7ef319cd3fae8ff228b8bee14f78b46&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JJF6C32%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155512Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAdIlAc7fVIDSgzWeTsoeE8wHLrQ4WV6DRDfa%2BOuaxa3AiEAuQSCdKNKjOGuFrCSXwjVvfl7N%2Bh7wRjD2%2FzatQIGxlMqiAQIh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDP9GLY4yXNn27KemVyrcAyDR42wUfHK%2FAA51YrEfxYmRgENTZEoks%2FEG4rjpjPl%2FdGh3pob926P1rMbdAA18%2B%2BKxrmKL7QOHHNu9w%2BnNooBzFdK5vwAQlO58MhHGM0uBSPJRwV%2FVsazutVT%2BFwPAvPoLYVh5Ymh9dcXxCQBSDJgHqmtlGoIJmbV8pyMa%2FIFtHlXr6c%2FXgFwm4GjHdoT2orokFRaWQAk%2BoWRk2hTG4bnH%2FPTwU5AE8vyb%2FFgeQKSannnTUhkd84zSNVpaUm1AdCfbVRgRje0OPbZFZjFF6Y3febx5MtyBKE4E5TgQSwdLwoLBpvE9sgAyZ%2FR6RUx3APsFl32fEsNIefB0RiaRGo9WatJGRtoMaaxdONSS8aRPqHvTTGa4nTN%2Fcbw0jVyCAr7iIKR%2FLDchoYGMDpj7RKMV9Oh8I6xoRnTuDycUePb2tOyUhQ9TXusT25NRHrzJb1vK26hDorO9DfPWtrUbOia5kWrtF7Kw%2BrxmQS7VwwQ2RlSL81tBKdZI6WQjSoDwGvKZbFZquTcxR8ugkJFW2fwD8AA5Nm5JQApRFNNAd5vMRt9vk8ongaNAhUtuOwrAv1WDW26rS1W2%2BGdyfilp9eakiQZCJpjQUw56wOhjrOX90J1m0CvpoBWnDFgdMKLL3NcGOqUBMk3ndGuREMcM7wpr4UmBl2hbJkf%2FMqnBaX1T9spEbFgPkqchylU%2F9bfxAZCUuZXrwJjTe7C8j0fKKVdrnmrzepKPJlShYi5PP0BL7NPLLT6B3fWlRCf6A4YjwXPbPwTQvTVvALnLTPIBqyuxU4p1eVRX15O7uTFLLYa1pArOh2vI1Khs99V0RYX7l4H4sGN%2BckaowxBtbtTBq6bCKMO3f0gvYaNv&X-Amz-Signature=de5604bbd0609380b460bac1872dcbfe22407eda435586050c5cf778f03c2f97&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JJF6C32%2F20261113%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261113T155512Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAdIlAc7fVIDSgzWeTsoeE8wHLrQ4WV6DRDfa%2BOuaxa3AiEAuQSCdKNKjOGuFrCSXwjVvfl7N%2Bh7wRjD2%2FzatQIGxlMqiAQIh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDP9GLY4yXNn27KemVyrcAyDR42wUfHK%2FAA51YrEfxYmRgENTZEoks%2FEG4rjpjPl%2FdGh3pob926P1rMbdAA18%2B%2BKxrmKL7QOHHNu9w%2BnNooBzFdK5vwAQlO58MhHGM0uBSPJRwV%2FVsazutVT%2BFwPAvPoLYVh5Ymh9dcXxCQBSDJgHqmtlGoIJmbV8pyMa%2FIFtHlXr6c%2FXgFwm4GjHdoT2orokFRaWQAk%2BoWRk2hTG4bnH%2FPTwU5AE8vyb%2FFgeQKSannnTUhkd84zSNVpaUm1AdCfbVRgRje0OPbZFZjFF6Y3febx5MtyBKE4E5TgQSwdLwoLBpvE9sgAyZ%2FR6RUx3APsFl32fEsNIefB0RiaRGo9WatJGRtoMaaxdONSS8aRPqHvTTGa4nTN%2Fcbw0jVyCAr7iIKR%2FLDchoYGMDpj7RKMV9Oh8I6xoRnTuDycUePb2tOyUhQ9TXusT25NRHrzJb1vK26hDorO9DfPWtrUbOia5kWrtF7Kw%2BrxmQS7VwwQ2RlSL81tBKdZI6WQjSoDwGvKZbFZquTcxR8ugkJFW2fwD8AA5Nm5JQApRFNNAd5vMRt9vk8ongaNAhUtuOwrAv1WDW26rS1W2%2BGdyfilp9eakiQZCJpjQUw56wOhjrOX90J1m0CvpoBWnDFgdMKLL3NcGOqUBMk3ndGuREMcM7wpr4UmBl2hbJkf%2FMqnBaX1T9spEbFgPkqchylU%2F9bfxAZCUuZXrwJjTe7C8j0fKKVdrnmrzepKPJlShYi5PP0BL7NPLLT6B3fWlRCf6A4YjwXPbPwTQvTVvALnLTPIBqyuxU4p1eVRX15O7uTFLLYa1pArOh2vI1Khs99V0RYX7l4H4sGN%2BckaowxBtbtTBq6bCKMO3f0gvYaNv&X-Amz-Signature=c4289df0f9bff567c62832fef12f7a81d57416b68685aac7e663a36a8176e590&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
