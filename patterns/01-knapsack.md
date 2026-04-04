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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667TJVPJ6I%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGSxAlRtPs3rreDHk49H4iqEqD%2BPLDFYWrq7Kqc%2BWTjAAiBfkORTOnDqycVAZBNzoGx7z3w4lJwuZ%2BsA6CorXXVlsSqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FaEtzKS4s8RjxOkKKtwDt5X5aMn0fUSRJzjt04Ln2jzN58Qvsa%2FP%2FpoIUhep3ZyNnp2kJhQRYqyqPcg%2Bt4uWFbEJ0u78%2FOYe5pNcDB3V4jXtbhJCGRh%2BlHIpa5k7AxiHXIShY5Un8fUK87hpB7naJaiizrhIj25fUKKKHQh7%2FO44s1gIVAtmdt9cqCfBtuMyGlyPzT16AmmvUZghtqeLmyUOhy%2FVAaHr6PDefYoeoehD742dqDFbFy8p%2BX3DinNpLzdGqmDPSmRVEBQWm7XuXDhylBCEpa6nUPRvjREAHRDyzunfjYgSInkiZCzNUcu86bQz%2Foq%2FEHmUVPXQ6HCEwmfK3W4Jiri4p02YJC5jnC%2BgZYrj9Rgev4DOZhNJ%2BOQX0RIyRsZvJLPs2VPn5LSVu4HYm93WNbzjV6x4NSUnJrAUCfUTvbsMfz6%2FBR2e9wC5qpHspI071gy7GlsP3cSZiRhk0IC%2FBP6XcWwPtpEgHgizt2EyNiDTVCfQqaGKvkn2i1KooACbmRrHHvtFPaukTVa8aNFU5PvjXDHC%2Fe%2FqHCEuXvYhpoqep4qVutilqM5sPMdoqpxE5Uijb6fK4abqcSIUcIIeHb0OIBimXIHJRsxSStoAQmUbAYNhIfxFN1iRJULX3%2BhKfLRYclMwyo%2FDzgY6pgHq9b2U6mqLGG7ksVv3Vd3Qxb7XusblqINFNRcI7ZLbnvMEF0Poz4XBcNEtLI067IKZLNx6Npy1pWF3DRecElBm1d%2BC5GYWleV2nJ563lhk3%2FQRaPxYl%2FB8MwPlRNcekqhlExRrUVKx3J20%2F%2BvBmai6pbdTknGcF3k8x2SsD%2Bsrof0sqgXcA8IGmPANqDwegrowowOEhkTJuU9t%2BRUk%2BmM%2BkzRPdWd0&X-Amz-Signature=3dc522c2128707b0f3719ff28b5ac075a62064b293a71c20e0b714cfe8504afc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667TJVPJ6I%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGSxAlRtPs3rreDHk49H4iqEqD%2BPLDFYWrq7Kqc%2BWTjAAiBfkORTOnDqycVAZBNzoGx7z3w4lJwuZ%2BsA6CorXXVlsSqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FaEtzKS4s8RjxOkKKtwDt5X5aMn0fUSRJzjt04Ln2jzN58Qvsa%2FP%2FpoIUhep3ZyNnp2kJhQRYqyqPcg%2Bt4uWFbEJ0u78%2FOYe5pNcDB3V4jXtbhJCGRh%2BlHIpa5k7AxiHXIShY5Un8fUK87hpB7naJaiizrhIj25fUKKKHQh7%2FO44s1gIVAtmdt9cqCfBtuMyGlyPzT16AmmvUZghtqeLmyUOhy%2FVAaHr6PDefYoeoehD742dqDFbFy8p%2BX3DinNpLzdGqmDPSmRVEBQWm7XuXDhylBCEpa6nUPRvjREAHRDyzunfjYgSInkiZCzNUcu86bQz%2Foq%2FEHmUVPXQ6HCEwmfK3W4Jiri4p02YJC5jnC%2BgZYrj9Rgev4DOZhNJ%2BOQX0RIyRsZvJLPs2VPn5LSVu4HYm93WNbzjV6x4NSUnJrAUCfUTvbsMfz6%2FBR2e9wC5qpHspI071gy7GlsP3cSZiRhk0IC%2FBP6XcWwPtpEgHgizt2EyNiDTVCfQqaGKvkn2i1KooACbmRrHHvtFPaukTVa8aNFU5PvjXDHC%2Fe%2FqHCEuXvYhpoqep4qVutilqM5sPMdoqpxE5Uijb6fK4abqcSIUcIIeHb0OIBimXIHJRsxSStoAQmUbAYNhIfxFN1iRJULX3%2BhKfLRYclMwyo%2FDzgY6pgHq9b2U6mqLGG7ksVv3Vd3Qxb7XusblqINFNRcI7ZLbnvMEF0Poz4XBcNEtLI067IKZLNx6Npy1pWF3DRecElBm1d%2BC5GYWleV2nJ563lhk3%2FQRaPxYl%2FB8MwPlRNcekqhlExRrUVKx3J20%2F%2BvBmai6pbdTknGcF3k8x2SsD%2Bsrof0sqgXcA8IGmPANqDwegrowowOEhkTJuU9t%2BRUk%2BmM%2BkzRPdWd0&X-Amz-Signature=4948959d314b2eb817b9f9552dd42e4280da1c104861d200113c7b55c514f67d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667TJVPJ6I%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGSxAlRtPs3rreDHk49H4iqEqD%2BPLDFYWrq7Kqc%2BWTjAAiBfkORTOnDqycVAZBNzoGx7z3w4lJwuZ%2BsA6CorXXVlsSqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FaEtzKS4s8RjxOkKKtwDt5X5aMn0fUSRJzjt04Ln2jzN58Qvsa%2FP%2FpoIUhep3ZyNnp2kJhQRYqyqPcg%2Bt4uWFbEJ0u78%2FOYe5pNcDB3V4jXtbhJCGRh%2BlHIpa5k7AxiHXIShY5Un8fUK87hpB7naJaiizrhIj25fUKKKHQh7%2FO44s1gIVAtmdt9cqCfBtuMyGlyPzT16AmmvUZghtqeLmyUOhy%2FVAaHr6PDefYoeoehD742dqDFbFy8p%2BX3DinNpLzdGqmDPSmRVEBQWm7XuXDhylBCEpa6nUPRvjREAHRDyzunfjYgSInkiZCzNUcu86bQz%2Foq%2FEHmUVPXQ6HCEwmfK3W4Jiri4p02YJC5jnC%2BgZYrj9Rgev4DOZhNJ%2BOQX0RIyRsZvJLPs2VPn5LSVu4HYm93WNbzjV6x4NSUnJrAUCfUTvbsMfz6%2FBR2e9wC5qpHspI071gy7GlsP3cSZiRhk0IC%2FBP6XcWwPtpEgHgizt2EyNiDTVCfQqaGKvkn2i1KooACbmRrHHvtFPaukTVa8aNFU5PvjXDHC%2Fe%2FqHCEuXvYhpoqep4qVutilqM5sPMdoqpxE5Uijb6fK4abqcSIUcIIeHb0OIBimXIHJRsxSStoAQmUbAYNhIfxFN1iRJULX3%2BhKfLRYclMwyo%2FDzgY6pgHq9b2U6mqLGG7ksVv3Vd3Qxb7XusblqINFNRcI7ZLbnvMEF0Poz4XBcNEtLI067IKZLNx6Npy1pWF3DRecElBm1d%2BC5GYWleV2nJ563lhk3%2FQRaPxYl%2FB8MwPlRNcekqhlExRrUVKx3J20%2F%2BvBmai6pbdTknGcF3k8x2SsD%2Bsrof0sqgXcA8IGmPANqDwegrowowOEhkTJuU9t%2BRUk%2BmM%2BkzRPdWd0&X-Amz-Signature=6a8394ac3812ca007d049370a3b0c1bd2391856a9e93e3ded4457ed0de01e3eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQS3Z34Q%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDC47kpWH%2F0vw0Fv7gMGuC4D6W6Nt83hlNiG%2FJfzqIVcwIgP6fg8VBXP4ePDLjzpwyWghwT5AJg5%2F0uHE4S0UKFWQEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEnkDndi7bFofPNIeyrcA9zmLLR0MkGNsfD08N4u9eXw3fG%2BCIIBVRNc3YSu%2FGV3w19FLJqJc4vsMXD09FvOcy50JrkPG%2B%2FVkJGy5mec8sa0dK%2FV%2FTKyC%2B12u3yGolxvfhluMyv28vfBV3CuoDRi8e2nhFSTiNXDAvMujbLUA7rZzGmea6w0v%2BS75sVgmJgnTORI9TQQ1UpUjePUf9Lh8yZYKauafJ%2FLfB4UB1HrjPIBrgI76uUOBcZyUWC%2B0Ko%2B67UTA7SFP1AgXtuVTZXQTepDQruQcq0hk6BAeuXc%2BgqjRibhepDzpUyy5I4c28VW1gmHfDKavPngGv%2Btwafskv151FWg7juUKZDslditnUO%2BSEUatllTBUA8xSoa8Y6tfOYa8ak9E3nVTUN26TYHNepEydcmXyO9pYyRYRvXfWmhKeAm6%2Bp8jcTGV3EgewcmU1w5Ht%2BKR%2BN2K87olBKtdGvvXuA7WG89JzRaKPpSeEBkW0EUeAMbbNxTjYnnbEz9VBUB9PMtOh69opDhLQ7gDwBd4RkDo45uqgPpJNU%2FxO1EeuILR8L6lZFxJ8gUD8IMOZviZcQq7GSIqnKlNypcgTurdVXyngjesVR4kWHvKHhfJhrt1AaMnFIDjMdHcJdDwdIeJuG0lRdcXO5QMLCPw84GOqUBMgrLz%2Bk1EPRK4kE5lCv1SmrTER%2F1KwIZYCpKdvcasfbhCNMVhY0KkaPW22rTykXHRHS0DHF4GM6IcAJq9FlyKEE9P%2FmtJoCDRfhxnBAP0bShrur40CGP96oJqswhufJSTprfggeAiAwust4snQQ7njqs9xR9tmSbGWqM3ac84naxF0nQcjeJTc%2FSUVutrso%2BeoHddhgKn24h1pBmgo4pxPDM2YuW&X-Amz-Signature=1470f0586c11a937d1dfa5277b77380406ce409c1077ecd1abc2616fa7fd8dd8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQS3Z34Q%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDC47kpWH%2F0vw0Fv7gMGuC4D6W6Nt83hlNiG%2FJfzqIVcwIgP6fg8VBXP4ePDLjzpwyWghwT5AJg5%2F0uHE4S0UKFWQEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEnkDndi7bFofPNIeyrcA9zmLLR0MkGNsfD08N4u9eXw3fG%2BCIIBVRNc3YSu%2FGV3w19FLJqJc4vsMXD09FvOcy50JrkPG%2B%2FVkJGy5mec8sa0dK%2FV%2FTKyC%2B12u3yGolxvfhluMyv28vfBV3CuoDRi8e2nhFSTiNXDAvMujbLUA7rZzGmea6w0v%2BS75sVgmJgnTORI9TQQ1UpUjePUf9Lh8yZYKauafJ%2FLfB4UB1HrjPIBrgI76uUOBcZyUWC%2B0Ko%2B67UTA7SFP1AgXtuVTZXQTepDQruQcq0hk6BAeuXc%2BgqjRibhepDzpUyy5I4c28VW1gmHfDKavPngGv%2Btwafskv151FWg7juUKZDslditnUO%2BSEUatllTBUA8xSoa8Y6tfOYa8ak9E3nVTUN26TYHNepEydcmXyO9pYyRYRvXfWmhKeAm6%2Bp8jcTGV3EgewcmU1w5Ht%2BKR%2BN2K87olBKtdGvvXuA7WG89JzRaKPpSeEBkW0EUeAMbbNxTjYnnbEz9VBUB9PMtOh69opDhLQ7gDwBd4RkDo45uqgPpJNU%2FxO1EeuILR8L6lZFxJ8gUD8IMOZviZcQq7GSIqnKlNypcgTurdVXyngjesVR4kWHvKHhfJhrt1AaMnFIDjMdHcJdDwdIeJuG0lRdcXO5QMLCPw84GOqUBMgrLz%2Bk1EPRK4kE5lCv1SmrTER%2F1KwIZYCpKdvcasfbhCNMVhY0KkaPW22rTykXHRHS0DHF4GM6IcAJq9FlyKEE9P%2FmtJoCDRfhxnBAP0bShrur40CGP96oJqswhufJSTprfggeAiAwust4snQQ7njqs9xR9tmSbGWqM3ac84naxF0nQcjeJTc%2FSUVutrso%2BeoHddhgKn24h1pBmgo4pxPDM2YuW&X-Amz-Signature=4631316b9313a6504ce553626d6bd2a16e1fc15c21f30d34c107b524ca9e88ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQS3Z34Q%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDC47kpWH%2F0vw0Fv7gMGuC4D6W6Nt83hlNiG%2FJfzqIVcwIgP6fg8VBXP4ePDLjzpwyWghwT5AJg5%2F0uHE4S0UKFWQEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEnkDndi7bFofPNIeyrcA9zmLLR0MkGNsfD08N4u9eXw3fG%2BCIIBVRNc3YSu%2FGV3w19FLJqJc4vsMXD09FvOcy50JrkPG%2B%2FVkJGy5mec8sa0dK%2FV%2FTKyC%2B12u3yGolxvfhluMyv28vfBV3CuoDRi8e2nhFSTiNXDAvMujbLUA7rZzGmea6w0v%2BS75sVgmJgnTORI9TQQ1UpUjePUf9Lh8yZYKauafJ%2FLfB4UB1HrjPIBrgI76uUOBcZyUWC%2B0Ko%2B67UTA7SFP1AgXtuVTZXQTepDQruQcq0hk6BAeuXc%2BgqjRibhepDzpUyy5I4c28VW1gmHfDKavPngGv%2Btwafskv151FWg7juUKZDslditnUO%2BSEUatllTBUA8xSoa8Y6tfOYa8ak9E3nVTUN26TYHNepEydcmXyO9pYyRYRvXfWmhKeAm6%2Bp8jcTGV3EgewcmU1w5Ht%2BKR%2BN2K87olBKtdGvvXuA7WG89JzRaKPpSeEBkW0EUeAMbbNxTjYnnbEz9VBUB9PMtOh69opDhLQ7gDwBd4RkDo45uqgPpJNU%2FxO1EeuILR8L6lZFxJ8gUD8IMOZviZcQq7GSIqnKlNypcgTurdVXyngjesVR4kWHvKHhfJhrt1AaMnFIDjMdHcJdDwdIeJuG0lRdcXO5QMLCPw84GOqUBMgrLz%2Bk1EPRK4kE5lCv1SmrTER%2F1KwIZYCpKdvcasfbhCNMVhY0KkaPW22rTykXHRHS0DHF4GM6IcAJq9FlyKEE9P%2FmtJoCDRfhxnBAP0bShrur40CGP96oJqswhufJSTprfggeAiAwust4snQQ7njqs9xR9tmSbGWqM3ac84naxF0nQcjeJTc%2FSUVutrso%2BeoHddhgKn24h1pBmgo4pxPDM2YuW&X-Amz-Signature=a80cf7b0968382c01d77b43a90983a95b927e099aaac6e6dfb38862f7f976078&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQS3Z34Q%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDC47kpWH%2F0vw0Fv7gMGuC4D6W6Nt83hlNiG%2FJfzqIVcwIgP6fg8VBXP4ePDLjzpwyWghwT5AJg5%2F0uHE4S0UKFWQEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEnkDndi7bFofPNIeyrcA9zmLLR0MkGNsfD08N4u9eXw3fG%2BCIIBVRNc3YSu%2FGV3w19FLJqJc4vsMXD09FvOcy50JrkPG%2B%2FVkJGy5mec8sa0dK%2FV%2FTKyC%2B12u3yGolxvfhluMyv28vfBV3CuoDRi8e2nhFSTiNXDAvMujbLUA7rZzGmea6w0v%2BS75sVgmJgnTORI9TQQ1UpUjePUf9Lh8yZYKauafJ%2FLfB4UB1HrjPIBrgI76uUOBcZyUWC%2B0Ko%2B67UTA7SFP1AgXtuVTZXQTepDQruQcq0hk6BAeuXc%2BgqjRibhepDzpUyy5I4c28VW1gmHfDKavPngGv%2Btwafskv151FWg7juUKZDslditnUO%2BSEUatllTBUA8xSoa8Y6tfOYa8ak9E3nVTUN26TYHNepEydcmXyO9pYyRYRvXfWmhKeAm6%2Bp8jcTGV3EgewcmU1w5Ht%2BKR%2BN2K87olBKtdGvvXuA7WG89JzRaKPpSeEBkW0EUeAMbbNxTjYnnbEz9VBUB9PMtOh69opDhLQ7gDwBd4RkDo45uqgPpJNU%2FxO1EeuILR8L6lZFxJ8gUD8IMOZviZcQq7GSIqnKlNypcgTurdVXyngjesVR4kWHvKHhfJhrt1AaMnFIDjMdHcJdDwdIeJuG0lRdcXO5QMLCPw84GOqUBMgrLz%2Bk1EPRK4kE5lCv1SmrTER%2F1KwIZYCpKdvcasfbhCNMVhY0KkaPW22rTykXHRHS0DHF4GM6IcAJq9FlyKEE9P%2FmtJoCDRfhxnBAP0bShrur40CGP96oJqswhufJSTprfggeAiAwust4snQQ7njqs9xR9tmSbGWqM3ac84naxF0nQcjeJTc%2FSUVutrso%2BeoHddhgKn24h1pBmgo4pxPDM2YuW&X-Amz-Signature=5c2fd04c6215d6f31cfae0806e1e6b99a2a47fa3310c584e0db2e6bb29656513&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662ARICNDC%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083945Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIESIejSRLRDIl8N%2FjNnJM6Py7xkCM%2F1l22g4W80BP28HAiBXFlmh81IlagNgHsAScPioIEbEeE1bPO7BjYtX4I6KliqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMD2y82UBJNSll2Qw0KtwD65szbyHosZfSZmk6wavOguqMhjsrGt4BQcR%2BEfKrp8U42QXoutt3%2BQRxc4UGU9SmODY%2BLT3AW%2BdzM2Fn3VYHhfF0mlXZ1tbpAGwBCFAnOHpskyvI1%2FkwkdfdOiTTiL4LHG5i9YtaAM0ct7OZbpP1kHc%2FEvf6w1I%2BADlut9MMb0Yt9kCv5aIhSuzFlxC4kr%2FY4lHbPn0qMJZNumorO3GhoUWKMrRrLy1wqyP4YiJICzbbutFdZct3NbUGDRcplT9YhE6Hv%2BQLYywbr%2Fe17rZaUVspz4u1r%2FkKIOn4NHUzPCX4pqR23Vb9X3ZQ6nWDm%2BkJAB%2FRrgSOcOidMU4cg8HyKZzFivZRLXogbHV1HSIACq5tyyfyTmIz%2FuNAyhhtZrU6G%2FQiszb2%2BGu2C0y6ytqDDR6jaXtLvkjtss57Cq3VwdyYsm7tbiBlLKvEkkv83YMONLmny72QT%2FYTYP69nVU2uiR8uRo835fDdHyqtqbb4iWAEiTB8Zq41y2uLH8HjyzJLyZUFBvIIajT3Pg%2FSnaZ%2BmToLy0Nc05KVcAmT0Z5K7EjsVQcfPswJSMUH1xAw2TEE%2BE1lyQE2O4Av%2Fm21YgusXsn9b%2FZsE84i8odysj4jUy1B8TrNvayG2rubm0w24%2FDzgY6pgEfP4cQF9J2ntUGMY3MrtO1JCRDKcehPqS5E9hQPrlFzAejqPpxRNQy5VGg7oDah5x%2BHLEHh4iW3QCj6OwhLIaRejcmKJsS60Mx31vjnD%2FgaCABvlbVQrO%2B7ivf9RKu1t7%2B9rwPJHYMggWrGjYF%2Fbq3Qm3ZrWKw29FfHfDlm5WpsrpnuFaXjhqX5UIlP1w%2B8tPTmbv0rEyLmjWTH6e4aA%2FLj9%2FwLAz3&X-Amz-Signature=5caf3942c7ec8a6cbc382f4a254be776dcafd6221ccaa32048c066e53e113aa7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYYTUL4R%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083945Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDqSgyJ3r6hdCivrFxgAnGZWwv5B76E3Qi6kLevgUW0lQIhALAWGTQTd%2B%2Fa6MSZ7cKQkiRCujtMME%2BIMyVr9KExAYQRKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyA1bZw7KYyxikK6p8q3AMwx40YpymD3az2CUaTWIkIAZ34ySM%2F0RcdcLpVN0yimFO0Bi%2BBPWBnQdYo3DF%2F1KRAwyyCEva6nIiVgW0vGT%2B4W0NKrLCwF%2BHP%2BuvXXnyARm8gUHH84o05hIGpet3GT1i%2B5FZgjroWwc1YvOuripL7nWCrZ918F53HL%2BfSezVTy0n48FsRPWWiJ3sdywNIWOwdOqjQn6XWCBMehG9rbZInW4tIdV%2BqX%2BhQNoNoZE5T9ScgBULAF%2BGDe7gA%2B%2BM8yTG%2FVAjtX%2BtSsMuVmV7Aimx8MsxHqMhicVpKSjMVvMce4ACWLzfQsVNufIrKcHIQBLoudlNyPddLzHn%2Fr923G64eBODBi6%2F5EipCZAtG6SRfXdO%2FwT5Kcy9HBFIWwKSIMvYf1L91coHFZpHVFquTpInDZAYZWW44fOeS3mx%2BbSp%2BgEAaDCJ9M6A%2BRUecgz07kdvKsqYnPSP%2BZzxvWMpbmIz9aoUvExmOIgqIB8QfC9bjqBAPNWkToK1%2B7VzPiLuuMPvTOl%2B1f0mv6xvFGDxdxZcLpQTrxGE2f1aORA5uAj9Z1Q0adpyvEZhefqZ4OqBOajaPoXRtuSuN93FXfrKc0al%2FLfy%2ByZVmhvWFmT0yp%2BfYiLfggUUu8ntuV8fybzCskcPOBjqkAeYz9T%2FrplNa8LQUQTOvJj7G7EXdPGWiB51thYAyfCldrOlCXSPXInELKbEfaKqMXjUwlTkkl4QnxpMIpt8fFz2O3lfxHOXTYu83%2FZ1GhR%2B95kMsKQGnh5ILMwwanP8O60Y3SIoAu2svTlOyhUXNLiOlXtAK8aeDU9XTvdAWbBJCdB2KhERhabSAXh1EvzOqkGWck6MXqBfclEG0lHVCQUXqaHED&X-Amz-Signature=926e18de8bce5200f080a8fd0a53134da2cc2b7e8501aac65e731ed25304c4eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYYTUL4R%2F20260404%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260404T083945Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDqSgyJ3r6hdCivrFxgAnGZWwv5B76E3Qi6kLevgUW0lQIhALAWGTQTd%2B%2Fa6MSZ7cKQkiRCujtMME%2BIMyVr9KExAYQRKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyA1bZw7KYyxikK6p8q3AMwx40YpymD3az2CUaTWIkIAZ34ySM%2F0RcdcLpVN0yimFO0Bi%2BBPWBnQdYo3DF%2F1KRAwyyCEva6nIiVgW0vGT%2B4W0NKrLCwF%2BHP%2BuvXXnyARm8gUHH84o05hIGpet3GT1i%2B5FZgjroWwc1YvOuripL7nWCrZ918F53HL%2BfSezVTy0n48FsRPWWiJ3sdywNIWOwdOqjQn6XWCBMehG9rbZInW4tIdV%2BqX%2BhQNoNoZE5T9ScgBULAF%2BGDe7gA%2B%2BM8yTG%2FVAjtX%2BtSsMuVmV7Aimx8MsxHqMhicVpKSjMVvMce4ACWLzfQsVNufIrKcHIQBLoudlNyPddLzHn%2Fr923G64eBODBi6%2F5EipCZAtG6SRfXdO%2FwT5Kcy9HBFIWwKSIMvYf1L91coHFZpHVFquTpInDZAYZWW44fOeS3mx%2BbSp%2BgEAaDCJ9M6A%2BRUecgz07kdvKsqYnPSP%2BZzxvWMpbmIz9aoUvExmOIgqIB8QfC9bjqBAPNWkToK1%2B7VzPiLuuMPvTOl%2B1f0mv6xvFGDxdxZcLpQTrxGE2f1aORA5uAj9Z1Q0adpyvEZhefqZ4OqBOajaPoXRtuSuN93FXfrKc0al%2FLfy%2ByZVmhvWFmT0yp%2BfYiLfggUUu8ntuV8fybzCskcPOBjqkAeYz9T%2FrplNa8LQUQTOvJj7G7EXdPGWiB51thYAyfCldrOlCXSPXInELKbEfaKqMXjUwlTkkl4QnxpMIpt8fFz2O3lfxHOXTYu83%2FZ1GhR%2B95kMsKQGnh5ILMwwanP8O60Y3SIoAu2svTlOyhUXNLiOlXtAK8aeDU9XTvdAWbBJCdB2KhERhabSAXh1EvzOqkGWck6MXqBfclEG0lHVCQUXqaHED&X-Amz-Signature=1f7360277bcfbc33e2f592b2a84f21cef8cf60d76a39d544fb88ca0199ae156b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
