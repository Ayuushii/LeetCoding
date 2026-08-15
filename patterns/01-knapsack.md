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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QW4O3GEY%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQCiu8JnKkWVVj28pzKFVtdBdMIamjL4sDR5Mr%2BCTkKJrgIhAMTrPj1x8oChT5Sb0WMaNZuWfqsaJ535BTU7ARSxaJJ0Kv8DCBEQABoMNjM3NDIzMTgzODA1IgyoUEZZTefZpJdllKQq3APg1PvR1wNlih76x%2FwzCRPwLKxuAp8a4WnLrvQf%2Bl8K%2B9NZIdlu2ctF5IUz3pRnhoaYQ8e9SXkSRnzbtTB9CYdoED9ZPOd9IZ9tBjNehsXZ4Jh6uG%2ByKHsm9H%2F48DBVhhBO3hYxpXaISj8mPTOqv8T7Hi52YMk1oNL%2FhEyjD2CeS8%2B7mH9GJQOYKe54bwlQx%2BAiy9pyJJotioimbQ692Jt5%2FOF%2F%2FaqToTaPtEdVCiAYsw81udn3b52tbApxwySqg71JXmEcIvsovjXBXrY2rc4CdgfISpsR2s2aqXccWJlI7mcG3xyj59fCwrJwGaux5yXEotBgIk64wMlAd%2BQ3EQRDfoHnbUSFmmSykEA%2BXAnCGTd%2FwZ%2BgdXwlfTWKsiz5%2FsFpaDj%2B4r9GIVXOA5ihZDW9Dq9z5IxAQVBmgydoS53OPxe2PuEx9Z4t4h6ciNwbHilS3IXN3GNitsw2NDzzztimJ2Jqif2vzPs12s9L00QzkWZGSg6s4YuDUFsUyxRGX2DY5UEFvXnwGx5W1TEyNrbn7SoNkLmaTEM60tC7ESFhjP3WvMZ3Ek7UIgTxnsDjulUEVoI8cVPfJ9pwrGxqO%2BNI5H789VF0sgejr8NtIjqvDYXxazGwxrPcOkVPKjC%2BtoDUBjqkAXfGgVNqOMfqOgu0FEI8M%2FbR%2BI8SCC%2FjWZlccW%2FBODxg98%2FV7GSiyuWgVEtz9KCGkxUhrblZwqw%2BfiAIonRyIZ0FmKUzlHyQp5AivfWCtfGUUz2djRA%2B%2B25SAsz1df%2BrO4PeWkp7%2F0u%2BXC4s78MwGK%2Fc1xSn4EMVKaTyQEn9KyaVNeD2LrTtCg3LuIrio7YOohM0o8%2BSseIWBFJirVGho2901ZHO&X-Amz-Signature=951df567d7c19528b0de9e98b9f3dd964cf50cdeb036747073f70930e58c005c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QW4O3GEY%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQCiu8JnKkWVVj28pzKFVtdBdMIamjL4sDR5Mr%2BCTkKJrgIhAMTrPj1x8oChT5Sb0WMaNZuWfqsaJ535BTU7ARSxaJJ0Kv8DCBEQABoMNjM3NDIzMTgzODA1IgyoUEZZTefZpJdllKQq3APg1PvR1wNlih76x%2FwzCRPwLKxuAp8a4WnLrvQf%2Bl8K%2B9NZIdlu2ctF5IUz3pRnhoaYQ8e9SXkSRnzbtTB9CYdoED9ZPOd9IZ9tBjNehsXZ4Jh6uG%2ByKHsm9H%2F48DBVhhBO3hYxpXaISj8mPTOqv8T7Hi52YMk1oNL%2FhEyjD2CeS8%2B7mH9GJQOYKe54bwlQx%2BAiy9pyJJotioimbQ692Jt5%2FOF%2F%2FaqToTaPtEdVCiAYsw81udn3b52tbApxwySqg71JXmEcIvsovjXBXrY2rc4CdgfISpsR2s2aqXccWJlI7mcG3xyj59fCwrJwGaux5yXEotBgIk64wMlAd%2BQ3EQRDfoHnbUSFmmSykEA%2BXAnCGTd%2FwZ%2BgdXwlfTWKsiz5%2FsFpaDj%2B4r9GIVXOA5ihZDW9Dq9z5IxAQVBmgydoS53OPxe2PuEx9Z4t4h6ciNwbHilS3IXN3GNitsw2NDzzztimJ2Jqif2vzPs12s9L00QzkWZGSg6s4YuDUFsUyxRGX2DY5UEFvXnwGx5W1TEyNrbn7SoNkLmaTEM60tC7ESFhjP3WvMZ3Ek7UIgTxnsDjulUEVoI8cVPfJ9pwrGxqO%2BNI5H789VF0sgejr8NtIjqvDYXxazGwxrPcOkVPKjC%2BtoDUBjqkAXfGgVNqOMfqOgu0FEI8M%2FbR%2BI8SCC%2FjWZlccW%2FBODxg98%2FV7GSiyuWgVEtz9KCGkxUhrblZwqw%2BfiAIonRyIZ0FmKUzlHyQp5AivfWCtfGUUz2djRA%2B%2B25SAsz1df%2BrO4PeWkp7%2F0u%2BXC4s78MwGK%2Fc1xSn4EMVKaTyQEn9KyaVNeD2LrTtCg3LuIrio7YOohM0o8%2BSseIWBFJirVGho2901ZHO&X-Amz-Signature=6d7c292e7840913a98eb70afab489782f634b1b5e9d6170f786a43c26f4b5580&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QW4O3GEY%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQCiu8JnKkWVVj28pzKFVtdBdMIamjL4sDR5Mr%2BCTkKJrgIhAMTrPj1x8oChT5Sb0WMaNZuWfqsaJ535BTU7ARSxaJJ0Kv8DCBEQABoMNjM3NDIzMTgzODA1IgyoUEZZTefZpJdllKQq3APg1PvR1wNlih76x%2FwzCRPwLKxuAp8a4WnLrvQf%2Bl8K%2B9NZIdlu2ctF5IUz3pRnhoaYQ8e9SXkSRnzbtTB9CYdoED9ZPOd9IZ9tBjNehsXZ4Jh6uG%2ByKHsm9H%2F48DBVhhBO3hYxpXaISj8mPTOqv8T7Hi52YMk1oNL%2FhEyjD2CeS8%2B7mH9GJQOYKe54bwlQx%2BAiy9pyJJotioimbQ692Jt5%2FOF%2F%2FaqToTaPtEdVCiAYsw81udn3b52tbApxwySqg71JXmEcIvsovjXBXrY2rc4CdgfISpsR2s2aqXccWJlI7mcG3xyj59fCwrJwGaux5yXEotBgIk64wMlAd%2BQ3EQRDfoHnbUSFmmSykEA%2BXAnCGTd%2FwZ%2BgdXwlfTWKsiz5%2FsFpaDj%2B4r9GIVXOA5ihZDW9Dq9z5IxAQVBmgydoS53OPxe2PuEx9Z4t4h6ciNwbHilS3IXN3GNitsw2NDzzztimJ2Jqif2vzPs12s9L00QzkWZGSg6s4YuDUFsUyxRGX2DY5UEFvXnwGx5W1TEyNrbn7SoNkLmaTEM60tC7ESFhjP3WvMZ3Ek7UIgTxnsDjulUEVoI8cVPfJ9pwrGxqO%2BNI5H789VF0sgejr8NtIjqvDYXxazGwxrPcOkVPKjC%2BtoDUBjqkAXfGgVNqOMfqOgu0FEI8M%2FbR%2BI8SCC%2FjWZlccW%2FBODxg98%2FV7GSiyuWgVEtz9KCGkxUhrblZwqw%2BfiAIonRyIZ0FmKUzlHyQp5AivfWCtfGUUz2djRA%2B%2B25SAsz1df%2BrO4PeWkp7%2F0u%2BXC4s78MwGK%2Fc1xSn4EMVKaTyQEn9KyaVNeD2LrTtCg3LuIrio7YOohM0o8%2BSseIWBFJirVGho2901ZHO&X-Amz-Signature=b73f198d6532c239d4cf15ac1058ab6966852dd862728b29dde89677444f248f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWQNBG2G%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIGaFTAmyJkUzMYQFZQMmqEXG8bLpa8p68HziPdzttKadAiEA8kAR0vHeX9s%2Fq1irZz7czAg2uWUbNW5E9j%2F7iPi5EUkq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBPKDq2ULG87rXDCxircA98wS0gEqPafaCNivIAGuzdKA9VRcwg30FtwgOGel5YVnTPplX8igFffvUpK4Vvy89oJ23bJ37t4RB54aFmUzrHuufa7I7M5u48iCCgEtnneF1FIP3hK5FnVX043eFDII%2Fel%2FRTUuYbC3hpr%2Bt1pZLHbu4%2BezKyEzvSd%2BQ9M8XDkwT%2FD7Yzgo0PHqqtlX1BnuranTIFhPHwRaU3u98BVIMlmoqEaDasocfoJqCgFYxW4nFApKXqOa9GoYA18DuYMorjXy%2B%2F5NPZiVHyHu4P1LINZ2hpKk0M4NibjaBGHveLON2zrBUrb891%2FpwIbFM1PmaIhOvkH8iP6oxnvH1b%2BJCb4m%2B0L%2B0R1wHdtnRh3Gvb8%2F%2B7J8%2BI2qvKNr%2B3sbZwGRf50bBXzr8%2Bb5Z0VNx2f6j1%2B9T2%2B1oIEheRSUMYri721FUJ%2FdtqDd9MV9ZOzRYrzf8QqWl%2FojTKJPBlswfkCZj8Q8epU8CMPtM%2F%2BWggxsO6Os4uXdtQ4W46ymfcYGHz8eDkj2D56oVYacS8loR3xuqytHGUPZX8PE7qacrEw5w4DFhDc0nHlvGa%2B5qILhBOet0Y%2BJ9o9UQz9hjd3xWVLK985FjfqorJXJB3NO%2Fk%2Fvi8FBEG0cY61uCeUI23vMLi1gNQGOqUBti0Aq7d4G8TmmJl5nn3zOE2ZGcOFMrCVEZW00LndteIDAVJm38o23BNT0Trb8xvtbGNx7%2F5SrKUSvp%2BU4EtA5xn%2B0gxGQ5nqZXZuowpztoLZJE1uAMukCS6dUaAqx7qAQJlsH1b5xkvnMvlH5Ub%2B5LnKpJtnttwtgToggzgwLY394VilmlCUK7DPsF5FIEjsGk1awMqVoeiV5KYjEjxfjaRWtVvI&X-Amz-Signature=2a5d70ef61108229cf4becd324de2745e7edc28631268c0ac9af5b37b0d13ad6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWQNBG2G%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIGaFTAmyJkUzMYQFZQMmqEXG8bLpa8p68HziPdzttKadAiEA8kAR0vHeX9s%2Fq1irZz7czAg2uWUbNW5E9j%2F7iPi5EUkq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBPKDq2ULG87rXDCxircA98wS0gEqPafaCNivIAGuzdKA9VRcwg30FtwgOGel5YVnTPplX8igFffvUpK4Vvy89oJ23bJ37t4RB54aFmUzrHuufa7I7M5u48iCCgEtnneF1FIP3hK5FnVX043eFDII%2Fel%2FRTUuYbC3hpr%2Bt1pZLHbu4%2BezKyEzvSd%2BQ9M8XDkwT%2FD7Yzgo0PHqqtlX1BnuranTIFhPHwRaU3u98BVIMlmoqEaDasocfoJqCgFYxW4nFApKXqOa9GoYA18DuYMorjXy%2B%2F5NPZiVHyHu4P1LINZ2hpKk0M4NibjaBGHveLON2zrBUrb891%2FpwIbFM1PmaIhOvkH8iP6oxnvH1b%2BJCb4m%2B0L%2B0R1wHdtnRh3Gvb8%2F%2B7J8%2BI2qvKNr%2B3sbZwGRf50bBXzr8%2Bb5Z0VNx2f6j1%2B9T2%2B1oIEheRSUMYri721FUJ%2FdtqDd9MV9ZOzRYrzf8QqWl%2FojTKJPBlswfkCZj8Q8epU8CMPtM%2F%2BWggxsO6Os4uXdtQ4W46ymfcYGHz8eDkj2D56oVYacS8loR3xuqytHGUPZX8PE7qacrEw5w4DFhDc0nHlvGa%2B5qILhBOet0Y%2BJ9o9UQz9hjd3xWVLK985FjfqorJXJB3NO%2Fk%2Fvi8FBEG0cY61uCeUI23vMLi1gNQGOqUBti0Aq7d4G8TmmJl5nn3zOE2ZGcOFMrCVEZW00LndteIDAVJm38o23BNT0Trb8xvtbGNx7%2F5SrKUSvp%2BU4EtA5xn%2B0gxGQ5nqZXZuowpztoLZJE1uAMukCS6dUaAqx7qAQJlsH1b5xkvnMvlH5Ub%2B5LnKpJtnttwtgToggzgwLY394VilmlCUK7DPsF5FIEjsGk1awMqVoeiV5KYjEjxfjaRWtVvI&X-Amz-Signature=2215e608106924c7e976a383f10814a5d439f78a01da35737d33e22210b835f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWQNBG2G%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIGaFTAmyJkUzMYQFZQMmqEXG8bLpa8p68HziPdzttKadAiEA8kAR0vHeX9s%2Fq1irZz7czAg2uWUbNW5E9j%2F7iPi5EUkq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBPKDq2ULG87rXDCxircA98wS0gEqPafaCNivIAGuzdKA9VRcwg30FtwgOGel5YVnTPplX8igFffvUpK4Vvy89oJ23bJ37t4RB54aFmUzrHuufa7I7M5u48iCCgEtnneF1FIP3hK5FnVX043eFDII%2Fel%2FRTUuYbC3hpr%2Bt1pZLHbu4%2BezKyEzvSd%2BQ9M8XDkwT%2FD7Yzgo0PHqqtlX1BnuranTIFhPHwRaU3u98BVIMlmoqEaDasocfoJqCgFYxW4nFApKXqOa9GoYA18DuYMorjXy%2B%2F5NPZiVHyHu4P1LINZ2hpKk0M4NibjaBGHveLON2zrBUrb891%2FpwIbFM1PmaIhOvkH8iP6oxnvH1b%2BJCb4m%2B0L%2B0R1wHdtnRh3Gvb8%2F%2B7J8%2BI2qvKNr%2B3sbZwGRf50bBXzr8%2Bb5Z0VNx2f6j1%2B9T2%2B1oIEheRSUMYri721FUJ%2FdtqDd9MV9ZOzRYrzf8QqWl%2FojTKJPBlswfkCZj8Q8epU8CMPtM%2F%2BWggxsO6Os4uXdtQ4W46ymfcYGHz8eDkj2D56oVYacS8loR3xuqytHGUPZX8PE7qacrEw5w4DFhDc0nHlvGa%2B5qILhBOet0Y%2BJ9o9UQz9hjd3xWVLK985FjfqorJXJB3NO%2Fk%2Fvi8FBEG0cY61uCeUI23vMLi1gNQGOqUBti0Aq7d4G8TmmJl5nn3zOE2ZGcOFMrCVEZW00LndteIDAVJm38o23BNT0Trb8xvtbGNx7%2F5SrKUSvp%2BU4EtA5xn%2B0gxGQ5nqZXZuowpztoLZJE1uAMukCS6dUaAqx7qAQJlsH1b5xkvnMvlH5Ub%2B5LnKpJtnttwtgToggzgwLY394VilmlCUK7DPsF5FIEjsGk1awMqVoeiV5KYjEjxfjaRWtVvI&X-Amz-Signature=63b5088e87e824704d97e31bd6af0768659fcb9ab76a3c17ac61af9c49f4f829&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RWQNBG2G%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082553Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIGaFTAmyJkUzMYQFZQMmqEXG8bLpa8p68HziPdzttKadAiEA8kAR0vHeX9s%2Fq1irZz7czAg2uWUbNW5E9j%2F7iPi5EUkq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDBPKDq2ULG87rXDCxircA98wS0gEqPafaCNivIAGuzdKA9VRcwg30FtwgOGel5YVnTPplX8igFffvUpK4Vvy89oJ23bJ37t4RB54aFmUzrHuufa7I7M5u48iCCgEtnneF1FIP3hK5FnVX043eFDII%2Fel%2FRTUuYbC3hpr%2Bt1pZLHbu4%2BezKyEzvSd%2BQ9M8XDkwT%2FD7Yzgo0PHqqtlX1BnuranTIFhPHwRaU3u98BVIMlmoqEaDasocfoJqCgFYxW4nFApKXqOa9GoYA18DuYMorjXy%2B%2F5NPZiVHyHu4P1LINZ2hpKk0M4NibjaBGHveLON2zrBUrb891%2FpwIbFM1PmaIhOvkH8iP6oxnvH1b%2BJCb4m%2B0L%2B0R1wHdtnRh3Gvb8%2F%2B7J8%2BI2qvKNr%2B3sbZwGRf50bBXzr8%2Bb5Z0VNx2f6j1%2B9T2%2B1oIEheRSUMYri721FUJ%2FdtqDd9MV9ZOzRYrzf8QqWl%2FojTKJPBlswfkCZj8Q8epU8CMPtM%2F%2BWggxsO6Os4uXdtQ4W46ymfcYGHz8eDkj2D56oVYacS8loR3xuqytHGUPZX8PE7qacrEw5w4DFhDc0nHlvGa%2B5qILhBOet0Y%2BJ9o9UQz9hjd3xWVLK985FjfqorJXJB3NO%2Fk%2Fvi8FBEG0cY61uCeUI23vMLi1gNQGOqUBti0Aq7d4G8TmmJl5nn3zOE2ZGcOFMrCVEZW00LndteIDAVJm38o23BNT0Trb8xvtbGNx7%2F5SrKUSvp%2BU4EtA5xn%2B0gxGQ5nqZXZuowpztoLZJE1uAMukCS6dUaAqx7qAQJlsH1b5xkvnMvlH5Ub%2B5LnKpJtnttwtgToggzgwLY394VilmlCUK7DPsF5FIEjsGk1awMqVoeiV5KYjEjxfjaRWtVvI&X-Amz-Signature=8f2507aa5a565dbbe3f290ac7eb14dc9f31326a2a4351d01a086de661e80c143&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JEY76XV%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082554Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIF9xQDrhv%2FbxMK1guEMjavVjb4fRL1pe3hL9AYlilBINAiBMCktKrfh4CprcgseHKT728Shk1lLvFvkXEhNiY%2FacDCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMDCAhnlt8wF3fm2OlKtwDwyMzMW%2BAwsTit%2FabNBLMOjM0bAHfBR1U6BUryg%2BydVJO51kCFZaxA4Ulu5XTquPTQpE3mMsEhniw0kJ%2Fo7m%2BcffuELTZqM3cjYNv2h2z2FHh6UQHHPlsvCMWQ9KKMIugEKx62C%2Fw0Ep3C6DIEMaBgwmps7aTQuu9j2l6fgfDlsOQdNo3YagsOI9eq6Hgffw7H4LfwC3fpCxhVSCkBOvJw%2F7cuPnQUfw7ihA7vE53M0%2Byb8Ms31EDtJ7FnHnI%2FzVv0GA9TxXL%2FRjx3QtY9O4dIl1ChhBzafrOeLGdS5BMTzupoUsyt2pZ5uHO7M3RUkgjplph%2Fi%2BRmBe2ULrqCaoFy21P3IgPgBDGACTnRNYNBr0GqgDBYrmkewhQIcdAkgnZ0M2H0FS3%2FzqGsixHrIuYVVr2GjXaxBHbPS%2BHkTzuIcZbD8puXH8Eo7JIo1wmwe%2FcBcjxvawoBphNENEZIcDQQOUS31HgkPLi4x4qQu0cyk900PfyqSJgXUXtreREDN5r4hKBWjWSNBIPOUd%2FATnlipvqR7Xa7XH45zg8vje8LvGJHJyhGWnMDLVGoE1BiXM6TE%2B1nN9lH1BCGEM45IzrfncNC3EvowO8UAqbe9NS%2B9wA%2B%2FWo4vdhYKNfQl8wy7WA1AY6pgFa4P3leKYS0S%2FRae1ZUzhr94AuwY3YWj1fYWs3rdNYeO6jEDs%2FvsqbSLrTBFWRdnUmehj0N7hl%2BZ26MwUF8yFp%2FMCa8ZqgwI21IQJOroLDoXlSAwxc9wLXlPGqwpxZfjtFxZ5QK8sY7GEMRQbv8yAtz9BGzMbqviFLQIZsxpdsPqWsGoZv47oKhFWzyIwmMdk9z4nf0iRJjFQa9gvQZf1FujnmA%2BY7&X-Amz-Signature=6b9c45f875d04418b3644f181d91d19723402d804f97132c4a07430d74cafcc1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SMT7ZVGO%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082554Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDF9OdePD1LRnF3D5HREXlTiv3Dzo72JJrhXGUQmrt%2FKgIgLTJ2qQ%2B5In7Vb%2BKoAhHYs0VQbwJx7Lfjzy7qJ7AKnXkq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDCoaovOy0mpRCxtRGCrcA9EpQjQVImTpwxjrzo%2FcG1c%2F%2BTAnRiiaoM0oNhsY7cHEZbFGKTANHVcdHmbetZFvt%2Bh7W7QmnhZ%2FEPrYEi%2Bs9AI8aoCvIEi76kQPZV%2Bv5Yy18vAqWL%2F06Mq6%2Fo%2FlpVN6X8xINbdXvGxzuUUa%2F1fwOmnKsEMyv%2FF%2FHZdMr%2F6yH9%2Fm80ofTFZaW5ACQZGVGyrNMt6x7bQYzUlnwndBktighW2NjrAo5yVFGWCL5agqJCMsaznhdRNj51g5ZiMA4cbpWxlelO0SdDbwXE7kEUHM7GjTbMzvsidOy82fDtREGRxOkA9JVKHr4vF4m%2BB6LUvaiachllp9L7ZhRnQbflCsMjjQD1tHAe5FGe1xFojuxt5c0s8OL3eMCHQwDn503eTKyqiw4BkvynJSrMMD7gzIWQKSz9JN5HjxBlbGuz9s09VUmoF1AFD%2BgYGUSvnBW1D731FeqYapaxCD3RQnr6HdYcSNt46Ie%2Bz0%2BywzhyYENfoOch7vhwGx%2F0zWSORJeqtJEt%2BzlKRLQTGCUR7GvK0k%2BgJiKBXNxKNVC5JHWPLATqGJYLfCF9WODvEMh%2F42Rhsz3HttS%2F6XQIbBrcOIhoX1Xe6maS4j4cjFbqoS6LaZWoREKVB849Pj9g7pAyvhMK%2B1gNQGOqUBeEA7bOwksL1IcA03syD0R10bQwI7%2BPQOFbeCDjDm6bjkzvzGZPH31e9N%2FzltVt5clEsbx3wd0WCDDWdv9xVh0pnCtirv4NAbNqxHLds3Zi5Efj0H0KGQ2xz3KRqKc2gyyowl7ZI8DkzgUD9IDf2U2MOGuD9UdFcvcwXjPMl06QDP6u2Atgl%2BvJpwFSFTmmzlBH0g0VaYzPNrrCAcNAL6%2BRiFNlNH&X-Amz-Signature=fc145766ea42de41e5f28c42b5d4d34659b42bec34976f1882ee0d506f4aa1d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SMT7ZVGO%2F20260815%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260815T082554Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDF9OdePD1LRnF3D5HREXlTiv3Dzo72JJrhXGUQmrt%2FKgIgLTJ2qQ%2B5In7Vb%2BKoAhHYs0VQbwJx7Lfjzy7qJ7AKnXkq%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDCoaovOy0mpRCxtRGCrcA9EpQjQVImTpwxjrzo%2FcG1c%2F%2BTAnRiiaoM0oNhsY7cHEZbFGKTANHVcdHmbetZFvt%2Bh7W7QmnhZ%2FEPrYEi%2Bs9AI8aoCvIEi76kQPZV%2Bv5Yy18vAqWL%2F06Mq6%2Fo%2FlpVN6X8xINbdXvGxzuUUa%2F1fwOmnKsEMyv%2FF%2FHZdMr%2F6yH9%2Fm80ofTFZaW5ACQZGVGyrNMt6x7bQYzUlnwndBktighW2NjrAo5yVFGWCL5agqJCMsaznhdRNj51g5ZiMA4cbpWxlelO0SdDbwXE7kEUHM7GjTbMzvsidOy82fDtREGRxOkA9JVKHr4vF4m%2BB6LUvaiachllp9L7ZhRnQbflCsMjjQD1tHAe5FGe1xFojuxt5c0s8OL3eMCHQwDn503eTKyqiw4BkvynJSrMMD7gzIWQKSz9JN5HjxBlbGuz9s09VUmoF1AFD%2BgYGUSvnBW1D731FeqYapaxCD3RQnr6HdYcSNt46Ie%2Bz0%2BywzhyYENfoOch7vhwGx%2F0zWSORJeqtJEt%2BzlKRLQTGCUR7GvK0k%2BgJiKBXNxKNVC5JHWPLATqGJYLfCF9WODvEMh%2F42Rhsz3HttS%2F6XQIbBrcOIhoX1Xe6maS4j4cjFbqoS6LaZWoREKVB849Pj9g7pAyvhMK%2B1gNQGOqUBeEA7bOwksL1IcA03syD0R10bQwI7%2BPQOFbeCDjDm6bjkzvzGZPH31e9N%2FzltVt5clEsbx3wd0WCDDWdv9xVh0pnCtirv4NAbNqxHLds3Zi5Efj0H0KGQ2xz3KRqKc2gyyowl7ZI8DkzgUD9IDf2U2MOGuD9UdFcvcwXjPMl06QDP6u2Atgl%2BvJpwFSFTmmzlBH0g0VaYzPNrrCAcNAL6%2BRiFNlNH&X-Amz-Signature=444a66c519ac8f786b9d0f1d6b2be35e420a3711756032bc31df8293c9ffeb56&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
