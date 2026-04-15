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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JLD7DV4%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAvxsaQT9MHfLumFh53KQHuIn2vQNz9QNPaR8Dr1LqJZAiAZ2s50dy%2FwEMfBdCBD2UUMc%2B4TjcE6Hy%2FphVblMVTZoSqIBAii%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuxOXm%2BgLYI2Vrk%2BmKtwDQmhoZTlnOrmHxDl2kr%2B%2FqoLApAiopYekLmHDXil5tR9G0%2BkGL98c3OeeH8re0JxqmwqUEsJ3NHyAofQdU6lk2PohZ1CCmM0f2mj%2F%2Fc5EILQHJJKoP8jlf9JyLO4Cb%2FRLGaLU25HUFvqCtqAKQ%2BXgQvlLk4SUpAMdC3vaBuOz9hrGonlYbZJ61Q%2BFnB7%2BMu1zvn%2BATF6%2Ba0VZIWzaKJocoMVx2a3x98sA4heUdFV0YzPdthbCg5VIzs0ofFzg9cDm9%2B27%2Bh5XIASGadYMTDjedbQFGji5FSY%2BaAadlTU%2FH5rJ8%2FNwRHqzRqB%2B8Op6FquiGGX8s1LQhO8tIkouqwSdUO0b3ju9RN2G8dJ3sRaOBR1ePBpFSCImt%2Fc0ApwDQuffi6X7toshjr304Dkn3gFmuGdrtmakH5T%2B6FRkhROBYdrbW0mBEa%2BBEDi0z8tDc1W6pO1EOKawROxxVWGfnCunsj6tnmPewtreOdy%2FsE9fohVFliEx8eaX2r6G4Yp0WGD5XbxeYRuhTA22ECHIK87o33%2BLcKdxQQAmsJQF5hOIvgZjQqOpCtKLtWhn3Q9z54%2FFAxqZuh62jOh06oxIPbVGpsjkZwzgsDGafU7v1yuorQghIVWGCJw1TLVBBVMw3av9zgY6pgHvNGgc%2B6rg85y1ZnrmA%2FWKiQtPXhgO1EonRkKs9JQtRRBhUx11A%2B17xGjEg6X067uWY06Vx4AQHhURqe2PpI2QON4RNXBSm2fLuYWv%2Biy%2FF%2FXWxuD3PVEv42owXIZA8GrqvFUA4aBqLX3bGXrHTM%2FIJ7cJMhoxIGxFvLfIeTV%2FA0G6LHxgdkWfwlVvPh%2FNuR5vmgfqPOLtZAAZU25G%2F4NSHlfsO875&X-Amz-Signature=132ecc7d58b7a7af6206e16e66b2ee7985bffb40800f1adb69fec231f55605c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JLD7DV4%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAvxsaQT9MHfLumFh53KQHuIn2vQNz9QNPaR8Dr1LqJZAiAZ2s50dy%2FwEMfBdCBD2UUMc%2B4TjcE6Hy%2FphVblMVTZoSqIBAii%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuxOXm%2BgLYI2Vrk%2BmKtwDQmhoZTlnOrmHxDl2kr%2B%2FqoLApAiopYekLmHDXil5tR9G0%2BkGL98c3OeeH8re0JxqmwqUEsJ3NHyAofQdU6lk2PohZ1CCmM0f2mj%2F%2Fc5EILQHJJKoP8jlf9JyLO4Cb%2FRLGaLU25HUFvqCtqAKQ%2BXgQvlLk4SUpAMdC3vaBuOz9hrGonlYbZJ61Q%2BFnB7%2BMu1zvn%2BATF6%2Ba0VZIWzaKJocoMVx2a3x98sA4heUdFV0YzPdthbCg5VIzs0ofFzg9cDm9%2B27%2Bh5XIASGadYMTDjedbQFGji5FSY%2BaAadlTU%2FH5rJ8%2FNwRHqzRqB%2B8Op6FquiGGX8s1LQhO8tIkouqwSdUO0b3ju9RN2G8dJ3sRaOBR1ePBpFSCImt%2Fc0ApwDQuffi6X7toshjr304Dkn3gFmuGdrtmakH5T%2B6FRkhROBYdrbW0mBEa%2BBEDi0z8tDc1W6pO1EOKawROxxVWGfnCunsj6tnmPewtreOdy%2FsE9fohVFliEx8eaX2r6G4Yp0WGD5XbxeYRuhTA22ECHIK87o33%2BLcKdxQQAmsJQF5hOIvgZjQqOpCtKLtWhn3Q9z54%2FFAxqZuh62jOh06oxIPbVGpsjkZwzgsDGafU7v1yuorQghIVWGCJw1TLVBBVMw3av9zgY6pgHvNGgc%2B6rg85y1ZnrmA%2FWKiQtPXhgO1EonRkKs9JQtRRBhUx11A%2B17xGjEg6X067uWY06Vx4AQHhURqe2PpI2QON4RNXBSm2fLuYWv%2Biy%2FF%2FXWxuD3PVEv42owXIZA8GrqvFUA4aBqLX3bGXrHTM%2FIJ7cJMhoxIGxFvLfIeTV%2FA0G6LHxgdkWfwlVvPh%2FNuR5vmgfqPOLtZAAZU25G%2F4NSHlfsO875&X-Amz-Signature=621643c5b9014440d77069a1ef5f18061f0c793ddefeff948c8ea25ee5644657&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663JLD7DV4%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAvxsaQT9MHfLumFh53KQHuIn2vQNz9QNPaR8Dr1LqJZAiAZ2s50dy%2FwEMfBdCBD2UUMc%2B4TjcE6Hy%2FphVblMVTZoSqIBAii%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuxOXm%2BgLYI2Vrk%2BmKtwDQmhoZTlnOrmHxDl2kr%2B%2FqoLApAiopYekLmHDXil5tR9G0%2BkGL98c3OeeH8re0JxqmwqUEsJ3NHyAofQdU6lk2PohZ1CCmM0f2mj%2F%2Fc5EILQHJJKoP8jlf9JyLO4Cb%2FRLGaLU25HUFvqCtqAKQ%2BXgQvlLk4SUpAMdC3vaBuOz9hrGonlYbZJ61Q%2BFnB7%2BMu1zvn%2BATF6%2Ba0VZIWzaKJocoMVx2a3x98sA4heUdFV0YzPdthbCg5VIzs0ofFzg9cDm9%2B27%2Bh5XIASGadYMTDjedbQFGji5FSY%2BaAadlTU%2FH5rJ8%2FNwRHqzRqB%2B8Op6FquiGGX8s1LQhO8tIkouqwSdUO0b3ju9RN2G8dJ3sRaOBR1ePBpFSCImt%2Fc0ApwDQuffi6X7toshjr304Dkn3gFmuGdrtmakH5T%2B6FRkhROBYdrbW0mBEa%2BBEDi0z8tDc1W6pO1EOKawROxxVWGfnCunsj6tnmPewtreOdy%2FsE9fohVFliEx8eaX2r6G4Yp0WGD5XbxeYRuhTA22ECHIK87o33%2BLcKdxQQAmsJQF5hOIvgZjQqOpCtKLtWhn3Q9z54%2FFAxqZuh62jOh06oxIPbVGpsjkZwzgsDGafU7v1yuorQghIVWGCJw1TLVBBVMw3av9zgY6pgHvNGgc%2B6rg85y1ZnrmA%2FWKiQtPXhgO1EonRkKs9JQtRRBhUx11A%2B17xGjEg6X067uWY06Vx4AQHhURqe2PpI2QON4RNXBSm2fLuYWv%2Biy%2FF%2FXWxuD3PVEv42owXIZA8GrqvFUA4aBqLX3bGXrHTM%2FIJ7cJMhoxIGxFvLfIeTV%2FA0G6LHxgdkWfwlVvPh%2FNuR5vmgfqPOLtZAAZU25G%2F4NSHlfsO875&X-Amz-Signature=efa6eb09382a9e6ed18d50cfc90ee24b503e887bd524678fcb373f1dff505601&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWOWLB5U%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFpiWzVZpBkZc4riVSgv%2FOfXfxwV8YpMNI5pouutIVBLAiEA28xxdiY%2F98DHX30pWSVZddYsIZYV%2F30v2T%2BxqwmuQLcqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIGOWiibnMoT1e16%2FircA2%2FOT6oO2LTnqgr4pSd9I1Mnjd3UabctLl6jMlxgHO6nmpXdKItmScuvLLlSJnr0kc0xbIAuHbbAPvOIlnJ8GbpiKNRHxsduLroj9iImmZFf5j4PzP0VGh2mWEqsk2DKQtSI5QntSx1I319aDnT%2BOv83jmPegAnW8Hkp488gKScsXh9FW3Fqrhsq6X6lT1lG6wYZdEXO0ejKIKVhoSnIc8EUvztszyi7sV%2BA469mCATBSCDsWjwphYKcRQnnzQxFs53MNyj2UTCX81rJ8u4VhKsTUgi6jRRCksYMG3Et%2FNSIb3hDJ6aOFK6PwrPsKUmZnGc0zkYSODAcdhTD8tUGCugBZY890gv2uYnW0db2ke3g4dkhlKT9UIalAhGk4XnJJu0Rpl0COp7WHoOIi2dNXEAz1aRwn42FS9PeJVUnM5RzU5HY11ITfjnWDsuzeGpihVZRxg%2BUErJjrIHPCb5AE6rEWbe1UzijK0nlR2BAlLNs0CzDr%2BJ0%2FaxhzKECATXmDQjIdsa7%2Bq0CZMcJRscZOLWMoESkv%2FpDyxjWRrbIjopDzu4ALxfQ2ymkghQfaZWFVCFTSs60AS6P8SNGr%2FJWiwudyLg4RnxWC8yK1qhZuIp9R8ArIzo8%2FArIKqIXMMWQ%2Fc4GOqUB%2BCdAsP9AvrJYkbF%2F4alM2AfKIuicMuQzlwZLtLB1E7SORAGajcCBF7kq906SqD%2BoyhCISAjDJPTPMajgavwp54TN5Y2EdtYvrjokGcR90KtrbUL3i7IuL4TNthOmsFFdhsyZwPqaB3FzfnA51F5T4puhV9GyCF3Ft6FaHESnJUtvRdPnMD0PiG96itpo02B15N4Lpbl2kvyVS9Hlw703KIaUfQOX&X-Amz-Signature=d3e5f67991195b568ddcd4832205e00037e733f69647513e3988a9296123c28b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWOWLB5U%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFpiWzVZpBkZc4riVSgv%2FOfXfxwV8YpMNI5pouutIVBLAiEA28xxdiY%2F98DHX30pWSVZddYsIZYV%2F30v2T%2BxqwmuQLcqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIGOWiibnMoT1e16%2FircA2%2FOT6oO2LTnqgr4pSd9I1Mnjd3UabctLl6jMlxgHO6nmpXdKItmScuvLLlSJnr0kc0xbIAuHbbAPvOIlnJ8GbpiKNRHxsduLroj9iImmZFf5j4PzP0VGh2mWEqsk2DKQtSI5QntSx1I319aDnT%2BOv83jmPegAnW8Hkp488gKScsXh9FW3Fqrhsq6X6lT1lG6wYZdEXO0ejKIKVhoSnIc8EUvztszyi7sV%2BA469mCATBSCDsWjwphYKcRQnnzQxFs53MNyj2UTCX81rJ8u4VhKsTUgi6jRRCksYMG3Et%2FNSIb3hDJ6aOFK6PwrPsKUmZnGc0zkYSODAcdhTD8tUGCugBZY890gv2uYnW0db2ke3g4dkhlKT9UIalAhGk4XnJJu0Rpl0COp7WHoOIi2dNXEAz1aRwn42FS9PeJVUnM5RzU5HY11ITfjnWDsuzeGpihVZRxg%2BUErJjrIHPCb5AE6rEWbe1UzijK0nlR2BAlLNs0CzDr%2BJ0%2FaxhzKECATXmDQjIdsa7%2Bq0CZMcJRscZOLWMoESkv%2FpDyxjWRrbIjopDzu4ALxfQ2ymkghQfaZWFVCFTSs60AS6P8SNGr%2FJWiwudyLg4RnxWC8yK1qhZuIp9R8ArIzo8%2FArIKqIXMMWQ%2Fc4GOqUB%2BCdAsP9AvrJYkbF%2F4alM2AfKIuicMuQzlwZLtLB1E7SORAGajcCBF7kq906SqD%2BoyhCISAjDJPTPMajgavwp54TN5Y2EdtYvrjokGcR90KtrbUL3i7IuL4TNthOmsFFdhsyZwPqaB3FzfnA51F5T4puhV9GyCF3Ft6FaHESnJUtvRdPnMD0PiG96itpo02B15N4Lpbl2kvyVS9Hlw703KIaUfQOX&X-Amz-Signature=9b6577ca050438d4b9dbe4349282450d7c53332585a1b8f03a22957e15e50056&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWOWLB5U%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFpiWzVZpBkZc4riVSgv%2FOfXfxwV8YpMNI5pouutIVBLAiEA28xxdiY%2F98DHX30pWSVZddYsIZYV%2F30v2T%2BxqwmuQLcqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIGOWiibnMoT1e16%2FircA2%2FOT6oO2LTnqgr4pSd9I1Mnjd3UabctLl6jMlxgHO6nmpXdKItmScuvLLlSJnr0kc0xbIAuHbbAPvOIlnJ8GbpiKNRHxsduLroj9iImmZFf5j4PzP0VGh2mWEqsk2DKQtSI5QntSx1I319aDnT%2BOv83jmPegAnW8Hkp488gKScsXh9FW3Fqrhsq6X6lT1lG6wYZdEXO0ejKIKVhoSnIc8EUvztszyi7sV%2BA469mCATBSCDsWjwphYKcRQnnzQxFs53MNyj2UTCX81rJ8u4VhKsTUgi6jRRCksYMG3Et%2FNSIb3hDJ6aOFK6PwrPsKUmZnGc0zkYSODAcdhTD8tUGCugBZY890gv2uYnW0db2ke3g4dkhlKT9UIalAhGk4XnJJu0Rpl0COp7WHoOIi2dNXEAz1aRwn42FS9PeJVUnM5RzU5HY11ITfjnWDsuzeGpihVZRxg%2BUErJjrIHPCb5AE6rEWbe1UzijK0nlR2BAlLNs0CzDr%2BJ0%2FaxhzKECATXmDQjIdsa7%2Bq0CZMcJRscZOLWMoESkv%2FpDyxjWRrbIjopDzu4ALxfQ2ymkghQfaZWFVCFTSs60AS6P8SNGr%2FJWiwudyLg4RnxWC8yK1qhZuIp9R8ArIzo8%2FArIKqIXMMWQ%2Fc4GOqUB%2BCdAsP9AvrJYkbF%2F4alM2AfKIuicMuQzlwZLtLB1E7SORAGajcCBF7kq906SqD%2BoyhCISAjDJPTPMajgavwp54TN5Y2EdtYvrjokGcR90KtrbUL3i7IuL4TNthOmsFFdhsyZwPqaB3FzfnA51F5T4puhV9GyCF3Ft6FaHESnJUtvRdPnMD0PiG96itpo02B15N4Lpbl2kvyVS9Hlw703KIaUfQOX&X-Amz-Signature=fff8da19c0733b4148669cb25acb235d47b0838fe55300e1ed7b64989747cc97&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWOWLB5U%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091841Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFpiWzVZpBkZc4riVSgv%2FOfXfxwV8YpMNI5pouutIVBLAiEA28xxdiY%2F98DHX30pWSVZddYsIZYV%2F30v2T%2BxqwmuQLcqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIGOWiibnMoT1e16%2FircA2%2FOT6oO2LTnqgr4pSd9I1Mnjd3UabctLl6jMlxgHO6nmpXdKItmScuvLLlSJnr0kc0xbIAuHbbAPvOIlnJ8GbpiKNRHxsduLroj9iImmZFf5j4PzP0VGh2mWEqsk2DKQtSI5QntSx1I319aDnT%2BOv83jmPegAnW8Hkp488gKScsXh9FW3Fqrhsq6X6lT1lG6wYZdEXO0ejKIKVhoSnIc8EUvztszyi7sV%2BA469mCATBSCDsWjwphYKcRQnnzQxFs53MNyj2UTCX81rJ8u4VhKsTUgi6jRRCksYMG3Et%2FNSIb3hDJ6aOFK6PwrPsKUmZnGc0zkYSODAcdhTD8tUGCugBZY890gv2uYnW0db2ke3g4dkhlKT9UIalAhGk4XnJJu0Rpl0COp7WHoOIi2dNXEAz1aRwn42FS9PeJVUnM5RzU5HY11ITfjnWDsuzeGpihVZRxg%2BUErJjrIHPCb5AE6rEWbe1UzijK0nlR2BAlLNs0CzDr%2BJ0%2FaxhzKECATXmDQjIdsa7%2Bq0CZMcJRscZOLWMoESkv%2FpDyxjWRrbIjopDzu4ALxfQ2ymkghQfaZWFVCFTSs60AS6P8SNGr%2FJWiwudyLg4RnxWC8yK1qhZuIp9R8ArIzo8%2FArIKqIXMMWQ%2Fc4GOqUB%2BCdAsP9AvrJYkbF%2F4alM2AfKIuicMuQzlwZLtLB1E7SORAGajcCBF7kq906SqD%2BoyhCISAjDJPTPMajgavwp54TN5Y2EdtYvrjokGcR90KtrbUL3i7IuL4TNthOmsFFdhsyZwPqaB3FzfnA51F5T4puhV9GyCF3Ft6FaHESnJUtvRdPnMD0PiG96itpo02B15N4Lpbl2kvyVS9Hlw703KIaUfQOX&X-Amz-Signature=4516b0d4f7c3dab7d195b10c2353fbf42d78db6c205a053c543a55936b29f32c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667T7IEKRN%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091843Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH5Dh9j6NR4vjuob%2BtfTgCpM%2BAISD0I%2FkIwSgEMMUtVrAiBbtGKCpKU%2FMPSucCLk3bz%2Fg2NyJJiMHky%2B2lAyki1qByqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM7mHOJ98uDyT69dvzKtwDxPZZ21s5nRo47SvEuXxZ%2BJpins1ca63V4YlCZPzSOpt5sMPs8QeY2GLZByEX0aD%2B5YBz%2FvT7dzXct1rcRCCsBGj%2F0UEIcJ2UCsaD49JjfTbbD9oV8V8SsuMqTzzr8V4YUXG6FHxvEYJPxPNn9%2BXq9kriueTkIW55jUzUZ%2BEGJNa0IG3GeRNxootFLdEud2wrErOW0Aej4X1ZeIQMdQzOSSmZuxG1MmvXR0vLgYy1nSI2f0GT6O2D8Tw%2F5zAN7UUBzsSg%2BFSPYMxpLn4agVG4PLDQ7iW3ttI0DTtlFgjMrJJjdJHbQTL5CNlcmTWv0jdhFq5ruCdvyHPFBMocqvqlYRo%2FfYlXlmrxkg6R2DpVl6pgyk2h2FCOcH%2FsRQUfibUXt5F5CMcH92SnDReM2x7m5uVUQ7lFeVW6AX0fpgHeXK%2BCwXTUs%2F4vpmsJIvhWDftkPY004QvaM33qvk5k3BhvcaD4vXg418IW4iUnwNsjV%2BWfmZZAtaOnDW8bSo1w3qIcU66qED2LJfIuOpLOsMQoUvSYXHBhEcuXPRVs58Qe0UlJrXIoqsXVmphSWQ8LZE9oWjDvjzNfu0tABIKtw8lYPoG6wrSpn9eJTCXWPrXTOsun0nqj7NvrqgAmNfgw%2BY%2F9zgY6pgHjDZ5YuUuKLOPxFqq4UiIgOKqOgtanYELatTKgNac20CEzoFPEAo12RfZKDg47P7BETvHsIK4Hl64453lUKBLsn1aUU12%2F%2BO5gmqF5FBsDEnBueZtBCSJKTAYUGDXOLo6roz3U%2F%2FSGj0J%2Bs%2Fi9RHFfuBjqMqOv8f6owPkcgPt07Hs2hMcQaHX%2BsT76B%2BbLQ0gccxVOQKKV0LhzBMW9RRl7Yq3329FT&X-Amz-Signature=ff6f14cd1491c9e1e1cd1b00183094bc8df59aeb9950c7747bd90b0c075aeb33&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ZUSLVKD%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC4RC5ZAwXJkbMeAiWTDO0zJFMoYBYo0sR%2BojDzZPPiqwIgIAQr7mjlMyC4i6QgxZy4G0Wj50uw5z2wBVQo7bVdEL0qiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAKMa%2BaL0UuEPkB89CrcA2vZ6uf3lp4lqqQR4cmfj28GUaB%2F3LMa0KrdyTCqE7NN3qOwoWhJPFm%2BuwfNQ9TDr%2Fqp6zhxZyR6nO6u43m%2FMkHVT2ejoN3UCeO0%2FqoqS8nOvrloHC4J2lq4W2i9BxsY4oLPZ94%2FLotJ857eZcBWAlA21kJfsnbC8kYOsbz5lLVQuH62mZujo0a9LNxnmiCRHAMHBnWm0am8KoZv5JbMCcfb8J4csPfuI5luHIUTxRH772jcRRWVWm8iI028kNRVTUVwXa44qH5XRiL1UrJhwaiqsjJP4ZD6JhEQBC1wUztW3Fl9%2BAHLag6B8baSWOxOOJ1Bd2bDwxjiMwmPaLTzUOQpeisOCJa%2FpoM1nTrEYHtucehcxgbGSXBC8LpU6FHoNN3IJjgss7WWo4hV8XC9Q68gS%2FB0eMw8WebLR5ca96w%2B6P4xx5NdAUzZ9kswlUVU5C4koglOlyBp9CoadYtM6pxymfXGN%2BTO9cQQ9HSLQVkIvpnUbk0zPtgc%2Bkzgqh%2Buff4rlVDH2Fk7HCl36ii5AhEwo1bjlzPPssHOmmMAk%2FJR1jHdiALspQDuS7kh5TEmlyrJk9XxZIPtNCFHylOH4NtUpXXMNQpNyoU%2BJws%2BVrEt6kIXvGbwkgq9CuKqMPOR%2Fc4GOqUBv9bZa468SasUYp4BRhq51nnIDEr3cByRgzHesBJdYbieNIDaOfS7krAjn6xsqDMVOht%2FHrAOm1q4gmOvD8Jn3m2UbjfrKGC5%2Fc4PlTOi7DyFCeolVth3SQGGpC5mU%2FDlk20hFF9IH4PrwdB61tt%2FnlkNbquBvli8R9YZsXYnvZbb1%2ByqHpSsC%2BlWtrmiEhGA2BdrxHvA2ID2PWDd%2BVEWw4UTCZk9&X-Amz-Signature=4b0126c0af6c73a9ddcb07a3ebbd0b90a354d10076dc4aa6bf634c9f2796a0f3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ZUSLVKD%2F20260415%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260415T091844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC4RC5ZAwXJkbMeAiWTDO0zJFMoYBYo0sR%2BojDzZPPiqwIgIAQr7mjlMyC4i6QgxZy4G0Wj50uw5z2wBVQo7bVdEL0qiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAKMa%2BaL0UuEPkB89CrcA2vZ6uf3lp4lqqQR4cmfj28GUaB%2F3LMa0KrdyTCqE7NN3qOwoWhJPFm%2BuwfNQ9TDr%2Fqp6zhxZyR6nO6u43m%2FMkHVT2ejoN3UCeO0%2FqoqS8nOvrloHC4J2lq4W2i9BxsY4oLPZ94%2FLotJ857eZcBWAlA21kJfsnbC8kYOsbz5lLVQuH62mZujo0a9LNxnmiCRHAMHBnWm0am8KoZv5JbMCcfb8J4csPfuI5luHIUTxRH772jcRRWVWm8iI028kNRVTUVwXa44qH5XRiL1UrJhwaiqsjJP4ZD6JhEQBC1wUztW3Fl9%2BAHLag6B8baSWOxOOJ1Bd2bDwxjiMwmPaLTzUOQpeisOCJa%2FpoM1nTrEYHtucehcxgbGSXBC8LpU6FHoNN3IJjgss7WWo4hV8XC9Q68gS%2FB0eMw8WebLR5ca96w%2B6P4xx5NdAUzZ9kswlUVU5C4koglOlyBp9CoadYtM6pxymfXGN%2BTO9cQQ9HSLQVkIvpnUbk0zPtgc%2Bkzgqh%2Buff4rlVDH2Fk7HCl36ii5AhEwo1bjlzPPssHOmmMAk%2FJR1jHdiALspQDuS7kh5TEmlyrJk9XxZIPtNCFHylOH4NtUpXXMNQpNyoU%2BJws%2BVrEt6kIXvGbwkgq9CuKqMPOR%2Fc4GOqUBv9bZa468SasUYp4BRhq51nnIDEr3cByRgzHesBJdYbieNIDaOfS7krAjn6xsqDMVOht%2FHrAOm1q4gmOvD8Jn3m2UbjfrKGC5%2Fc4PlTOi7DyFCeolVth3SQGGpC5mU%2FDlk20hFF9IH4PrwdB61tt%2FnlkNbquBvli8R9YZsXYnvZbb1%2ByqHpSsC%2BlWtrmiEhGA2BdrxHvA2ID2PWDd%2BVEWw4UTCZk9&X-Amz-Signature=8f2d49eaa8656786c9a8b84697d3395a44128983179fb20e247be61421299ff5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
