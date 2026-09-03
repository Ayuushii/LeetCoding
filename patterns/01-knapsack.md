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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UZE5YRGO%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123647Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJHMEUCIB2N9i85b9Flp4zLvnWHrVD5G6rmHa3qdpW%2BbGYx%2B%2F%2F5AiEAnfBg%2BXfad4Oqj0rhkRNgNn2xWHJq9iKBV%2FQSjZnBeeQqiAQI3P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHGIfxTL952psTHrmyrcAw7hS4s1mE1cjeuoc4o3UDyuD%2Fl9LdNzv9tWXs7RO%2FbjbHBhNM4xAbWb8NATDN%2Fb5Zed8D5IHguNgiQeUQs3OLfjAgQl%2FKRzo6QL9L2SQBYVtId%2F7yDg0GS1BX1JgI4cCo1Zp%2BhTOkuMyGmzhPn6N4UrH1v%2B%2BkPVRTzvi1wRYS2F6wyQ8uRQsV%2FSGlcP61gJdtSG2RW5nG241abzvkuodR7xFZABBoNZYThv7gfj%2FsF9uEArQotJ9g2iI4Daf85WqLHtjwEEn0XrkTe6mdbWIkjvpOh5FNs79C08b1yIk4X4RectrO18L8Q1j6X%2BHXd9qiXBkYfZVUN4llVLJFfbwor5SvQ%2BjQ%2FI131K8sFukq3X80DMLln49vzIq5pcctoOhDjnvWDrDXMEXWL0ouAIjgt%2Fd%2B89z%2B%2BFAWsuCx3lhc9viRa01HR%2B4JsPmVHaJZoQphOrnaqRJDqQCG4bxAiOWVoU2wN%2FhZS7SGxAMkox8Qyq2h69BBht4NbAi76Kw8f%2FYXtzalMobayVYpbSOUbGVx9%2FzaQFr7ErQiykgL7R3fakjquEMpyVPHpb9e8cp6L297UPx8eUkCIfRJmSIuNrZ9a3uuPPQEVxB%2Bi3BgJAM2dBKGt9KbtrTKgX1pGRMIWq5dQGOqUBBxts2DctSm3Ni1bjSeMki%2FVw6IHEvtUcWiUOaUfgRDvuRFWB5Sqv8purGsRsOE93Uv2Ahl6H0MlGArNbHRzcoLnfBBxzW7lSiRgonc0uk8zP4j7DTXGIU3aMFrJFb4%2B57VxkvwDKbHlVk0%2B8J7JCY0%2FAweHxV%2BFeClFdNg8ShnXaC1wDSlQHLxu%2FmLCzJtupuxOj%2FwqO%2FlhXJI8vSSqKy1Hou%2BCO&X-Amz-Signature=42e86c3f556ab3f6c4e4853ebcd8a89db27c75917ba38a0c5e9e950aa338dfcf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UZE5YRGO%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123647Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJHMEUCIB2N9i85b9Flp4zLvnWHrVD5G6rmHa3qdpW%2BbGYx%2B%2F%2F5AiEAnfBg%2BXfad4Oqj0rhkRNgNn2xWHJq9iKBV%2FQSjZnBeeQqiAQI3P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHGIfxTL952psTHrmyrcAw7hS4s1mE1cjeuoc4o3UDyuD%2Fl9LdNzv9tWXs7RO%2FbjbHBhNM4xAbWb8NATDN%2Fb5Zed8D5IHguNgiQeUQs3OLfjAgQl%2FKRzo6QL9L2SQBYVtId%2F7yDg0GS1BX1JgI4cCo1Zp%2BhTOkuMyGmzhPn6N4UrH1v%2B%2BkPVRTzvi1wRYS2F6wyQ8uRQsV%2FSGlcP61gJdtSG2RW5nG241abzvkuodR7xFZABBoNZYThv7gfj%2FsF9uEArQotJ9g2iI4Daf85WqLHtjwEEn0XrkTe6mdbWIkjvpOh5FNs79C08b1yIk4X4RectrO18L8Q1j6X%2BHXd9qiXBkYfZVUN4llVLJFfbwor5SvQ%2BjQ%2FI131K8sFukq3X80DMLln49vzIq5pcctoOhDjnvWDrDXMEXWL0ouAIjgt%2Fd%2B89z%2B%2BFAWsuCx3lhc9viRa01HR%2B4JsPmVHaJZoQphOrnaqRJDqQCG4bxAiOWVoU2wN%2FhZS7SGxAMkox8Qyq2h69BBht4NbAi76Kw8f%2FYXtzalMobayVYpbSOUbGVx9%2FzaQFr7ErQiykgL7R3fakjquEMpyVPHpb9e8cp6L297UPx8eUkCIfRJmSIuNrZ9a3uuPPQEVxB%2Bi3BgJAM2dBKGt9KbtrTKgX1pGRMIWq5dQGOqUBBxts2DctSm3Ni1bjSeMki%2FVw6IHEvtUcWiUOaUfgRDvuRFWB5Sqv8purGsRsOE93Uv2Ahl6H0MlGArNbHRzcoLnfBBxzW7lSiRgonc0uk8zP4j7DTXGIU3aMFrJFb4%2B57VxkvwDKbHlVk0%2B8J7JCY0%2FAweHxV%2BFeClFdNg8ShnXaC1wDSlQHLxu%2FmLCzJtupuxOj%2FwqO%2FlhXJI8vSSqKy1Hou%2BCO&X-Amz-Signature=dd2c14dbcefd00e047c8fd1b34d0991b8c3ac5e95b93c478f47f6ccaab138188&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UZE5YRGO%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123647Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJHMEUCIB2N9i85b9Flp4zLvnWHrVD5G6rmHa3qdpW%2BbGYx%2B%2F%2F5AiEAnfBg%2BXfad4Oqj0rhkRNgNn2xWHJq9iKBV%2FQSjZnBeeQqiAQI3P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHGIfxTL952psTHrmyrcAw7hS4s1mE1cjeuoc4o3UDyuD%2Fl9LdNzv9tWXs7RO%2FbjbHBhNM4xAbWb8NATDN%2Fb5Zed8D5IHguNgiQeUQs3OLfjAgQl%2FKRzo6QL9L2SQBYVtId%2F7yDg0GS1BX1JgI4cCo1Zp%2BhTOkuMyGmzhPn6N4UrH1v%2B%2BkPVRTzvi1wRYS2F6wyQ8uRQsV%2FSGlcP61gJdtSG2RW5nG241abzvkuodR7xFZABBoNZYThv7gfj%2FsF9uEArQotJ9g2iI4Daf85WqLHtjwEEn0XrkTe6mdbWIkjvpOh5FNs79C08b1yIk4X4RectrO18L8Q1j6X%2BHXd9qiXBkYfZVUN4llVLJFfbwor5SvQ%2BjQ%2FI131K8sFukq3X80DMLln49vzIq5pcctoOhDjnvWDrDXMEXWL0ouAIjgt%2Fd%2B89z%2B%2BFAWsuCx3lhc9viRa01HR%2B4JsPmVHaJZoQphOrnaqRJDqQCG4bxAiOWVoU2wN%2FhZS7SGxAMkox8Qyq2h69BBht4NbAi76Kw8f%2FYXtzalMobayVYpbSOUbGVx9%2FzaQFr7ErQiykgL7R3fakjquEMpyVPHpb9e8cp6L297UPx8eUkCIfRJmSIuNrZ9a3uuPPQEVxB%2Bi3BgJAM2dBKGt9KbtrTKgX1pGRMIWq5dQGOqUBBxts2DctSm3Ni1bjSeMki%2FVw6IHEvtUcWiUOaUfgRDvuRFWB5Sqv8purGsRsOE93Uv2Ahl6H0MlGArNbHRzcoLnfBBxzW7lSiRgonc0uk8zP4j7DTXGIU3aMFrJFb4%2B57VxkvwDKbHlVk0%2B8J7JCY0%2FAweHxV%2BFeClFdNg8ShnXaC1wDSlQHLxu%2FmLCzJtupuxOj%2FwqO%2FlhXJI8vSSqKy1Hou%2BCO&X-Amz-Signature=7018c09789b49badbf726058568edafd2ce9bbcc5d9263a6aabe1483e7efefa3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UILI5OF%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJGMEQCIEWJmz%2FcZI8gGANvzAHPTmvoUDSQ%2B%2B9LQLpypw2Re6FAAiBGp01vtxGCutY7V8E6voPwWR%2FhtyRrjxi9%2FlzP%2BMjeMCqIBAjc%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8Ky%2BmbMbK2kDa9T%2BKtwDVNtKjEn9%2BVuDSo6zVfSkBEDlU0cvsScM%2B10mxtf8%2BtinZiSTVKHMfzPJdwsuHkiYyewFiwVcRIjq8xVZWtkyB758fUKUt2BON5eeNCik4qygtc5qKB3bnBjnyJ%2BRWsMnRN5%2FWMslmv20ofznqdyL%2FeDjBH62TGEGW%2FWeaB26B3d4oJr8NtT0Eq6uzw1TvNCg%2BG%2BuSrtGKvZagkShs8KFdlKZDV38pmGSO7n5qP4%2BYhejqqDKS53b0Isu9RVrycyTMWVW8UIb3LVXu6das%2BQ6efKxQZ8ZB4JLpL6JzL6bIAACBcQuokLwwRH56oCQ3O0%2FQ35NrDUgK3B7yD9%2BRjMZlRD7UVERqHL6lAKClukKishta1gO7D3koX%2BSuYtHkWFsWEvNeNHczk6VKOwWDZS94PD64ErpomfYGXH5RX8W1AYhxbudBbN3N3ZyBb8NxSQMCyzaczT3NgaK7GGkQlA5Rz3CrrOZPYu%2FmfbOpmPOftEYTyYq%2BHM1h7DyMa%2BnkNOmbXAuRJ0uVhIk9H6dy6jIvEYNrorMviwdz6jwaZKYoQBFrXdWZVX6FkHt0Wd3%2BFzcnMG7Rg4OdSk9HcenzBAFLaBCIaNB6nDClUSxeZK%2F4n2ZYVyhFsdpjm57Mfow0qjl1AY6pgEVwTg59w3%2B0DN434rCvCA6vWsA%2BXMeo4dzmtlE8KaGXTccPMex7BRvssa2IS3uvas1knUwbZr24SXO6%2FELQAvgr%2BtvMmvzODY%2F8%2Ba8sI9TQSZrPySC53fFLMkr9zvmIHdPcKsl5GaKjgUgdnJ6VPKoRTH4rZKUMTM0tsroTwr7nrt4qr212k9%2Fp01we2oCJrjKgE8HK9Jmo6q16Fp6JWQXS%2Bn6R1x6&X-Amz-Signature=2e63a639bf4da1436142a7da3a397df5d2b691f58ef98288f39dacd723514045&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UILI5OF%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJGMEQCIEWJmz%2FcZI8gGANvzAHPTmvoUDSQ%2B%2B9LQLpypw2Re6FAAiBGp01vtxGCutY7V8E6voPwWR%2FhtyRrjxi9%2FlzP%2BMjeMCqIBAjc%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8Ky%2BmbMbK2kDa9T%2BKtwDVNtKjEn9%2BVuDSo6zVfSkBEDlU0cvsScM%2B10mxtf8%2BtinZiSTVKHMfzPJdwsuHkiYyewFiwVcRIjq8xVZWtkyB758fUKUt2BON5eeNCik4qygtc5qKB3bnBjnyJ%2BRWsMnRN5%2FWMslmv20ofznqdyL%2FeDjBH62TGEGW%2FWeaB26B3d4oJr8NtT0Eq6uzw1TvNCg%2BG%2BuSrtGKvZagkShs8KFdlKZDV38pmGSO7n5qP4%2BYhejqqDKS53b0Isu9RVrycyTMWVW8UIb3LVXu6das%2BQ6efKxQZ8ZB4JLpL6JzL6bIAACBcQuokLwwRH56oCQ3O0%2FQ35NrDUgK3B7yD9%2BRjMZlRD7UVERqHL6lAKClukKishta1gO7D3koX%2BSuYtHkWFsWEvNeNHczk6VKOwWDZS94PD64ErpomfYGXH5RX8W1AYhxbudBbN3N3ZyBb8NxSQMCyzaczT3NgaK7GGkQlA5Rz3CrrOZPYu%2FmfbOpmPOftEYTyYq%2BHM1h7DyMa%2BnkNOmbXAuRJ0uVhIk9H6dy6jIvEYNrorMviwdz6jwaZKYoQBFrXdWZVX6FkHt0Wd3%2BFzcnMG7Rg4OdSk9HcenzBAFLaBCIaNB6nDClUSxeZK%2F4n2ZYVyhFsdpjm57Mfow0qjl1AY6pgEVwTg59w3%2B0DN434rCvCA6vWsA%2BXMeo4dzmtlE8KaGXTccPMex7BRvssa2IS3uvas1knUwbZr24SXO6%2FELQAvgr%2BtvMmvzODY%2F8%2Ba8sI9TQSZrPySC53fFLMkr9zvmIHdPcKsl5GaKjgUgdnJ6VPKoRTH4rZKUMTM0tsroTwr7nrt4qr212k9%2Fp01we2oCJrjKgE8HK9Jmo6q16Fp6JWQXS%2Bn6R1x6&X-Amz-Signature=4797f3c705d9a145618c503cb028dc0c35151154eb44c6f4f133e5b26c73ef72&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UILI5OF%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJGMEQCIEWJmz%2FcZI8gGANvzAHPTmvoUDSQ%2B%2B9LQLpypw2Re6FAAiBGp01vtxGCutY7V8E6voPwWR%2FhtyRrjxi9%2FlzP%2BMjeMCqIBAjc%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8Ky%2BmbMbK2kDa9T%2BKtwDVNtKjEn9%2BVuDSo6zVfSkBEDlU0cvsScM%2B10mxtf8%2BtinZiSTVKHMfzPJdwsuHkiYyewFiwVcRIjq8xVZWtkyB758fUKUt2BON5eeNCik4qygtc5qKB3bnBjnyJ%2BRWsMnRN5%2FWMslmv20ofznqdyL%2FeDjBH62TGEGW%2FWeaB26B3d4oJr8NtT0Eq6uzw1TvNCg%2BG%2BuSrtGKvZagkShs8KFdlKZDV38pmGSO7n5qP4%2BYhejqqDKS53b0Isu9RVrycyTMWVW8UIb3LVXu6das%2BQ6efKxQZ8ZB4JLpL6JzL6bIAACBcQuokLwwRH56oCQ3O0%2FQ35NrDUgK3B7yD9%2BRjMZlRD7UVERqHL6lAKClukKishta1gO7D3koX%2BSuYtHkWFsWEvNeNHczk6VKOwWDZS94PD64ErpomfYGXH5RX8W1AYhxbudBbN3N3ZyBb8NxSQMCyzaczT3NgaK7GGkQlA5Rz3CrrOZPYu%2FmfbOpmPOftEYTyYq%2BHM1h7DyMa%2BnkNOmbXAuRJ0uVhIk9H6dy6jIvEYNrorMviwdz6jwaZKYoQBFrXdWZVX6FkHt0Wd3%2BFzcnMG7Rg4OdSk9HcenzBAFLaBCIaNB6nDClUSxeZK%2F4n2ZYVyhFsdpjm57Mfow0qjl1AY6pgEVwTg59w3%2B0DN434rCvCA6vWsA%2BXMeo4dzmtlE8KaGXTccPMex7BRvssa2IS3uvas1knUwbZr24SXO6%2FELQAvgr%2BtvMmvzODY%2F8%2Ba8sI9TQSZrPySC53fFLMkr9zvmIHdPcKsl5GaKjgUgdnJ6VPKoRTH4rZKUMTM0tsroTwr7nrt4qr212k9%2Fp01we2oCJrjKgE8HK9Jmo6q16Fp6JWQXS%2Bn6R1x6&X-Amz-Signature=6f7996653809f958b759adda03c860af3bb59ab7230a7c777f67783a42ea9b4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666UILI5OF%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJGMEQCIEWJmz%2FcZI8gGANvzAHPTmvoUDSQ%2B%2B9LQLpypw2Re6FAAiBGp01vtxGCutY7V8E6voPwWR%2FhtyRrjxi9%2FlzP%2BMjeMCqIBAjc%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8Ky%2BmbMbK2kDa9T%2BKtwDVNtKjEn9%2BVuDSo6zVfSkBEDlU0cvsScM%2B10mxtf8%2BtinZiSTVKHMfzPJdwsuHkiYyewFiwVcRIjq8xVZWtkyB758fUKUt2BON5eeNCik4qygtc5qKB3bnBjnyJ%2BRWsMnRN5%2FWMslmv20ofznqdyL%2FeDjBH62TGEGW%2FWeaB26B3d4oJr8NtT0Eq6uzw1TvNCg%2BG%2BuSrtGKvZagkShs8KFdlKZDV38pmGSO7n5qP4%2BYhejqqDKS53b0Isu9RVrycyTMWVW8UIb3LVXu6das%2BQ6efKxQZ8ZB4JLpL6JzL6bIAACBcQuokLwwRH56oCQ3O0%2FQ35NrDUgK3B7yD9%2BRjMZlRD7UVERqHL6lAKClukKishta1gO7D3koX%2BSuYtHkWFsWEvNeNHczk6VKOwWDZS94PD64ErpomfYGXH5RX8W1AYhxbudBbN3N3ZyBb8NxSQMCyzaczT3NgaK7GGkQlA5Rz3CrrOZPYu%2FmfbOpmPOftEYTyYq%2BHM1h7DyMa%2BnkNOmbXAuRJ0uVhIk9H6dy6jIvEYNrorMviwdz6jwaZKYoQBFrXdWZVX6FkHt0Wd3%2BFzcnMG7Rg4OdSk9HcenzBAFLaBCIaNB6nDClUSxeZK%2F4n2ZYVyhFsdpjm57Mfow0qjl1AY6pgEVwTg59w3%2B0DN434rCvCA6vWsA%2BXMeo4dzmtlE8KaGXTccPMex7BRvssa2IS3uvas1knUwbZr24SXO6%2FELQAvgr%2BtvMmvzODY%2F8%2Ba8sI9TQSZrPySC53fFLMkr9zvmIHdPcKsl5GaKjgUgdnJ6VPKoRTH4rZKUMTM0tsroTwr7nrt4qr212k9%2Fp01we2oCJrjKgE8HK9Jmo6q16Fp6JWQXS%2Bn6R1x6&X-Amz-Signature=38641764df2b4d78968b3a7096049bfefbea7d5eaebad66cbe6a512f98f32c0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666TC3HO5B%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJHMEUCIQCpEAcAO%2Bg2DBs6HpaUPsRBMynsmiBeZB1nR2n2Q0LCyAIgYMSN6uUhPPiHuTLQOTwq2baYxWG81AkF%2FM4Yoeg%2B0SQqiAQI3P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMuto1m8ZsM0BIH4sCrcA3ThE8laeZevm%2BeNjuugO%2F4Z7pjCpohdeBDgCRCNZs2mM6zb3CDWmdGJQ%2FkSPkc8koYGgFrjewsZvK4Uoo5WC1%2FXTpxM1hpi%2BiRTcwG24odjKC4vDKfUjLMdNOdH4g9LL643zen4EO3d52XK%2BIw1LuT4y4ezxCkGUDWbKhhcyoRAQUccRfwrh4MwvVR9TYdvH4C07kJPauOfeLxxwFEeLUFOtqV1NEf%2BDR8Au9bZWIBOmMtvltODmnwgANPCH89uqInQjMKU5251BvTHs60N1VJFgYq4Qc8%2FyfAU4c3sbvLHoe8QpBFuCJkaCFLwHPM8wKAxc49JSAZLHrQiinAK8sQzIgffcznjvJpNxgShndyiEnAD6af%2FF26caa4kF8H%2Bx3mD3ChLnqrDFaE2vKVkq7kouR7gIEEJx3I7DKZUX9O4SnW9a3vi3Ct2ehbauyFgKMC56ilXDe%2FEaBhwQL6LQkOR%2BGcHdFiN2WdT4cHsOrk5tcaz49DssOCiBV35fjGOepJvoHzW3%2BiKItRxvkUil2ONaF7nzICTzueICoylrcCRKub88twSwCai662iVSFmV78ZBUVO8zfC8%2BM38i8BlZvhDzjdDVPNgiK%2FirOwThVtcTfZKsVE%2BLIEBvQxMLyq5dQGOqUBB3ebCmVixBVtBNECVI%2FzzXSwexQrpFaPxvzH9ixhLHyLJEucZ2TWjJ%2BEbmPwopOqi88WzmHmom7Mg%2F1or6bJdjWLdk08%2BdyLHHR7Abc2609mC8Uc7eT4Cqp4zkXxetgTfDVNsMqyZoxzrsbxeRmvQLrTAdi21PelFGYj0155aNJ8szkGnD0COFpaRddsxt9IE0r1YdhULq5PO04czto7OeUOXv9P&X-Amz-Signature=7a052b4ea01257f6218acf7cad5e1f4632c9d49ff6680ef344d4fb9790356ce6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KBCMSDL%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJIMEYCIQD9g79hz577ax6ELHxlOLUWdUJkq1qA50YaTrA%2FjToQiwIhALDBe0WkponLh9sRymoVS%2FPB%2BkjRKE2JpcTXYFKfs5S9KogECNz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyiiHqKEXLajXjp2Ccq3AMxYKvz2L9ijnVh7YeT%2F8VL%2FYABwj%2FXUgQ5sMzgz1U0P6c8jI3VGrm%2BL%2F7vRTH%2FiHdEl1ukxFk191PW8THIvIAb3yn1pzXwC5OdiH9srUy1YRcgt1uDtrAjodHTkSzflHiBHH8GXznnd4q6OUq%2BaVTMliYJqBNrJUXgsIBj5mUyBNXLrcJ0qea0Y84ZwTgzj%2B80COqtKMeijpYvY%2Fk5WJC9gK4NbK9uJTmwedTOy2yYJOMoOnv6dF%2B7D4%2BhxKmSUxEU1HVNb86EWSMy07McYHhuvMDGR15U8T8Ku6%2FrYTqr1bF6zCcq3f3y3QkcgW5Hj09Zs4t%2BcC4tR6mSP7suZznK3yY78SHFsJHFiLQFhd36trRJ36kuzzZa04Tk5KmKtia0pmeW%2FYyS049On03D%2BBcO%2F8dhRFcmQbWEa6xiWXlrx4k2xOJg05NJDIqfrL5XXOdefdKY7wYw8lZRra06KfzEUrf6rZ%2FlJruKJp6QxqNBkbfpFtmTpOZrvkMMEU7P07QYlkX0L4jfQ8CTBygeeVJNHBi4AcL%2F5rp4zFcCnADS9N4QbRGQAA53QTUOIJXCYtCCaEL5BECbWg5u22M3raGk3SiUijeHGDi60BMUtNp9rX%2BLd1mCSqPIt0prAjCvqOXUBjqkAabsLkWTi%2FMF6%2B4VyjRfAVhU83%2BsvABuoEDaCUyi62PO5AHmQe9gFh%2FKUQ1TYBq41a8VdySNJdPJJioKzMvrT62qdVS7suJHYPMfyvbEjNBcMe7kUPZaunJoUq9erY4ThyZ4obE2t6DAU1i89GlQeLUEmQ6Ivt4dW04gqqGUkQ9rDbHgORICxcmt4ZhK882VEmpJUUYaktOvKxRmEIEP4D4oo2JI&X-Amz-Signature=67515e9184f745adcd5e8a4325a25728b2619b0b4c2fc99d8300982782a38a95&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KBCMSDL%2F20260903%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260903T123649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBMaCXVzLXdlc3QtMiJIMEYCIQD9g79hz577ax6ELHxlOLUWdUJkq1qA50YaTrA%2FjToQiwIhALDBe0WkponLh9sRymoVS%2FPB%2BkjRKE2JpcTXYFKfs5S9KogECNz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyiiHqKEXLajXjp2Ccq3AMxYKvz2L9ijnVh7YeT%2F8VL%2FYABwj%2FXUgQ5sMzgz1U0P6c8jI3VGrm%2BL%2F7vRTH%2FiHdEl1ukxFk191PW8THIvIAb3yn1pzXwC5OdiH9srUy1YRcgt1uDtrAjodHTkSzflHiBHH8GXznnd4q6OUq%2BaVTMliYJqBNrJUXgsIBj5mUyBNXLrcJ0qea0Y84ZwTgzj%2B80COqtKMeijpYvY%2Fk5WJC9gK4NbK9uJTmwedTOy2yYJOMoOnv6dF%2B7D4%2BhxKmSUxEU1HVNb86EWSMy07McYHhuvMDGR15U8T8Ku6%2FrYTqr1bF6zCcq3f3y3QkcgW5Hj09Zs4t%2BcC4tR6mSP7suZznK3yY78SHFsJHFiLQFhd36trRJ36kuzzZa04Tk5KmKtia0pmeW%2FYyS049On03D%2BBcO%2F8dhRFcmQbWEa6xiWXlrx4k2xOJg05NJDIqfrL5XXOdefdKY7wYw8lZRra06KfzEUrf6rZ%2FlJruKJp6QxqNBkbfpFtmTpOZrvkMMEU7P07QYlkX0L4jfQ8CTBygeeVJNHBi4AcL%2F5rp4zFcCnADS9N4QbRGQAA53QTUOIJXCYtCCaEL5BECbWg5u22M3raGk3SiUijeHGDi60BMUtNp9rX%2BLd1mCSqPIt0prAjCvqOXUBjqkAabsLkWTi%2FMF6%2B4VyjRfAVhU83%2BsvABuoEDaCUyi62PO5AHmQe9gFh%2FKUQ1TYBq41a8VdySNJdPJJioKzMvrT62qdVS7suJHYPMfyvbEjNBcMe7kUPZaunJoUq9erY4ThyZ4obE2t6DAU1i89GlQeLUEmQ6Ivt4dW04gqqGUkQ9rDbHgORICxcmt4ZhK882VEmpJUUYaktOvKxRmEIEP4D4oo2JI&X-Amz-Signature=b649c6e3b994f47b6f539318c9a7454eabfd5585fd683a42b9e266361c975baf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
