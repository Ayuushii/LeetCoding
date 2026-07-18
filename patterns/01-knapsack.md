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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676JBGURM%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIElfsrACCl%2B6wniaUDRVk0QbPY7ZDQ3bkW31GEIFtD67AiEA80kvVvtBNFKVJYzesOYrHe67l4ZQwD9HpvfzATO35w8q%2FwMIchAAGgw2Mzc0MjMxODM4MDUiDDBk%2FuXovqctfKRLoSrcA5P2%2FhgyA6t0xnv1gmTnfdf4CN6wiaH5xG5ukw0be35q61qdnNgbQzC9KJu04KpERGQRQpbKxstDh0EKj8FR3MICOG09ufNMVSFPPSI76yJHELs82hRb9LWSL5LL2IGqNQ4Ih0c%2FfHjNWDR2Qal4eJ0JrGruuu9Ppg%2FQLpYyt8GnXjoPQva3Zg2Jr4O3dJG6iko59eyA3en4T1hShRZBIFY26LIaBM0R4id1Iw58KfpRt2UK9z%2BZ5tQiMhuUIbD8upGJ605WYETJSzM5dLcqFGwoG2Tx80Je%2BsGn4AROY6BWWxJvpi2SExjsbUduU7ilzZtwZdsOkPR6QZbxqDxqRb9vJzDgFoFhFSPdsY%2B5OgJ2WF3AU0enAiSO8aV2mdGFzHOdUkD5BUlseXucdO4pjE101QA2n952GpptVzjpB1squyXMPeDKOWWoig%2Br4AnD3EAk9IsVJUnv2aE5utNXJIzcI41O5IXbplgnfD4pQ4aE6oDAuZ3vsYauXWvxzuDbKl2Tf5MrcjOBcO7YkMKRstISqEd8SGPOXKZ7hubnYsRaDSfQReWfIRSzbgz5IEsS6cDibE%2BnPhsYfNdIqO9ob3tMBh4P18ohGuw1KgLKyI9EmS76t7bV607UiQggMILz7NIGOqUBfksSvago3Z6AIP5Ev8yZHdRUqFmJwh1tRq6gp9k2OuUU%2B3PLo4hKrS2wKj4DtRU5LIwwJ%2FYeH1BdSMedrIQpvXrVd38%2B%2BiB9ImB8yZRin1Q3JNVwgn8xL9NgsDvP7NWItLW1uZyedjDoYSRMvCfcfk2MSN9EsbvOYDD0AU65EQGcvVsmMSb1scYNf42GtRz99FImKiFQJW%2FEst%2F5P1DKB4M%2Bvk5s&X-Amz-Signature=f160e5bb6c4105286b78f6e77336f737de60cbe8aa0f61febaf2c9ad759df327&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676JBGURM%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIElfsrACCl%2B6wniaUDRVk0QbPY7ZDQ3bkW31GEIFtD67AiEA80kvVvtBNFKVJYzesOYrHe67l4ZQwD9HpvfzATO35w8q%2FwMIchAAGgw2Mzc0MjMxODM4MDUiDDBk%2FuXovqctfKRLoSrcA5P2%2FhgyA6t0xnv1gmTnfdf4CN6wiaH5xG5ukw0be35q61qdnNgbQzC9KJu04KpERGQRQpbKxstDh0EKj8FR3MICOG09ufNMVSFPPSI76yJHELs82hRb9LWSL5LL2IGqNQ4Ih0c%2FfHjNWDR2Qal4eJ0JrGruuu9Ppg%2FQLpYyt8GnXjoPQva3Zg2Jr4O3dJG6iko59eyA3en4T1hShRZBIFY26LIaBM0R4id1Iw58KfpRt2UK9z%2BZ5tQiMhuUIbD8upGJ605WYETJSzM5dLcqFGwoG2Tx80Je%2BsGn4AROY6BWWxJvpi2SExjsbUduU7ilzZtwZdsOkPR6QZbxqDxqRb9vJzDgFoFhFSPdsY%2B5OgJ2WF3AU0enAiSO8aV2mdGFzHOdUkD5BUlseXucdO4pjE101QA2n952GpptVzjpB1squyXMPeDKOWWoig%2Br4AnD3EAk9IsVJUnv2aE5utNXJIzcI41O5IXbplgnfD4pQ4aE6oDAuZ3vsYauXWvxzuDbKl2Tf5MrcjOBcO7YkMKRstISqEd8SGPOXKZ7hubnYsRaDSfQReWfIRSzbgz5IEsS6cDibE%2BnPhsYfNdIqO9ob3tMBh4P18ohGuw1KgLKyI9EmS76t7bV607UiQggMILz7NIGOqUBfksSvago3Z6AIP5Ev8yZHdRUqFmJwh1tRq6gp9k2OuUU%2B3PLo4hKrS2wKj4DtRU5LIwwJ%2FYeH1BdSMedrIQpvXrVd38%2B%2BiB9ImB8yZRin1Q3JNVwgn8xL9NgsDvP7NWItLW1uZyedjDoYSRMvCfcfk2MSN9EsbvOYDD0AU65EQGcvVsmMSb1scYNf42GtRz99FImKiFQJW%2FEst%2F5P1DKB4M%2Bvk5s&X-Amz-Signature=2815045499bc938af155b735d978b9ce94077120a7c296a990f5ff9e41993a23&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676JBGURM%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIElfsrACCl%2B6wniaUDRVk0QbPY7ZDQ3bkW31GEIFtD67AiEA80kvVvtBNFKVJYzesOYrHe67l4ZQwD9HpvfzATO35w8q%2FwMIchAAGgw2Mzc0MjMxODM4MDUiDDBk%2FuXovqctfKRLoSrcA5P2%2FhgyA6t0xnv1gmTnfdf4CN6wiaH5xG5ukw0be35q61qdnNgbQzC9KJu04KpERGQRQpbKxstDh0EKj8FR3MICOG09ufNMVSFPPSI76yJHELs82hRb9LWSL5LL2IGqNQ4Ih0c%2FfHjNWDR2Qal4eJ0JrGruuu9Ppg%2FQLpYyt8GnXjoPQva3Zg2Jr4O3dJG6iko59eyA3en4T1hShRZBIFY26LIaBM0R4id1Iw58KfpRt2UK9z%2BZ5tQiMhuUIbD8upGJ605WYETJSzM5dLcqFGwoG2Tx80Je%2BsGn4AROY6BWWxJvpi2SExjsbUduU7ilzZtwZdsOkPR6QZbxqDxqRb9vJzDgFoFhFSPdsY%2B5OgJ2WF3AU0enAiSO8aV2mdGFzHOdUkD5BUlseXucdO4pjE101QA2n952GpptVzjpB1squyXMPeDKOWWoig%2Br4AnD3EAk9IsVJUnv2aE5utNXJIzcI41O5IXbplgnfD4pQ4aE6oDAuZ3vsYauXWvxzuDbKl2Tf5MrcjOBcO7YkMKRstISqEd8SGPOXKZ7hubnYsRaDSfQReWfIRSzbgz5IEsS6cDibE%2BnPhsYfNdIqO9ob3tMBh4P18ohGuw1KgLKyI9EmS76t7bV607UiQggMILz7NIGOqUBfksSvago3Z6AIP5Ev8yZHdRUqFmJwh1tRq6gp9k2OuUU%2B3PLo4hKrS2wKj4DtRU5LIwwJ%2FYeH1BdSMedrIQpvXrVd38%2B%2BiB9ImB8yZRin1Q3JNVwgn8xL9NgsDvP7NWItLW1uZyedjDoYSRMvCfcfk2MSN9EsbvOYDD0AU65EQGcvVsmMSb1scYNf42GtRz99FImKiFQJW%2FEst%2F5P1DKB4M%2Bvk5s&X-Amz-Signature=9ab1525703abde49e41468fc01b7fbd92ce562a8c051faa6bcff545111f801db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZCVDYDGN%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFD8BIt5wy78Z%2B210vjKkEpiV2RNM0CEZy778s2Pj2DvAiEApLGVuwxKXeOUWmmX8xFhpHf24wPupgDgN6B8bfO2Ec0q%2FwMIcRAAGgw2Mzc0MjMxODM4MDUiDDEVQ78LgpQu1BBbFSrcA9ojkimAqrbJD1U%2FKzIfLyAOxo7E%2FRjyNn9AGC4n7ECWlUTDSUIeKcOXUxsPfMT3z4c0ATHkJe7NS0gPz8KsuiqTKmLb74RlS5izndd7DIm%2Fe%2Fy98V6gMZiXTSnLEj8o70QEUZJHXA3g49CaANrtZwVPl8WJ0DuNchnrFWxh46zu91gckr3sTYskHraPROzCPK0%2BG0cgV%2FmiR%2FbMvPDl1nHynImd0Isi1HMi%2FTSAgaXoXQRcwAIs2BZlk8lAJgT1HcMVnIWTwtnfMrISLGHrsEAG0AwHLq9ne9MRP4czIIxTd95VsUMZntopJSZK8xDNAaiOnXQabTVfqZX2Dp6OuhTew0fV5J0QBoyk6rN045Pnq1K%2FQDc17CpDsE0GXCSjxW0raAQzNT0nm4hO9Hp0zPcIUM53pgtCCXUDuFZgaRwoMvNfmQiL4GedhaKJGP55Lfb8SWZ6Pa%2Bm4jcvJraPIns7EUdm1cULF5LamCvhpd3WoSZPhYFnFzVKlIFss%2B8%2BDy3l%2FDxx9Ax6yjht%2BcQoe9qCegeoW7vr7vUbf3AkDAorsw9y%2BuB1tRJTzGCdpwDa7jrVs3A0z3xY6zLOTs2CRtRE9ptAvTtFNtvkEgJThdJ0jQO2voNBSWt5qVyTMKLx7NIGOqUBEKKJ7u2D4dDBrm%2FL6gREk5TIzRT0VQNEEVaAOkXswfUmv0D3j2p2k6aA%2FD2iAurUJuKLopukYqOEJM%2BgCgEjrX7qRTyGzsRHbdZ2tQCJduyRDhbFXdShPRLvcFGePMA248Ew0R2M7%2FZ8PiWFKiqLhG7rSVTXBsmLE6U8bCJh%2FDtp8h3gquK3nRJAjY%2F2zpwpYm6fU9JLvK8G47qnlznU%2B7WkenX%2F&X-Amz-Signature=eec3db11b29aa6fac612ca88b0cc017396d717fb19d2fd42ebff34c18e98aa29&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZCVDYDGN%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFD8BIt5wy78Z%2B210vjKkEpiV2RNM0CEZy778s2Pj2DvAiEApLGVuwxKXeOUWmmX8xFhpHf24wPupgDgN6B8bfO2Ec0q%2FwMIcRAAGgw2Mzc0MjMxODM4MDUiDDEVQ78LgpQu1BBbFSrcA9ojkimAqrbJD1U%2FKzIfLyAOxo7E%2FRjyNn9AGC4n7ECWlUTDSUIeKcOXUxsPfMT3z4c0ATHkJe7NS0gPz8KsuiqTKmLb74RlS5izndd7DIm%2Fe%2Fy98V6gMZiXTSnLEj8o70QEUZJHXA3g49CaANrtZwVPl8WJ0DuNchnrFWxh46zu91gckr3sTYskHraPROzCPK0%2BG0cgV%2FmiR%2FbMvPDl1nHynImd0Isi1HMi%2FTSAgaXoXQRcwAIs2BZlk8lAJgT1HcMVnIWTwtnfMrISLGHrsEAG0AwHLq9ne9MRP4czIIxTd95VsUMZntopJSZK8xDNAaiOnXQabTVfqZX2Dp6OuhTew0fV5J0QBoyk6rN045Pnq1K%2FQDc17CpDsE0GXCSjxW0raAQzNT0nm4hO9Hp0zPcIUM53pgtCCXUDuFZgaRwoMvNfmQiL4GedhaKJGP55Lfb8SWZ6Pa%2Bm4jcvJraPIns7EUdm1cULF5LamCvhpd3WoSZPhYFnFzVKlIFss%2B8%2BDy3l%2FDxx9Ax6yjht%2BcQoe9qCegeoW7vr7vUbf3AkDAorsw9y%2BuB1tRJTzGCdpwDa7jrVs3A0z3xY6zLOTs2CRtRE9ptAvTtFNtvkEgJThdJ0jQO2voNBSWt5qVyTMKLx7NIGOqUBEKKJ7u2D4dDBrm%2FL6gREk5TIzRT0VQNEEVaAOkXswfUmv0D3j2p2k6aA%2FD2iAurUJuKLopukYqOEJM%2BgCgEjrX7qRTyGzsRHbdZ2tQCJduyRDhbFXdShPRLvcFGePMA248Ew0R2M7%2FZ8PiWFKiqLhG7rSVTXBsmLE6U8bCJh%2FDtp8h3gquK3nRJAjY%2F2zpwpYm6fU9JLvK8G47qnlznU%2B7WkenX%2F&X-Amz-Signature=867c0f110260e758673d48263beff99433d621af4603200e1cb8b767570a26be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZCVDYDGN%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFD8BIt5wy78Z%2B210vjKkEpiV2RNM0CEZy778s2Pj2DvAiEApLGVuwxKXeOUWmmX8xFhpHf24wPupgDgN6B8bfO2Ec0q%2FwMIcRAAGgw2Mzc0MjMxODM4MDUiDDEVQ78LgpQu1BBbFSrcA9ojkimAqrbJD1U%2FKzIfLyAOxo7E%2FRjyNn9AGC4n7ECWlUTDSUIeKcOXUxsPfMT3z4c0ATHkJe7NS0gPz8KsuiqTKmLb74RlS5izndd7DIm%2Fe%2Fy98V6gMZiXTSnLEj8o70QEUZJHXA3g49CaANrtZwVPl8WJ0DuNchnrFWxh46zu91gckr3sTYskHraPROzCPK0%2BG0cgV%2FmiR%2FbMvPDl1nHynImd0Isi1HMi%2FTSAgaXoXQRcwAIs2BZlk8lAJgT1HcMVnIWTwtnfMrISLGHrsEAG0AwHLq9ne9MRP4czIIxTd95VsUMZntopJSZK8xDNAaiOnXQabTVfqZX2Dp6OuhTew0fV5J0QBoyk6rN045Pnq1K%2FQDc17CpDsE0GXCSjxW0raAQzNT0nm4hO9Hp0zPcIUM53pgtCCXUDuFZgaRwoMvNfmQiL4GedhaKJGP55Lfb8SWZ6Pa%2Bm4jcvJraPIns7EUdm1cULF5LamCvhpd3WoSZPhYFnFzVKlIFss%2B8%2BDy3l%2FDxx9Ax6yjht%2BcQoe9qCegeoW7vr7vUbf3AkDAorsw9y%2BuB1tRJTzGCdpwDa7jrVs3A0z3xY6zLOTs2CRtRE9ptAvTtFNtvkEgJThdJ0jQO2voNBSWt5qVyTMKLx7NIGOqUBEKKJ7u2D4dDBrm%2FL6gREk5TIzRT0VQNEEVaAOkXswfUmv0D3j2p2k6aA%2FD2iAurUJuKLopukYqOEJM%2BgCgEjrX7qRTyGzsRHbdZ2tQCJduyRDhbFXdShPRLvcFGePMA248Ew0R2M7%2FZ8PiWFKiqLhG7rSVTXBsmLE6U8bCJh%2FDtp8h3gquK3nRJAjY%2F2zpwpYm6fU9JLvK8G47qnlznU%2B7WkenX%2F&X-Amz-Signature=1a34d62b95b91c7d844cd75772cede7c36ed35b6e35cec673c788ada66353c4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZCVDYDGN%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092325Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFD8BIt5wy78Z%2B210vjKkEpiV2RNM0CEZy778s2Pj2DvAiEApLGVuwxKXeOUWmmX8xFhpHf24wPupgDgN6B8bfO2Ec0q%2FwMIcRAAGgw2Mzc0MjMxODM4MDUiDDEVQ78LgpQu1BBbFSrcA9ojkimAqrbJD1U%2FKzIfLyAOxo7E%2FRjyNn9AGC4n7ECWlUTDSUIeKcOXUxsPfMT3z4c0ATHkJe7NS0gPz8KsuiqTKmLb74RlS5izndd7DIm%2Fe%2Fy98V6gMZiXTSnLEj8o70QEUZJHXA3g49CaANrtZwVPl8WJ0DuNchnrFWxh46zu91gckr3sTYskHraPROzCPK0%2BG0cgV%2FmiR%2FbMvPDl1nHynImd0Isi1HMi%2FTSAgaXoXQRcwAIs2BZlk8lAJgT1HcMVnIWTwtnfMrISLGHrsEAG0AwHLq9ne9MRP4czIIxTd95VsUMZntopJSZK8xDNAaiOnXQabTVfqZX2Dp6OuhTew0fV5J0QBoyk6rN045Pnq1K%2FQDc17CpDsE0GXCSjxW0raAQzNT0nm4hO9Hp0zPcIUM53pgtCCXUDuFZgaRwoMvNfmQiL4GedhaKJGP55Lfb8SWZ6Pa%2Bm4jcvJraPIns7EUdm1cULF5LamCvhpd3WoSZPhYFnFzVKlIFss%2B8%2BDy3l%2FDxx9Ax6yjht%2BcQoe9qCegeoW7vr7vUbf3AkDAorsw9y%2BuB1tRJTzGCdpwDa7jrVs3A0z3xY6zLOTs2CRtRE9ptAvTtFNtvkEgJThdJ0jQO2voNBSWt5qVyTMKLx7NIGOqUBEKKJ7u2D4dDBrm%2FL6gREk5TIzRT0VQNEEVaAOkXswfUmv0D3j2p2k6aA%2FD2iAurUJuKLopukYqOEJM%2BgCgEjrX7qRTyGzsRHbdZ2tQCJduyRDhbFXdShPRLvcFGePMA248Ew0R2M7%2FZ8PiWFKiqLhG7rSVTXBsmLE6U8bCJh%2FDtp8h3gquK3nRJAjY%2F2zpwpYm6fU9JLvK8G47qnlznU%2B7WkenX%2F&X-Amz-Signature=3140bc21a947f054cd4b67d5a22db7f0518e2230ff9c8a6fd304e5f3a8c02a45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAQFFJ5W%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGNqnkcFAPVemhEYnghjMsX1%2BEa0Dp9cfLTrApHv7tbjAiEA4k7TEginU%2FvWJrGAfdbqlu3BYimD2HjA5bmH4qtbdkcq%2FwMIchAAGgw2Mzc0MjMxODM4MDUiDBL4GOpXsqF7DQBW8ircA1tKrKTcCBspSddkxaREE%2BoUTNb2VzIotdhVNjAZ6t1eUk74Su7IVYI%2BCWUHLoPjN4SE2APH%2ByJycdIaOqxFkTh%2FIAoAw6X0XyDIRnmSuy17bW%2B%2BbyrBQyzohNHM914mTiP2TrC%2B9PJOv8W7TEHxwxCNnQVJWp2gfw6QQ23iEkiuz8wVAH%2BOB%2F3EVY7Ls7f%2BBfob50yIy%2FQXHyQdTdjwyG7icpPEUV5kpaVQ3dPAJjWd%2B9xY0CaSe7p1fpFR5nFewm5gghYkQ7%2BMgr23Ct1xB2ADcvkfNRQPeELxfq5e2gzu5G9qC37QixlrbIBz96nqQeN0j0MM2fFSEVyxfig4DavapxvFXHME1kDRz2mcsgOw8EucsU4vwz81i5Ur6Q7Bs1BH8EZfPj1Lyd9KyePfoYGWKTLzFXdt1Kx1Jj39SZi3J5vzJFnRTsf9McCoC1ZW5YwHohGYxVOmDIoTLZ5MOx%2BKtmgnlpkaTl%2BthZQyyqMDyGT00L1dO0zEQEwFK8Lt%2BBTVBOZIgsZvVaLEkXEo87ga1Ldd3in5GEPm1qpBER568P6ryxMMZJWo880AlgUJpcr%2FsE7%2F%2BSjNsjnJFl5d%2FpghLRj9e0gTMEQ7t474EdYW%2BezyQG%2FRth3I3E7vMJDy7NIGOqUBa6gu6057j8bZiHeytOCD9ncOujorrqU%2Fs4mP5SONYZFCNAYXcw4WxpOwVVt5Lms0KgBLVfj3A%2BWZiSaZad0FEUmttDTELBlp1wUqo7u5zlBEBRtwK4dDu0P4e%2B34CL82rFmoAVzNVN4Mx4mVGKIy%2FTMDGI1pHwLPivXAk2plmvlFEhfKsYXijmhEdNI5wzCD0fM4Xlm97Yyz24xRPt3wOmdsleu9&X-Amz-Signature=62453a56643906d7afd0dd772c246715dcedc36c606c0892b2eea2c1be7ebf38&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TH42BYJC%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC%2FqfAac3jG1XZ%2B%2FM9cBWsWQVJKpO8yr7LKN1%2B2HODkwAIhAOgq1OcmDKEFM534pNrjzzfYFLY5LBNl2UXymZ%2BGXa4vKv8DCHIQABoMNjM3NDIzMTgzODA1IgyuTghj8RI7gincodwq3ANCbRIiRMDYdf3E%2BCMnd9mHwcx82oUZ%2FxwfFHbvawngl5SDroVvgV3CrhSe3KHg4KnEvLGAPQw7qehn2lmEN%2FlXvsWSelLkeKlhVKWEbSNagSr30o%2B3%2FLusIHpiVFcbrAgqWXAGW%2BChYOaqY1vecEe4KlJpGBm6V9HTVqB7b7d%2FbEAhRVByqj63MAHalEup%2F1WToF8MGsNhZmbWLfdYdXgz7wJg8%2FOUP%2F0PhcJ%2Fkq3rlTzxA5oVAJE%2FIoZS6yw5BoN%2FF%2B1%2Fu1%2FgNgnYHxyenxyKnDdgBLJ1jy8mPl85pkq8yj%2BRgWqoCuMe7O7Q0vv6l8yKpO695hN5oMUPLkVXBV1K5FOmg2n77keWnmYtm6zlirkZoWlpWSHODEPoyNX5rtCAVrjMIWIt4wnhn6PtOx4Zd8WFNB4JeLJQPfPG2yAipPkW2G4dBCPyNu7gaU0speYhFWfA5gwKTtBED5eVsSMNc8ueL0V8JYxVgjJyDRM7VqaiBCo8sEH%2Byet8mGJ36x%2BSoMmGzVUhi7Scz96GGAeqXASXDo58iUvwhhXWSV%2FYoaqzRjTRp5QTW64wjBLcIuCaRXMIbQzM2RHk4krLBwPaZiPDFyGHQEGBH3N3Dkm2WSEdCs6cApH7uqzDTjC68uzSBjqkAR5wRm00tfJfHcUVXTDVGwumYmuNSZWN%2BYjU2N1BpLU2VDNlf%2FXqWL1Oaf9A5Fc0mE%2BBqGtyNfr89%2FzjCLu7DNsOybKRo2HUEwRGGQKYohzI07txfZujz6fQY1USNB6iY%2BkVppEDrnuFfhemOaMA9OUzOMHtc7qSwJb%2FrtfolPtVsGukFwxULtKyVEJRdpttyDTp8KKbfXg9NXzwAYmf1A9jGCLw&X-Amz-Signature=88fb485135c07c1e87ae6ac24f1c7c365716bd5d38f7a4112d39922027e1980a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TH42BYJC%2F20260718%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260718T092326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC%2FqfAac3jG1XZ%2B%2FM9cBWsWQVJKpO8yr7LKN1%2B2HODkwAIhAOgq1OcmDKEFM534pNrjzzfYFLY5LBNl2UXymZ%2BGXa4vKv8DCHIQABoMNjM3NDIzMTgzODA1IgyuTghj8RI7gincodwq3ANCbRIiRMDYdf3E%2BCMnd9mHwcx82oUZ%2FxwfFHbvawngl5SDroVvgV3CrhSe3KHg4KnEvLGAPQw7qehn2lmEN%2FlXvsWSelLkeKlhVKWEbSNagSr30o%2B3%2FLusIHpiVFcbrAgqWXAGW%2BChYOaqY1vecEe4KlJpGBm6V9HTVqB7b7d%2FbEAhRVByqj63MAHalEup%2F1WToF8MGsNhZmbWLfdYdXgz7wJg8%2FOUP%2F0PhcJ%2Fkq3rlTzxA5oVAJE%2FIoZS6yw5BoN%2FF%2B1%2Fu1%2FgNgnYHxyenxyKnDdgBLJ1jy8mPl85pkq8yj%2BRgWqoCuMe7O7Q0vv6l8yKpO695hN5oMUPLkVXBV1K5FOmg2n77keWnmYtm6zlirkZoWlpWSHODEPoyNX5rtCAVrjMIWIt4wnhn6PtOx4Zd8WFNB4JeLJQPfPG2yAipPkW2G4dBCPyNu7gaU0speYhFWfA5gwKTtBED5eVsSMNc8ueL0V8JYxVgjJyDRM7VqaiBCo8sEH%2Byet8mGJ36x%2BSoMmGzVUhi7Scz96GGAeqXASXDo58iUvwhhXWSV%2FYoaqzRjTRp5QTW64wjBLcIuCaRXMIbQzM2RHk4krLBwPaZiPDFyGHQEGBH3N3Dkm2WSEdCs6cApH7uqzDTjC68uzSBjqkAR5wRm00tfJfHcUVXTDVGwumYmuNSZWN%2BYjU2N1BpLU2VDNlf%2FXqWL1Oaf9A5Fc0mE%2BBqGtyNfr89%2FzjCLu7DNsOybKRo2HUEwRGGQKYohzI07txfZujz6fQY1USNB6iY%2BkVppEDrnuFfhemOaMA9OUzOMHtc7qSwJb%2FrtfolPtVsGukFwxULtKyVEJRdpttyDTp8KKbfXg9NXzwAYmf1A9jGCLw&X-Amz-Signature=e6fb3785e50be58ae79968939f5b4f1fd81657af57e37b4905a0ee6c947a75c7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
