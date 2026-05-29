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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVBMUKMN%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCfo5Ehea61%2FAISnVo5tTs6OuV82D6etp3Njd5tunuhKwIhAPd4kS1fEoxJlth1lPBbcDdjyTv12FfODrjoJTRTS9YnKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsZ0QXNG8cRVwb7kUq3AOJGEBG64Fj8OFyW1waV%2FBonJ20zgWW%2BIqrHpC0gyvpPHKq6V6p0tx2VVarZw1uc9SlOo40an5T8L%2BqybB%2BzKTV4fwq3xG3WMQc%2FqcDchNo0sgrECU8GaT4KQIIm%2BnuV3fcnzLH5lpFMectF18QmIoOIbbTAKEceHU8%2Biw2tSSNtzw2%2B2uaqjExtI7adL0ke08Hig%2FFlUyOSO4EbPZYQ1PqL6t%2BDChGjrnQ0ZVBdIggOSjDLaaPn592U0MLN9qiFH%2BHBud5mV5r77nyLGPbh71fj0b2rFr%2Bym1z%2F8ElNRVeyDm91UYKb9ctP%2B3M14V91QjEG6nK%2BWlC4EpThYiOmQflwCEHIku%2BwRW3J3CiIRk5yEqj%2FhKZdXRDXZ99TeJ0By%2BYpITmjYB%2Bk2RrC3vDu6hGv7fSfJsCw2zAOP%2F%2FyEraRiy%2B%2FCT4L1MjnH9uuzRXxDS1HRNR%2Fr9x1DSKBhne2yMNSNeF6FPN1Z0WO0Z3Cdpz%2B8DyAaQrYPUJcYQgPVpmVvHbzOLhiH5%2BX%2FvEZWggO0wf2PF9o8MqMBM%2Fn%2FZ43eRsB%2F%2BAe%2FzgGP5fm5x%2BOP8H0OHUvjdhZchk%2FMInKeCHIgF80KF7C0%2B3IWLFuGJcQzhpsORjG2ebXO4OyH%2BCJzDu3uXQBjqkASCr4%2FRZzdQlcyn3sm1Q4E3RgkHieJRMXxMV5jCBKumtsHqr4LR%2B2OlkcbQa0dxF8XHedWl60GtZl%2BN4iRmUaEFXxc63opf2crIShNoaiFFYuy%2Bf6wlRSHWOP5ZyEr7bkLReXqMjux2jzRbSEsG0he55vIxkRLvjb7QqboBAiNsQ2KlP1cF%2ByLYsszEApTrG1fOF5mVL33PpfLj1cariBJu71%2FAY&X-Amz-Signature=5a444ca7c13163b6affffa5e79e68bbc4458be7b366c05bec372ce25616ebb0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVBMUKMN%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCfo5Ehea61%2FAISnVo5tTs6OuV82D6etp3Njd5tunuhKwIhAPd4kS1fEoxJlth1lPBbcDdjyTv12FfODrjoJTRTS9YnKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsZ0QXNG8cRVwb7kUq3AOJGEBG64Fj8OFyW1waV%2FBonJ20zgWW%2BIqrHpC0gyvpPHKq6V6p0tx2VVarZw1uc9SlOo40an5T8L%2BqybB%2BzKTV4fwq3xG3WMQc%2FqcDchNo0sgrECU8GaT4KQIIm%2BnuV3fcnzLH5lpFMectF18QmIoOIbbTAKEceHU8%2Biw2tSSNtzw2%2B2uaqjExtI7adL0ke08Hig%2FFlUyOSO4EbPZYQ1PqL6t%2BDChGjrnQ0ZVBdIggOSjDLaaPn592U0MLN9qiFH%2BHBud5mV5r77nyLGPbh71fj0b2rFr%2Bym1z%2F8ElNRVeyDm91UYKb9ctP%2B3M14V91QjEG6nK%2BWlC4EpThYiOmQflwCEHIku%2BwRW3J3CiIRk5yEqj%2FhKZdXRDXZ99TeJ0By%2BYpITmjYB%2Bk2RrC3vDu6hGv7fSfJsCw2zAOP%2F%2FyEraRiy%2B%2FCT4L1MjnH9uuzRXxDS1HRNR%2Fr9x1DSKBhne2yMNSNeF6FPN1Z0WO0Z3Cdpz%2B8DyAaQrYPUJcYQgPVpmVvHbzOLhiH5%2BX%2FvEZWggO0wf2PF9o8MqMBM%2Fn%2FZ43eRsB%2F%2BAe%2FzgGP5fm5x%2BOP8H0OHUvjdhZchk%2FMInKeCHIgF80KF7C0%2B3IWLFuGJcQzhpsORjG2ebXO4OyH%2BCJzDu3uXQBjqkASCr4%2FRZzdQlcyn3sm1Q4E3RgkHieJRMXxMV5jCBKumtsHqr4LR%2B2OlkcbQa0dxF8XHedWl60GtZl%2BN4iRmUaEFXxc63opf2crIShNoaiFFYuy%2Bf6wlRSHWOP5ZyEr7bkLReXqMjux2jzRbSEsG0he55vIxkRLvjb7QqboBAiNsQ2KlP1cF%2ByLYsszEApTrG1fOF5mVL33PpfLj1cariBJu71%2FAY&X-Amz-Signature=4f9e815fe29acbd3665da821e7a49634a374d428d06e18594e764da0f059f392&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVBMUKMN%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCfo5Ehea61%2FAISnVo5tTs6OuV82D6etp3Njd5tunuhKwIhAPd4kS1fEoxJlth1lPBbcDdjyTv12FfODrjoJTRTS9YnKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzsZ0QXNG8cRVwb7kUq3AOJGEBG64Fj8OFyW1waV%2FBonJ20zgWW%2BIqrHpC0gyvpPHKq6V6p0tx2VVarZw1uc9SlOo40an5T8L%2BqybB%2BzKTV4fwq3xG3WMQc%2FqcDchNo0sgrECU8GaT4KQIIm%2BnuV3fcnzLH5lpFMectF18QmIoOIbbTAKEceHU8%2Biw2tSSNtzw2%2B2uaqjExtI7adL0ke08Hig%2FFlUyOSO4EbPZYQ1PqL6t%2BDChGjrnQ0ZVBdIggOSjDLaaPn592U0MLN9qiFH%2BHBud5mV5r77nyLGPbh71fj0b2rFr%2Bym1z%2F8ElNRVeyDm91UYKb9ctP%2B3M14V91QjEG6nK%2BWlC4EpThYiOmQflwCEHIku%2BwRW3J3CiIRk5yEqj%2FhKZdXRDXZ99TeJ0By%2BYpITmjYB%2Bk2RrC3vDu6hGv7fSfJsCw2zAOP%2F%2FyEraRiy%2B%2FCT4L1MjnH9uuzRXxDS1HRNR%2Fr9x1DSKBhne2yMNSNeF6FPN1Z0WO0Z3Cdpz%2B8DyAaQrYPUJcYQgPVpmVvHbzOLhiH5%2BX%2FvEZWggO0wf2PF9o8MqMBM%2Fn%2FZ43eRsB%2F%2BAe%2FzgGP5fm5x%2BOP8H0OHUvjdhZchk%2FMInKeCHIgF80KF7C0%2B3IWLFuGJcQzhpsORjG2ebXO4OyH%2BCJzDu3uXQBjqkASCr4%2FRZzdQlcyn3sm1Q4E3RgkHieJRMXxMV5jCBKumtsHqr4LR%2B2OlkcbQa0dxF8XHedWl60GtZl%2BN4iRmUaEFXxc63opf2crIShNoaiFFYuy%2Bf6wlRSHWOP5ZyEr7bkLReXqMjux2jzRbSEsG0he55vIxkRLvjb7QqboBAiNsQ2KlP1cF%2ByLYsszEApTrG1fOF5mVL33PpfLj1cariBJu71%2FAY&X-Amz-Signature=10b5c6085a6b5e6b755075035b0a94729430baf0380a330bbb41bfd75b4f4e02&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFQMORYR%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC2%2F8z2JyWGDw6kNFlnCmbJPhzZvOrz9YqOANPa11ZDaQIhAPfh8qAxMQ28ucwSi8urt5zhb3sE5lqSVhY8QK4T7eFdKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyaPNuQLcWFgm5D8vcq3AMKmb%2F%2FShfziCxCTWquPPx%2F7Rr0JYz5p0WAv7xlSmV6Ah2QVduRcSHP4n3YLUBpXrpiny0l%2BmqAQrbgZcZWqAy8ulEdjJtDuqzdHqSvSpN6dqQdi17LHi%2B32Cpu17Zt4eq2PCjSQ0T2VjWyoQ8WlIotGHaO4On%2F67Ijvz8%2B2hrDm4obZyV5fdEwip6%2FMY5DsrNomsZtthywupibZTTb1jcZFA1WgAGk587EK8%2FZtK7ytgJVydp3CsFco2gvxzldNuGESdxZpmkTfG57H13eB53an2canbSoH5HEwb2ePbH0gXDlJwSaHqDQYJ20RXDwgvMtVwkmtozyTGfE%2BG7qbw3x0%2Fp%2BEPR8T7QqVgUdl%2FZE01liP5oFrG7fcMvZTyqG4OM%2FUbdyYBIFIr0ibER7abBgZQcFIBcSZ39gr1yJkqQKJzBp3BtfFET31W8%2BVsts78CPzt5CLpdBQDJ9X0rLLmsj63L3d9ADtaL8Tpmu4YgBocCc72RiIaMUCJuruo6ufSXMy9L2CKY1S3sZuFCqldyK94Cc43B4PXzdWxEBr2EIN0qS%2FNI46Dg1WQmDsWMsg9IGDcFsp2SaqljyOR%2FWKuaJFqwnRm5yJIKOZbzfN%2FJb0gWWdIlDBiAzIVy7tTC63uXQBjqkAU%2FUTIu8SpZ0fR8zowQjf73hHB9LuCO%2FPI0at%2BkW%2FpH0%2FzEithVjv%2Fgx2slgpdR6u4dXHhYtBhhIq4dw6ZZwxr3sGa3OFHlRA5CmnwTxGmT3sXU1mbv7IPduW8GbvU3%2FZ6Iaq9dXKC0SBcZYf990cUmCL%2BHvcDUgKnLNxObcgOWXG7vOm0YAoU7LJD%2FyF8OEtnrW3pmq4TE1qZBPf2Eh5%2Bo6Au0j&X-Amz-Signature=b4a90af2143fc99e4d1011ae189016f5c77ca03dbbbb5d62e7c49eab67946f92&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFQMORYR%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC2%2F8z2JyWGDw6kNFlnCmbJPhzZvOrz9YqOANPa11ZDaQIhAPfh8qAxMQ28ucwSi8urt5zhb3sE5lqSVhY8QK4T7eFdKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyaPNuQLcWFgm5D8vcq3AMKmb%2F%2FShfziCxCTWquPPx%2F7Rr0JYz5p0WAv7xlSmV6Ah2QVduRcSHP4n3YLUBpXrpiny0l%2BmqAQrbgZcZWqAy8ulEdjJtDuqzdHqSvSpN6dqQdi17LHi%2B32Cpu17Zt4eq2PCjSQ0T2VjWyoQ8WlIotGHaO4On%2F67Ijvz8%2B2hrDm4obZyV5fdEwip6%2FMY5DsrNomsZtthywupibZTTb1jcZFA1WgAGk587EK8%2FZtK7ytgJVydp3CsFco2gvxzldNuGESdxZpmkTfG57H13eB53an2canbSoH5HEwb2ePbH0gXDlJwSaHqDQYJ20RXDwgvMtVwkmtozyTGfE%2BG7qbw3x0%2Fp%2BEPR8T7QqVgUdl%2FZE01liP5oFrG7fcMvZTyqG4OM%2FUbdyYBIFIr0ibER7abBgZQcFIBcSZ39gr1yJkqQKJzBp3BtfFET31W8%2BVsts78CPzt5CLpdBQDJ9X0rLLmsj63L3d9ADtaL8Tpmu4YgBocCc72RiIaMUCJuruo6ufSXMy9L2CKY1S3sZuFCqldyK94Cc43B4PXzdWxEBr2EIN0qS%2FNI46Dg1WQmDsWMsg9IGDcFsp2SaqljyOR%2FWKuaJFqwnRm5yJIKOZbzfN%2FJb0gWWdIlDBiAzIVy7tTC63uXQBjqkAU%2FUTIu8SpZ0fR8zowQjf73hHB9LuCO%2FPI0at%2BkW%2FpH0%2FzEithVjv%2Fgx2slgpdR6u4dXHhYtBhhIq4dw6ZZwxr3sGa3OFHlRA5CmnwTxGmT3sXU1mbv7IPduW8GbvU3%2FZ6Iaq9dXKC0SBcZYf990cUmCL%2BHvcDUgKnLNxObcgOWXG7vOm0YAoU7LJD%2FyF8OEtnrW3pmq4TE1qZBPf2Eh5%2Bo6Au0j&X-Amz-Signature=0ca8e159b4f7d7020bed616057e9da7c88a4c061ca07edf673e6e01b44abf3de&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFQMORYR%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC2%2F8z2JyWGDw6kNFlnCmbJPhzZvOrz9YqOANPa11ZDaQIhAPfh8qAxMQ28ucwSi8urt5zhb3sE5lqSVhY8QK4T7eFdKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyaPNuQLcWFgm5D8vcq3AMKmb%2F%2FShfziCxCTWquPPx%2F7Rr0JYz5p0WAv7xlSmV6Ah2QVduRcSHP4n3YLUBpXrpiny0l%2BmqAQrbgZcZWqAy8ulEdjJtDuqzdHqSvSpN6dqQdi17LHi%2B32Cpu17Zt4eq2PCjSQ0T2VjWyoQ8WlIotGHaO4On%2F67Ijvz8%2B2hrDm4obZyV5fdEwip6%2FMY5DsrNomsZtthywupibZTTb1jcZFA1WgAGk587EK8%2FZtK7ytgJVydp3CsFco2gvxzldNuGESdxZpmkTfG57H13eB53an2canbSoH5HEwb2ePbH0gXDlJwSaHqDQYJ20RXDwgvMtVwkmtozyTGfE%2BG7qbw3x0%2Fp%2BEPR8T7QqVgUdl%2FZE01liP5oFrG7fcMvZTyqG4OM%2FUbdyYBIFIr0ibER7abBgZQcFIBcSZ39gr1yJkqQKJzBp3BtfFET31W8%2BVsts78CPzt5CLpdBQDJ9X0rLLmsj63L3d9ADtaL8Tpmu4YgBocCc72RiIaMUCJuruo6ufSXMy9L2CKY1S3sZuFCqldyK94Cc43B4PXzdWxEBr2EIN0qS%2FNI46Dg1WQmDsWMsg9IGDcFsp2SaqljyOR%2FWKuaJFqwnRm5yJIKOZbzfN%2FJb0gWWdIlDBiAzIVy7tTC63uXQBjqkAU%2FUTIu8SpZ0fR8zowQjf73hHB9LuCO%2FPI0at%2BkW%2FpH0%2FzEithVjv%2Fgx2slgpdR6u4dXHhYtBhhIq4dw6ZZwxr3sGa3OFHlRA5CmnwTxGmT3sXU1mbv7IPduW8GbvU3%2FZ6Iaq9dXKC0SBcZYf990cUmCL%2BHvcDUgKnLNxObcgOWXG7vOm0YAoU7LJD%2FyF8OEtnrW3pmq4TE1qZBPf2Eh5%2Bo6Au0j&X-Amz-Signature=1dff226c8616a63728ede99f9e3c9553109ae3a153dbfcd0dd4a335408a41dd5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YFQMORYR%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112827Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC2%2F8z2JyWGDw6kNFlnCmbJPhzZvOrz9YqOANPa11ZDaQIhAPfh8qAxMQ28ucwSi8urt5zhb3sE5lqSVhY8QK4T7eFdKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyaPNuQLcWFgm5D8vcq3AMKmb%2F%2FShfziCxCTWquPPx%2F7Rr0JYz5p0WAv7xlSmV6Ah2QVduRcSHP4n3YLUBpXrpiny0l%2BmqAQrbgZcZWqAy8ulEdjJtDuqzdHqSvSpN6dqQdi17LHi%2B32Cpu17Zt4eq2PCjSQ0T2VjWyoQ8WlIotGHaO4On%2F67Ijvz8%2B2hrDm4obZyV5fdEwip6%2FMY5DsrNomsZtthywupibZTTb1jcZFA1WgAGk587EK8%2FZtK7ytgJVydp3CsFco2gvxzldNuGESdxZpmkTfG57H13eB53an2canbSoH5HEwb2ePbH0gXDlJwSaHqDQYJ20RXDwgvMtVwkmtozyTGfE%2BG7qbw3x0%2Fp%2BEPR8T7QqVgUdl%2FZE01liP5oFrG7fcMvZTyqG4OM%2FUbdyYBIFIr0ibER7abBgZQcFIBcSZ39gr1yJkqQKJzBp3BtfFET31W8%2BVsts78CPzt5CLpdBQDJ9X0rLLmsj63L3d9ADtaL8Tpmu4YgBocCc72RiIaMUCJuruo6ufSXMy9L2CKY1S3sZuFCqldyK94Cc43B4PXzdWxEBr2EIN0qS%2FNI46Dg1WQmDsWMsg9IGDcFsp2SaqljyOR%2FWKuaJFqwnRm5yJIKOZbzfN%2FJb0gWWdIlDBiAzIVy7tTC63uXQBjqkAU%2FUTIu8SpZ0fR8zowQjf73hHB9LuCO%2FPI0at%2BkW%2FpH0%2FzEithVjv%2Fgx2slgpdR6u4dXHhYtBhhIq4dw6ZZwxr3sGa3OFHlRA5CmnwTxGmT3sXU1mbv7IPduW8GbvU3%2FZ6Iaq9dXKC0SBcZYf990cUmCL%2BHvcDUgKnLNxObcgOWXG7vOm0YAoU7LJD%2FyF8OEtnrW3pmq4TE1qZBPf2Eh5%2Bo6Au0j&X-Amz-Signature=f7354b2edc726382ff1e058355f488cd8e744f8b9593cf52f31a57fcf38cb00e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663FWCNXZF%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112828Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBvWYD9zTZDzeA2%2FHxvcrSVP8DzUkFmr1cQNGq4%2Bt%2BdAAiEA1aSvVjpFEm7uZPlZV%2BDfcMLLcn%2BRIDeLYD2n0dnHeV4qiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNv4hSItDsjNDv4DnCrcAwwJ0xMFbpSQ3DKPtm%2B7%2BoVns4pj6l2U9xvYky90AtbxZoCbZtEFNh6QXZG9JOM3dfqeG1JhwJ7cJT0i8ThRtVe5BMIqBEnPL7SN2RabEPcgiP73cO8bNTHaJp%2FCP8%2BvedxaPqDlZIeNPGoU1Ov%2BaSUWrGhm%2BDAh6Mas4nbxOgKhG%2F2HIlJoZQeetLYf4E2%2BcGllqG3%2BFenWd57JnRIORlvHPQ%2FWRKvn9%2Bp0e%2BV4FqnAFgeqSVXWPhhBe%2B8011EMF7UaDOh9%2F%2Bqee8M%2BsOKFH%2F1lL1hhFFevHLIOGudjjaUJs%2BceiEX1hRouaehQ1CPVj1j3tzpBQMmMgx9%2F5piPVuIb1mAdGKa3q%2BTIU7DGN4pTdchdmWKWpKxajTvdz5yYFcPt%2BytoCHpLChQj7lSzQuRddsDDT8bHz1n5iS7nE7gvraiYpWZku4djYmyNbcbqhus4QvIHgnd%2BgNh7cbsWFFT9MTfLU8TJEFIaRDugG%2BKR1zggpQ%2FoF4vlumSyu%2FRa8E15dSfAK6OVXucdbrYsuCJwnQgfwFlGnGMRwhveZu5dbGJ%2B3Nds0ZodurwxAlaFKA5%2FCGao3hoMaL5UB6ooY0U9fh%2BTqaoVyDH5craEUC0NQnhTdpAp9KmP%2B4KtMIfd5dAGOqUBvoT0lRUxWEM3WCHB2bVpKXTlNCfQDx0%2BMIbycLkfJXpcto%2Flnk4HJXgdVmKn9SKkHHuli0J37ALYgpHcR0JXiHWBWDlnbv05pkX5AsZjLVnSu3Z6FNZuxvY4BwWi6tcjOwkVV%2F39njhJqs6NPySXRjJ9jIf3GWFUIyX5z72hclSHGW25cMoL6HDs6fHx%2BJKY%2B0kST7EegkKqLcN%2FS07COBt4VsB2&X-Amz-Signature=498052cb3b39d1753c18ebf4f1db52f41c536af569bacab17fdca84f876bc897&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667DM7BWOY%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112828Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDT6RRCD23hs13mvcyED4bXa%2BkI5L2LvMSK6QC4WRdYQQIhAIqNyHYjfxrbsq6T%2Bru4hVYXzopah%2BVJ%2BH2xyWvmpNG9KogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx3oLFW0lOUzJJJ9hkq3APzFGEHby43OTnOEdpjKtSDPrVynrBsgunJ7dsa3B5wMmOmAE1lvz4g%2Bah4SA5Inz1bK3ihzwRe1eBt6T4kYe71zabvGaT47OMb%2BwqIJPbFCc%2FKaghz23bgqQxm9IfKJ9RDu9WTE1k%2Bpm9eXBFpnzUS4b4euGTGiEPVzomm8Yp8ZmK62V0LZ1kvlLVlhkdWAJErXTT6wLx32TM8Q%2BHdbMmcCoUxMPhQXR4GdVJLebvzikDSRKORZHEaTi6SHzOoLkwDHLcXrhltcpq4R7IXCQ4lVllcae%2BpUA9Vj6yugjjE85Aj%2BpTSrhZv6yQirRJNA8kWpM8EUSESmJR92xmWre6Lo1UDLq31MLr%2Fu2rI7OXH9w7ReOb3c6Pj%2B9l9TUbpdtrlxg6UidLJzzGuUWnpWOR0kHJRA4tZ%2FeuPleDQl0Lb1Yj33%2B11pHjxcFtW%2B%2Fd%2BFTeytVhKUT81%2BcElLj61NPOiA97WZp81WThALGiMpjSAM2Xgla2R5RPcl4BVyGlH7pWiOrEwcb2Jw7C8fsD4hWKgZNU7YQrIGosUM1udaaxxoYLuwyc5UCN1Quv8yEbSCLu3K89wVA0BqsPpQJQSWBXTsWLOcRjhoTpT5hpTNE%2FhQkd5drpdlhcU9o%2BsyjCq3eXQBjqkAVJaEbcaMnMWDCQ1fhul%2Bz6wkOQD40u%2Bch%2FksdrKDIik10sxPpzJ8MN68aONABmDrkZyqY4j%2Brc4cf1XrZteX0lumdZqVyCCNrh7c5r5J3nmLc9WbzUA1gsOt21Zz%2FZ%2F%2FlJYNrnFx0C7TYZN0rJE09CYbaZHoAWLIVz%2BRHW39MDOItdNC6lmF6y%2FC%2BQvfRcEYB7fACviTsBFMF8bP0BNkZx4FHRo&X-Amz-Signature=7b36c2dfad5ada38befe1afe4b8e3bb29dd37249f350e517c2e252fdd8b767a3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667DM7BWOY%2F20260529%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260529T112828Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDT6RRCD23hs13mvcyED4bXa%2BkI5L2LvMSK6QC4WRdYQQIhAIqNyHYjfxrbsq6T%2Bru4hVYXzopah%2BVJ%2BH2xyWvmpNG9KogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx3oLFW0lOUzJJJ9hkq3APzFGEHby43OTnOEdpjKtSDPrVynrBsgunJ7dsa3B5wMmOmAE1lvz4g%2Bah4SA5Inz1bK3ihzwRe1eBt6T4kYe71zabvGaT47OMb%2BwqIJPbFCc%2FKaghz23bgqQxm9IfKJ9RDu9WTE1k%2Bpm9eXBFpnzUS4b4euGTGiEPVzomm8Yp8ZmK62V0LZ1kvlLVlhkdWAJErXTT6wLx32TM8Q%2BHdbMmcCoUxMPhQXR4GdVJLebvzikDSRKORZHEaTi6SHzOoLkwDHLcXrhltcpq4R7IXCQ4lVllcae%2BpUA9Vj6yugjjE85Aj%2BpTSrhZv6yQirRJNA8kWpM8EUSESmJR92xmWre6Lo1UDLq31MLr%2Fu2rI7OXH9w7ReOb3c6Pj%2B9l9TUbpdtrlxg6UidLJzzGuUWnpWOR0kHJRA4tZ%2FeuPleDQl0Lb1Yj33%2B11pHjxcFtW%2B%2Fd%2BFTeytVhKUT81%2BcElLj61NPOiA97WZp81WThALGiMpjSAM2Xgla2R5RPcl4BVyGlH7pWiOrEwcb2Jw7C8fsD4hWKgZNU7YQrIGosUM1udaaxxoYLuwyc5UCN1Quv8yEbSCLu3K89wVA0BqsPpQJQSWBXTsWLOcRjhoTpT5hpTNE%2FhQkd5drpdlhcU9o%2BsyjCq3eXQBjqkAVJaEbcaMnMWDCQ1fhul%2Bz6wkOQD40u%2Bch%2FksdrKDIik10sxPpzJ8MN68aONABmDrkZyqY4j%2Brc4cf1XrZteX0lumdZqVyCCNrh7c5r5J3nmLc9WbzUA1gsOt21Zz%2FZ%2F%2FlJYNrnFx0C7TYZN0rJE09CYbaZHoAWLIVz%2BRHW39MDOItdNC6lmF6y%2FC%2BQvfRcEYB7fACviTsBFMF8bP0BNkZx4FHRo&X-Amz-Signature=2f28f02d13bee2cc0109d15c8af84cde7d486c9fb1a7b9f00091f18699f017dd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
