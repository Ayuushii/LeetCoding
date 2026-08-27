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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6NSG47D%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIE%2BGa1aUUiIfAf%2Bpm%2FTaAFotY1P9KjCH1GpnixgMvSAJAiEA%2FI3FvVaZDHrnna63P9gu7e4fxUmN6etJswSLxSaU%2BXYq%2FwMIOhAAGgw2Mzc0MjMxODM4MDUiDI8A%2FxkAosOqYZhI4CrcA1dt2MIKAU9yzzADsljIMqcnAzwRs0N6Ymu2e%2FMxIyKE0oZQQqnsI%2BKStUWUEehAGNrIzpQ%2BmuVM4CRfLGfPEWibrbUZK4TQl6D%2B%2FJtL9mOWZ23aPJBRsIJ2vUjMMAMCnOgFzCZNhWGnk%2FKqDLbO45OWT9%2Fzx%2BwYXF%2FmIKKygBMpdgRBYc%2BMrcj8BWqHBfUgwXdagbEWuCb8kQNgJTsNna78Jb6f10rC0U0cc9RFZQCKC9IHzQiyJe2IkL2F%2FKcsd0Ni8mkBocIlDjHpAosPk5htfvK2mBaO6%2F%2Bep9xShhekpHHgOIs9hM6maEMZLkNr1W%2BuamWhuj9Y9sOKvcWEWoRfRhCang6f8N%2FnDIk%2F2XqeyOV8VasLJE41QYkdXxNSn0r2%2F0zDj6Mubxq1DU4dtscoEUoHz%2BNAEh64UTIljKWackMSdpcckjTX8RnsdRZRRy8KJQovROq0kQv0n2VlekwR7oFCUU5%2F9YLG9%2BkeQZXaGIv3UcBTKrOiQ%2Fkc8KyYs1%2B5yU%2F0gXJrYQj9vQ3nqnNPZFti8qp0uUvrzzy6QJ1iTrsy%2F%2FNKqWQDuuP2Vvnerj15HM7GSnMQkB%2BGOsFq0Rp849HLOGz%2B5t4xLLUVbYJr1glwfSE8JwAv71sMMPPNwdQGOqUBXU4ISVKMkcIknoJDweP%2F%2FzO4%2FFZuAfYAPe5UyW%2BbROpbv0k2D5OYFv9rzeA9cCWuu9KBBtzjmgmbv6IHDxOqy7ZrSf2%2FfCamheDOU1MdVIAYXIthpouThLQff3x4KWvhR4iHsbc%2BJYkXbbOvouK2aI45gtbc2JRDY1i5NUfb4YcbfYee2GwFdCKGmf1Bfy859VKSKkxt3WLzLFmd5dprXr1yJJ%2B7&X-Amz-Signature=161a857af498113fbd78cd977a97b3de2d7d0f478feecf2c356171d26f3afb89&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6NSG47D%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIE%2BGa1aUUiIfAf%2Bpm%2FTaAFotY1P9KjCH1GpnixgMvSAJAiEA%2FI3FvVaZDHrnna63P9gu7e4fxUmN6etJswSLxSaU%2BXYq%2FwMIOhAAGgw2Mzc0MjMxODM4MDUiDI8A%2FxkAosOqYZhI4CrcA1dt2MIKAU9yzzADsljIMqcnAzwRs0N6Ymu2e%2FMxIyKE0oZQQqnsI%2BKStUWUEehAGNrIzpQ%2BmuVM4CRfLGfPEWibrbUZK4TQl6D%2B%2FJtL9mOWZ23aPJBRsIJ2vUjMMAMCnOgFzCZNhWGnk%2FKqDLbO45OWT9%2Fzx%2BwYXF%2FmIKKygBMpdgRBYc%2BMrcj8BWqHBfUgwXdagbEWuCb8kQNgJTsNna78Jb6f10rC0U0cc9RFZQCKC9IHzQiyJe2IkL2F%2FKcsd0Ni8mkBocIlDjHpAosPk5htfvK2mBaO6%2F%2Bep9xShhekpHHgOIs9hM6maEMZLkNr1W%2BuamWhuj9Y9sOKvcWEWoRfRhCang6f8N%2FnDIk%2F2XqeyOV8VasLJE41QYkdXxNSn0r2%2F0zDj6Mubxq1DU4dtscoEUoHz%2BNAEh64UTIljKWackMSdpcckjTX8RnsdRZRRy8KJQovROq0kQv0n2VlekwR7oFCUU5%2F9YLG9%2BkeQZXaGIv3UcBTKrOiQ%2Fkc8KyYs1%2B5yU%2F0gXJrYQj9vQ3nqnNPZFti8qp0uUvrzzy6QJ1iTrsy%2F%2FNKqWQDuuP2Vvnerj15HM7GSnMQkB%2BGOsFq0Rp849HLOGz%2B5t4xLLUVbYJr1glwfSE8JwAv71sMMPPNwdQGOqUBXU4ISVKMkcIknoJDweP%2F%2FzO4%2FFZuAfYAPe5UyW%2BbROpbv0k2D5OYFv9rzeA9cCWuu9KBBtzjmgmbv6IHDxOqy7ZrSf2%2FfCamheDOU1MdVIAYXIthpouThLQff3x4KWvhR4iHsbc%2BJYkXbbOvouK2aI45gtbc2JRDY1i5NUfb4YcbfYee2GwFdCKGmf1Bfy859VKSKkxt3WLzLFmd5dprXr1yJJ%2B7&X-Amz-Signature=9a7e6a878f0f3b6c007cee57d812a108e684757d789b77baa7199f9b555aee0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6NSG47D%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIE%2BGa1aUUiIfAf%2Bpm%2FTaAFotY1P9KjCH1GpnixgMvSAJAiEA%2FI3FvVaZDHrnna63P9gu7e4fxUmN6etJswSLxSaU%2BXYq%2FwMIOhAAGgw2Mzc0MjMxODM4MDUiDI8A%2FxkAosOqYZhI4CrcA1dt2MIKAU9yzzADsljIMqcnAzwRs0N6Ymu2e%2FMxIyKE0oZQQqnsI%2BKStUWUEehAGNrIzpQ%2BmuVM4CRfLGfPEWibrbUZK4TQl6D%2B%2FJtL9mOWZ23aPJBRsIJ2vUjMMAMCnOgFzCZNhWGnk%2FKqDLbO45OWT9%2Fzx%2BwYXF%2FmIKKygBMpdgRBYc%2BMrcj8BWqHBfUgwXdagbEWuCb8kQNgJTsNna78Jb6f10rC0U0cc9RFZQCKC9IHzQiyJe2IkL2F%2FKcsd0Ni8mkBocIlDjHpAosPk5htfvK2mBaO6%2F%2Bep9xShhekpHHgOIs9hM6maEMZLkNr1W%2BuamWhuj9Y9sOKvcWEWoRfRhCang6f8N%2FnDIk%2F2XqeyOV8VasLJE41QYkdXxNSn0r2%2F0zDj6Mubxq1DU4dtscoEUoHz%2BNAEh64UTIljKWackMSdpcckjTX8RnsdRZRRy8KJQovROq0kQv0n2VlekwR7oFCUU5%2F9YLG9%2BkeQZXaGIv3UcBTKrOiQ%2Fkc8KyYs1%2B5yU%2F0gXJrYQj9vQ3nqnNPZFti8qp0uUvrzzy6QJ1iTrsy%2F%2FNKqWQDuuP2Vvnerj15HM7GSnMQkB%2BGOsFq0Rp849HLOGz%2B5t4xLLUVbYJr1glwfSE8JwAv71sMMPPNwdQGOqUBXU4ISVKMkcIknoJDweP%2F%2FzO4%2FFZuAfYAPe5UyW%2BbROpbv0k2D5OYFv9rzeA9cCWuu9KBBtzjmgmbv6IHDxOqy7ZrSf2%2FfCamheDOU1MdVIAYXIthpouThLQff3x4KWvhR4iHsbc%2BJYkXbbOvouK2aI45gtbc2JRDY1i5NUfb4YcbfYee2GwFdCKGmf1Bfy859VKSKkxt3WLzLFmd5dprXr1yJJ%2B7&X-Amz-Signature=f6e3409e7a6fafe5b3863132d5818ccfb52445a293e1fedc4341626947ff7ff4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZBYTSSZ%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHIaCXVzLXdlc3QtMiJGMEQCIHuuvRnPJp9AagZbdur8PBDuckU3WWyddLNXKWKTIPwCAiAHIjsuv64oFmPCnnfu%2FKlOeJpc3FJJDYCvr26RBsAdmSr%2FAwg7EAAaDDYzNzQyMzE4MzgwNSIMYmaV53SjVvK0BHeVKtwD2uVOgkgyOwZ13B2S9k3UYPs4C%2FpcHLSioyCBI7sJ%2Fj%2FRqGsqLWBifo67x4osP6DSculOuNEz80GKjy2%2FNariT2mdX1ZgpRvFXbV%2BsY2k0R3EZ1rl7PCrg%2B%2B0j7vH6TlhkYO6Mog%2FLhJIrPkSdOIBVW0nF99NwzMhi8XHPaLQmNx3ENHuofow649ic4rao03AvvGSOmfjmvPqd1N%2FtiqnSqgiaYVQ5I5KfgsqKH7cvuGublNxPOOzlwBh2Jy%2BizYgKGqizbi38VY%2F3rBofq3WD3LDIi5yoOudUZJcUz%2B%2FoOFpfg%2FUG8a6d5ssYCAa%2BugeEZJXTiVP9kQqBOzyUtR4YT6CcwoSYBTq1%2BEfXRHq21buBcd%2BTQ1jv8n35Wz7BySkSfQcHB%2BHBf7SFXb57jgqeXCmRu1FZ%2B%2B5v2qW3ZH8Ng4E8LZIQGdB1SgUD2O%2Ff9MpbMr%2BkVx6ZmIUM4MTmJMDq0FynNbkbDqukXLBaJweqwWMsejPob7%2FxoU1Xolra%2BFq4XiO3JjXYetVqJXsGHXPR9kNsLV%2Foybj6w9cPWLUFMcVG5I8%2FbxaYZ4NRv%2FxMAbag13KN2vgYeTwpwDC4Q6tnX14FCcH36OIACWQ%2F3LcJPk%2FcLCVwv%2Bf428QxcswsvvB1AY6pgFoGNwBmv95Bg%2FtZtVUotn3ILeQ1CUwGmuMJt28AH0cXpbLTdu9HeF2hM%2FjtvZahA9D%2BFz6DghSBQHxTGeTSX%2FGsZc2xexEdwZMWj9na4DPz%2BnRtfmIp7ORi1xwPP%2B3Sfs6Nk6x%2BVg0fgZkC7kSe66TjjEGwnaf1KscbH6S%2Bng6hHpP6n0x6JDUBktJABiwBcdFuSpOLio%2Bx6HV0MPC1u7m%2BqMNf%2BeA&X-Amz-Signature=568dd4655325a7d6658e3191e3e1aeb80ca5cd419c02a61ef28e06697f242d24&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZBYTSSZ%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHIaCXVzLXdlc3QtMiJGMEQCIHuuvRnPJp9AagZbdur8PBDuckU3WWyddLNXKWKTIPwCAiAHIjsuv64oFmPCnnfu%2FKlOeJpc3FJJDYCvr26RBsAdmSr%2FAwg7EAAaDDYzNzQyMzE4MzgwNSIMYmaV53SjVvK0BHeVKtwD2uVOgkgyOwZ13B2S9k3UYPs4C%2FpcHLSioyCBI7sJ%2Fj%2FRqGsqLWBifo67x4osP6DSculOuNEz80GKjy2%2FNariT2mdX1ZgpRvFXbV%2BsY2k0R3EZ1rl7PCrg%2B%2B0j7vH6TlhkYO6Mog%2FLhJIrPkSdOIBVW0nF99NwzMhi8XHPaLQmNx3ENHuofow649ic4rao03AvvGSOmfjmvPqd1N%2FtiqnSqgiaYVQ5I5KfgsqKH7cvuGublNxPOOzlwBh2Jy%2BizYgKGqizbi38VY%2F3rBofq3WD3LDIi5yoOudUZJcUz%2B%2FoOFpfg%2FUG8a6d5ssYCAa%2BugeEZJXTiVP9kQqBOzyUtR4YT6CcwoSYBTq1%2BEfXRHq21buBcd%2BTQ1jv8n35Wz7BySkSfQcHB%2BHBf7SFXb57jgqeXCmRu1FZ%2B%2B5v2qW3ZH8Ng4E8LZIQGdB1SgUD2O%2Ff9MpbMr%2BkVx6ZmIUM4MTmJMDq0FynNbkbDqukXLBaJweqwWMsejPob7%2FxoU1Xolra%2BFq4XiO3JjXYetVqJXsGHXPR9kNsLV%2Foybj6w9cPWLUFMcVG5I8%2FbxaYZ4NRv%2FxMAbag13KN2vgYeTwpwDC4Q6tnX14FCcH36OIACWQ%2F3LcJPk%2FcLCVwv%2Bf428QxcswsvvB1AY6pgFoGNwBmv95Bg%2FtZtVUotn3ILeQ1CUwGmuMJt28AH0cXpbLTdu9HeF2hM%2FjtvZahA9D%2BFz6DghSBQHxTGeTSX%2FGsZc2xexEdwZMWj9na4DPz%2BnRtfmIp7ORi1xwPP%2B3Sfs6Nk6x%2BVg0fgZkC7kSe66TjjEGwnaf1KscbH6S%2Bng6hHpP6n0x6JDUBktJABiwBcdFuSpOLio%2Bx6HV0MPC1u7m%2BqMNf%2BeA&X-Amz-Signature=19dbae782ef3ba236c49608c6eb4ec5a5626f163d7dcca028bd5fd45d20c4092&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZBYTSSZ%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHIaCXVzLXdlc3QtMiJGMEQCIHuuvRnPJp9AagZbdur8PBDuckU3WWyddLNXKWKTIPwCAiAHIjsuv64oFmPCnnfu%2FKlOeJpc3FJJDYCvr26RBsAdmSr%2FAwg7EAAaDDYzNzQyMzE4MzgwNSIMYmaV53SjVvK0BHeVKtwD2uVOgkgyOwZ13B2S9k3UYPs4C%2FpcHLSioyCBI7sJ%2Fj%2FRqGsqLWBifo67x4osP6DSculOuNEz80GKjy2%2FNariT2mdX1ZgpRvFXbV%2BsY2k0R3EZ1rl7PCrg%2B%2B0j7vH6TlhkYO6Mog%2FLhJIrPkSdOIBVW0nF99NwzMhi8XHPaLQmNx3ENHuofow649ic4rao03AvvGSOmfjmvPqd1N%2FtiqnSqgiaYVQ5I5KfgsqKH7cvuGublNxPOOzlwBh2Jy%2BizYgKGqizbi38VY%2F3rBofq3WD3LDIi5yoOudUZJcUz%2B%2FoOFpfg%2FUG8a6d5ssYCAa%2BugeEZJXTiVP9kQqBOzyUtR4YT6CcwoSYBTq1%2BEfXRHq21buBcd%2BTQ1jv8n35Wz7BySkSfQcHB%2BHBf7SFXb57jgqeXCmRu1FZ%2B%2B5v2qW3ZH8Ng4E8LZIQGdB1SgUD2O%2Ff9MpbMr%2BkVx6ZmIUM4MTmJMDq0FynNbkbDqukXLBaJweqwWMsejPob7%2FxoU1Xolra%2BFq4XiO3JjXYetVqJXsGHXPR9kNsLV%2Foybj6w9cPWLUFMcVG5I8%2FbxaYZ4NRv%2FxMAbag13KN2vgYeTwpwDC4Q6tnX14FCcH36OIACWQ%2F3LcJPk%2FcLCVwv%2Bf428QxcswsvvB1AY6pgFoGNwBmv95Bg%2FtZtVUotn3ILeQ1CUwGmuMJt28AH0cXpbLTdu9HeF2hM%2FjtvZahA9D%2BFz6DghSBQHxTGeTSX%2FGsZc2xexEdwZMWj9na4DPz%2BnRtfmIp7ORi1xwPP%2B3Sfs6Nk6x%2BVg0fgZkC7kSe66TjjEGwnaf1KscbH6S%2Bng6hHpP6n0x6JDUBktJABiwBcdFuSpOLio%2Bx6HV0MPC1u7m%2BqMNf%2BeA&X-Amz-Signature=0377c5a419fa0dc25362fe9485acf36b8dde120e1bb30f60109284b63b5d85e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZBYTSSZ%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185117Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHIaCXVzLXdlc3QtMiJGMEQCIHuuvRnPJp9AagZbdur8PBDuckU3WWyddLNXKWKTIPwCAiAHIjsuv64oFmPCnnfu%2FKlOeJpc3FJJDYCvr26RBsAdmSr%2FAwg7EAAaDDYzNzQyMzE4MzgwNSIMYmaV53SjVvK0BHeVKtwD2uVOgkgyOwZ13B2S9k3UYPs4C%2FpcHLSioyCBI7sJ%2Fj%2FRqGsqLWBifo67x4osP6DSculOuNEz80GKjy2%2FNariT2mdX1ZgpRvFXbV%2BsY2k0R3EZ1rl7PCrg%2B%2B0j7vH6TlhkYO6Mog%2FLhJIrPkSdOIBVW0nF99NwzMhi8XHPaLQmNx3ENHuofow649ic4rao03AvvGSOmfjmvPqd1N%2FtiqnSqgiaYVQ5I5KfgsqKH7cvuGublNxPOOzlwBh2Jy%2BizYgKGqizbi38VY%2F3rBofq3WD3LDIi5yoOudUZJcUz%2B%2FoOFpfg%2FUG8a6d5ssYCAa%2BugeEZJXTiVP9kQqBOzyUtR4YT6CcwoSYBTq1%2BEfXRHq21buBcd%2BTQ1jv8n35Wz7BySkSfQcHB%2BHBf7SFXb57jgqeXCmRu1FZ%2B%2B5v2qW3ZH8Ng4E8LZIQGdB1SgUD2O%2Ff9MpbMr%2BkVx6ZmIUM4MTmJMDq0FynNbkbDqukXLBaJweqwWMsejPob7%2FxoU1Xolra%2BFq4XiO3JjXYetVqJXsGHXPR9kNsLV%2Foybj6w9cPWLUFMcVG5I8%2FbxaYZ4NRv%2FxMAbag13KN2vgYeTwpwDC4Q6tnX14FCcH36OIACWQ%2F3LcJPk%2FcLCVwv%2Bf428QxcswsvvB1AY6pgFoGNwBmv95Bg%2FtZtVUotn3ILeQ1CUwGmuMJt28AH0cXpbLTdu9HeF2hM%2FjtvZahA9D%2BFz6DghSBQHxTGeTSX%2FGsZc2xexEdwZMWj9na4DPz%2BnRtfmIp7ORi1xwPP%2B3Sfs6Nk6x%2BVg0fgZkC7kSe66TjjEGwnaf1KscbH6S%2Bng6hHpP6n0x6JDUBktJABiwBcdFuSpOLio%2Bx6HV0MPC1u7m%2BqMNf%2BeA&X-Amz-Signature=569cbc9bbbd3467ffb8fbe81605ec529779e2f5fa975b0c31b5e5da27b2b79d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662H6HVZTO%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJIMEYCIQCxbaMBFJbqGKiPMHYHwNzMaCcxvU%2BUILov8RIvdRJubwIhALm11ZzzyNvVZy89lsE%2Fbx3IlDWFKCwp9N4cEDIdpcFBKv8DCDoQABoMNjM3NDIzMTgzODA1IgxaxMqvNxrZOi0tRQ8q3AOEMCv4zZtyMgsTgJQD5RVbrgLRRH62O4MNKcHo%2BO6JbL0ciWH0DqJ32EDpw2Xb7cWGhmmwbMF9wJ7MNQi6kq6snu6ipAmdjW6b5NGRRzdNrli1RYFDO%2BW%2FZOl9ekQohE98dlcgEI9gLq38zjHUtF5ATyvxyPSuRSnScavSUXuFOJFisOVULsdf%2Fanz2pzMPqh3TCP3k3rKNc8orcF5vX%2FAlhYkJRgvb8MACZbxzN78nCaSKUI8xNUoV4ZWfiowJPw5qMztDlW5GwIedzilI1snujT8PkSa29p20qF2lgUo9oIdTFuSLyh2o4oLlPaiUN8zqZPublkDiaqmitwtsBHNfomK9ByPhlzicTFweJiP%2B10eqWhVxKhKMZB%2BulG1nqIkfr0Dz5JLwp21XKzsl1RSjYujJwzKVyoiEXFGN0QCN39Fe3b5Dw6a79Qu5eKIAtkXjZ6FuumhBljDYDko6YGCihZE3fvd8B0lJ1V9W64K6JAgSvAmFw8fwKSDmE9EK2jeAgzROyhTfL4hfY4%2B%2FT%2F3oDpAy3aIxxAtGOQqk28IXZdNm7gGrlJK5Bsx6%2Bq%2BzobeGz9rgg3yS%2FfiBpaA5BcDGMEexs4%2FanbZ2ZY1wapXfo3lRCXhoyS8X8CI9jCWzsHUBjqkAeJiAlEaB1G1DV2UMI6dCSRFEFm1AjYB7NaV9uwu6cb3xN1hPACHRRpMv3X0LkXz3yW7S10H5GOenwAMVsVp8hH9Zb9qj3jTWIeVH585iLVZRaMx24H29gLGy%2FiLFsla%2FYrL6oec1ovViY%2BGVCuwOfwDeQiCDkGGGUC6Z2lJfbhB1OKu5%2BBG5xNYGeijMY2ejT2BFTcoHoXXoK8JoAYGbFx4F7%2F4&X-Amz-Signature=c63446eaa7b225a068df61ea5e9e25b3798f9936a97c6e960ef79032152839ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662LIEGOMM%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJIMEYCIQCfeJQ7kffVbbCGRfC0O5n%2BNvrLF0VzFLBd8WemZBMvmwIhAKS2MsCUyqcYlelTeQfhJbq99W2HMF2znUXahJIIOJrdKv8DCDoQABoMNjM3NDIzMTgzODA1IgzTATudiVvk7RPXL%2BUq3ANyfIQnnl0QoREbetBqmZjRzmugQXshAfxxuaIM4%2FGb2kwOsSCHEyXo60jQwEKDfFzUtvtqHfFT6ltpo9xxgLOYkj5ag5P%2Fkf8YJCQF8F%2F9eqmDTyaI4BSm4oQbd6W3t%2FZ1MRZY%2FQ45x6VTfOx8Ks6E9vJxbvCY27CbhjlTN%2FKf6PXjxRqTbSc%2FXEnnsXlVtC%2Fkqs%2FiNrxmgsDPCf%2BAjOoKAWt47qbqHN%2B9vWX8DJydqUYiNF%2F%2FuIUuu8kxpVQUPGu8SAWgmFjtYKbgCUgY8KVh9QLg%2BRwvDYwv1RidwivDyHjY1aVoTceBvhpnLxUgFH%2BVL6OJBlCQotGODIlQ%2FnEJ%2FBNIk8kCi%2BdmBCWjQfnhuegxIUO1NWPTLn8zHHlNINecqQvc53btZtQpMMQHMum%2BOV%2BsHlvJgQ90Eqzpoes0PzX2FaTCOLWsfuI4LvGX4tR6kzLSSZBxEGV%2FO93QyL8pBZAvVpd%2BFPWExx6ISzyR86391ksB0S0BWPyiSmdKGgGNmLaswh%2BXdXPgimVQJqfXXSUm5hqF2W2j1RcFIJQ2dJb7fmOdKrdWAJ%2BrYmJZ%2BPeGVDLIPvNRLOTUL7D6Gxu%2FT2hf%2FWlWunmFrYl4MoLpqV1w8s0ard6os0l%2FjTDs0MHUBjqkAdveSYHD3ViHcaIyw63Ylntf0dMpPhyJVRDKARre%2FXVKH8x4CbA0KbowiQzZahIpcondDLZ56aS3M2O5P%2FLQkLzQlJcGgwVumccjWKtFoyx%2BJ09Jjz722tYzXJNi2jk3GpacGMWfXN6TYe2%2FWkaujwsr3qu8W%2F6a2n8XUj0hmcY74Cy0wdc6O92FIyl72pLd%2BwPXbWQDE09i0B2ML5I6O8mUJyGs&X-Amz-Signature=4b4794580f96b25fe70304c507f199a908ed2520f782609041ff63b5adb2fb5a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662LIEGOMM%2F20260827%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260827T185118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJIMEYCIQCfeJQ7kffVbbCGRfC0O5n%2BNvrLF0VzFLBd8WemZBMvmwIhAKS2MsCUyqcYlelTeQfhJbq99W2HMF2znUXahJIIOJrdKv8DCDoQABoMNjM3NDIzMTgzODA1IgzTATudiVvk7RPXL%2BUq3ANyfIQnnl0QoREbetBqmZjRzmugQXshAfxxuaIM4%2FGb2kwOsSCHEyXo60jQwEKDfFzUtvtqHfFT6ltpo9xxgLOYkj5ag5P%2Fkf8YJCQF8F%2F9eqmDTyaI4BSm4oQbd6W3t%2FZ1MRZY%2FQ45x6VTfOx8Ks6E9vJxbvCY27CbhjlTN%2FKf6PXjxRqTbSc%2FXEnnsXlVtC%2Fkqs%2FiNrxmgsDPCf%2BAjOoKAWt47qbqHN%2B9vWX8DJydqUYiNF%2F%2FuIUuu8kxpVQUPGu8SAWgmFjtYKbgCUgY8KVh9QLg%2BRwvDYwv1RidwivDyHjY1aVoTceBvhpnLxUgFH%2BVL6OJBlCQotGODIlQ%2FnEJ%2FBNIk8kCi%2BdmBCWjQfnhuegxIUO1NWPTLn8zHHlNINecqQvc53btZtQpMMQHMum%2BOV%2BsHlvJgQ90Eqzpoes0PzX2FaTCOLWsfuI4LvGX4tR6kzLSSZBxEGV%2FO93QyL8pBZAvVpd%2BFPWExx6ISzyR86391ksB0S0BWPyiSmdKGgGNmLaswh%2BXdXPgimVQJqfXXSUm5hqF2W2j1RcFIJQ2dJb7fmOdKrdWAJ%2BrYmJZ%2BPeGVDLIPvNRLOTUL7D6Gxu%2FT2hf%2FWlWunmFrYl4MoLpqV1w8s0ard6os0l%2FjTDs0MHUBjqkAdveSYHD3ViHcaIyw63Ylntf0dMpPhyJVRDKARre%2FXVKH8x4CbA0KbowiQzZahIpcondDLZ56aS3M2O5P%2FLQkLzQlJcGgwVumccjWKtFoyx%2BJ09Jjz722tYzXJNi2jk3GpacGMWfXN6TYe2%2FWkaujwsr3qu8W%2F6a2n8XUj0hmcY74Cy0wdc6O92FIyl72pLd%2BwPXbWQDE09i0B2ML5I6O8mUJyGs&X-Amz-Signature=ca2f45bcfa343027fd71204d23b93247a8820be722f81cb8af68c8d1ded073e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
