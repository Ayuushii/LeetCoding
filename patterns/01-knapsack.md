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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z4PWQGG6%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxnvz93ISVb1PZw8vQw12G8d4tcKkS0VQSzlYDYKqxSwIhAIrUD9qNcwqrGc%2FHt1C%2FRPTCMxAeekyI1m5xGbhOAt4rKv8DCGQQABoMNjM3NDIzMTgzODA1IgwIfJ3A75vcDj5yjCkq3ANBXRNz5HA8zatnZJM7fWxDx250suiJKZx4RkJaUm7%2FNLchzMNN%2B2DgOd6yKyOK1cRjRjaOR8%2F8UoZTEjj7bUmezhn85BZEqDfLgEOFdHDriYJKnI861VdYZKMY37XZPLkBgoKeGnUy9J5nUtF3gaHXpH5aYpqQBtq8jkM1zXcu22NioA2YXZobXffJtjQ%2FbNG7VbVufasPBPl84sQ%2B2aM6Fd2lB3WI7EykB3%2BVD31eR7PeM7K9HDZsFvC0NVRAnUexVB7aOkT%2BUfwRnVwIyyLnNzJT6s4NLKtgBU%2BefiLfGZK1QsU1kdU6mdAFbutB3%2BlPYFFlNAkzrVNhYWjeDc2fuJvuZOUwVM9yt6NrbI7kiKrEGivpZPOpb9qVALCTgUyqwpgztFRpHMOtzFqNSm%2FWn1dRKw3ArQsyynN3RdSbsy%2BrTds88vuytuRY%2FQmxGxLPYFnsFFMz%2F8rkco4X3K7E4PnTBB4aLWkvIYIqrVzXjdQbZ22ppso4iZRFyWPI8sJhwM9mpILXdUXPqVUMNqJLTVdQWntIpcX0C3vZdibR7f%2B1dNTCBhGx1jqVWLCFpJjwtbUyv3yezg6%2FvsBYQ0q5LuDkM7E1E%2FOmoCI%2BVVpD1sxg71OKkFFFPIvBCjD3zI7NBjqkAUHpXRch%2Fu3jp6Jwb3wyepVVkGRrCgkBdgV75j%2B%2FS7NUhy8pjlTgGuUJD1NsUd3P5sEiSLODLFldMLMGemLUzfA%2BabYA7R95h93y6jVa6dffX4xWXQ5LL1FtG6XOsVStD3%2BCQVltkVv6rg84yiMNsnDdH%2Fh5gDRiDDBsPsEUJxaa1Htap11LKlTUNZIdBsHajzLekl6rGQPq1Oxubhgd5hUS6QN5&X-Amz-Signature=fc6676bf64e0d634124d3971c7ac140147922d173cfd84ee33cb8f25ea784241&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z4PWQGG6%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxnvz93ISVb1PZw8vQw12G8d4tcKkS0VQSzlYDYKqxSwIhAIrUD9qNcwqrGc%2FHt1C%2FRPTCMxAeekyI1m5xGbhOAt4rKv8DCGQQABoMNjM3NDIzMTgzODA1IgwIfJ3A75vcDj5yjCkq3ANBXRNz5HA8zatnZJM7fWxDx250suiJKZx4RkJaUm7%2FNLchzMNN%2B2DgOd6yKyOK1cRjRjaOR8%2F8UoZTEjj7bUmezhn85BZEqDfLgEOFdHDriYJKnI861VdYZKMY37XZPLkBgoKeGnUy9J5nUtF3gaHXpH5aYpqQBtq8jkM1zXcu22NioA2YXZobXffJtjQ%2FbNG7VbVufasPBPl84sQ%2B2aM6Fd2lB3WI7EykB3%2BVD31eR7PeM7K9HDZsFvC0NVRAnUexVB7aOkT%2BUfwRnVwIyyLnNzJT6s4NLKtgBU%2BefiLfGZK1QsU1kdU6mdAFbutB3%2BlPYFFlNAkzrVNhYWjeDc2fuJvuZOUwVM9yt6NrbI7kiKrEGivpZPOpb9qVALCTgUyqwpgztFRpHMOtzFqNSm%2FWn1dRKw3ArQsyynN3RdSbsy%2BrTds88vuytuRY%2FQmxGxLPYFnsFFMz%2F8rkco4X3K7E4PnTBB4aLWkvIYIqrVzXjdQbZ22ppso4iZRFyWPI8sJhwM9mpILXdUXPqVUMNqJLTVdQWntIpcX0C3vZdibR7f%2B1dNTCBhGx1jqVWLCFpJjwtbUyv3yezg6%2FvsBYQ0q5LuDkM7E1E%2FOmoCI%2BVVpD1sxg71OKkFFFPIvBCjD3zI7NBjqkAUHpXRch%2Fu3jp6Jwb3wyepVVkGRrCgkBdgV75j%2B%2FS7NUhy8pjlTgGuUJD1NsUd3P5sEiSLODLFldMLMGemLUzfA%2BabYA7R95h93y6jVa6dffX4xWXQ5LL1FtG6XOsVStD3%2BCQVltkVv6rg84yiMNsnDdH%2Fh5gDRiDDBsPsEUJxaa1Htap11LKlTUNZIdBsHajzLekl6rGQPq1Oxubhgd5hUS6QN5&X-Amz-Signature=41fd2025c7a9eeabb0e8c30b6e92dcef1394728b63a17aec8a2116cbdc17ed08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z4PWQGG6%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxnvz93ISVb1PZw8vQw12G8d4tcKkS0VQSzlYDYKqxSwIhAIrUD9qNcwqrGc%2FHt1C%2FRPTCMxAeekyI1m5xGbhOAt4rKv8DCGQQABoMNjM3NDIzMTgzODA1IgwIfJ3A75vcDj5yjCkq3ANBXRNz5HA8zatnZJM7fWxDx250suiJKZx4RkJaUm7%2FNLchzMNN%2B2DgOd6yKyOK1cRjRjaOR8%2F8UoZTEjj7bUmezhn85BZEqDfLgEOFdHDriYJKnI861VdYZKMY37XZPLkBgoKeGnUy9J5nUtF3gaHXpH5aYpqQBtq8jkM1zXcu22NioA2YXZobXffJtjQ%2FbNG7VbVufasPBPl84sQ%2B2aM6Fd2lB3WI7EykB3%2BVD31eR7PeM7K9HDZsFvC0NVRAnUexVB7aOkT%2BUfwRnVwIyyLnNzJT6s4NLKtgBU%2BefiLfGZK1QsU1kdU6mdAFbutB3%2BlPYFFlNAkzrVNhYWjeDc2fuJvuZOUwVM9yt6NrbI7kiKrEGivpZPOpb9qVALCTgUyqwpgztFRpHMOtzFqNSm%2FWn1dRKw3ArQsyynN3RdSbsy%2BrTds88vuytuRY%2FQmxGxLPYFnsFFMz%2F8rkco4X3K7E4PnTBB4aLWkvIYIqrVzXjdQbZ22ppso4iZRFyWPI8sJhwM9mpILXdUXPqVUMNqJLTVdQWntIpcX0C3vZdibR7f%2B1dNTCBhGx1jqVWLCFpJjwtbUyv3yezg6%2FvsBYQ0q5LuDkM7E1E%2FOmoCI%2BVVpD1sxg71OKkFFFPIvBCjD3zI7NBjqkAUHpXRch%2Fu3jp6Jwb3wyepVVkGRrCgkBdgV75j%2B%2FS7NUhy8pjlTgGuUJD1NsUd3P5sEiSLODLFldMLMGemLUzfA%2BabYA7R95h93y6jVa6dffX4xWXQ5LL1FtG6XOsVStD3%2BCQVltkVv6rg84yiMNsnDdH%2Fh5gDRiDDBsPsEUJxaa1Htap11LKlTUNZIdBsHajzLekl6rGQPq1Oxubhgd5hUS6QN5&X-Amz-Signature=4090ba5a6ef410738890771dd4dd3a460dbe37019fea2e031acb93e9236b3766&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVS5LJSW%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAaS0vAxI2tw7WFhhp%2BzO0UKaszF%2BeXStzsnWZVD3EuaAiEA4Q%2FUXvUW6Glc%2BfvR0fnijPOQEH6IWbYoUpi4cb5kgY0q%2FwMIZBAAGgw2Mzc0MjMxODM4MDUiDAfvTNvrDPSJb4Sg2SrcA5IDNL0b22YYcwAh33dkkinLaYUuoISaYZTmrvAFjET6DvP44pir2C%2FbEMK8urVIV7N5h0IDiJbLLdttk58yfbTZ7Rc1zXUDw6%2Bx7BKWOukQUtgMrqVZTCbdHL3F%2FIZnFmTYHQ6fo3o%2B7wFbzcVnYIbo4H7XWJBk%2FSIqtcpYz4j%2Fng%2FjY1Hs%2Bjqs6W7V4bOM8EoRHJhUAzPSmZH7Z7cP7MeSEvANUOXcOaLGeyypxlZPkqXdIE0%2Fwna8vUfDtm6Pqg0kr9fIy%2FOIaCBw7hHI8QTtyC%2Fs0BNPm8VKW9aSuNWEK%2BpYXo69aARsgBSPgmN9EvACvlcxjJVpRWxV8T%2F5RxELxeBuWeoVc0lPeqyOMv5ZAkevD70jFTjGp0nAFIsLrC2HschnZB%2B9jmQ%2FhSedJFeL%2FtRj1Nh8WCZoZWzUlZ6s%2FmAlOjyiF5%2FoJyCrG02wkfxuQqEIN8SQkzom6NcAaxPa%2BpVhUZR8%2FQHwSalbkdV9OEH24w5FcCLnCymLZ4VgQl5wn%2Fiz6Ndd4U7mhxAIgZ0U1z7V0DFtpQYYYCRpwcU%2FFHLTgBnTT1b8On4XA1YfuSJ0DWDPpK1Tqbm81M5r2weTxiMYzcVVwnkPERuZ9SovpDA5Go%2FIosFdb2LwMKDNjs0GOqUBkxI6bBVoAS5BGPkZza1xMjxlFRAMkuTWvc7hc3IB4B0ijuVdftny7fSPM5yJlwoUR2C7rEMrdWshfc%2Bc%2Bt6PDwr%2FZy4F9sOIkSMnlmrsOCBO5naRtJNQhU6JDZTQWjAIhmQASmls05GE4TcFGvmGBCgDaN0aD73pIj2m3tTgRqszl%2B%2BvojrX2FO8r9u8ceF3zeEQmQi6QNk6sug9bq5zYev3Y3nX&X-Amz-Signature=00b3341aeaf1d6bb546817508ab36a524d014de4f6248a30a37d47a81417730d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVS5LJSW%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAaS0vAxI2tw7WFhhp%2BzO0UKaszF%2BeXStzsnWZVD3EuaAiEA4Q%2FUXvUW6Glc%2BfvR0fnijPOQEH6IWbYoUpi4cb5kgY0q%2FwMIZBAAGgw2Mzc0MjMxODM4MDUiDAfvTNvrDPSJb4Sg2SrcA5IDNL0b22YYcwAh33dkkinLaYUuoISaYZTmrvAFjET6DvP44pir2C%2FbEMK8urVIV7N5h0IDiJbLLdttk58yfbTZ7Rc1zXUDw6%2Bx7BKWOukQUtgMrqVZTCbdHL3F%2FIZnFmTYHQ6fo3o%2B7wFbzcVnYIbo4H7XWJBk%2FSIqtcpYz4j%2Fng%2FjY1Hs%2Bjqs6W7V4bOM8EoRHJhUAzPSmZH7Z7cP7MeSEvANUOXcOaLGeyypxlZPkqXdIE0%2Fwna8vUfDtm6Pqg0kr9fIy%2FOIaCBw7hHI8QTtyC%2Fs0BNPm8VKW9aSuNWEK%2BpYXo69aARsgBSPgmN9EvACvlcxjJVpRWxV8T%2F5RxELxeBuWeoVc0lPeqyOMv5ZAkevD70jFTjGp0nAFIsLrC2HschnZB%2B9jmQ%2FhSedJFeL%2FtRj1Nh8WCZoZWzUlZ6s%2FmAlOjyiF5%2FoJyCrG02wkfxuQqEIN8SQkzom6NcAaxPa%2BpVhUZR8%2FQHwSalbkdV9OEH24w5FcCLnCymLZ4VgQl5wn%2Fiz6Ndd4U7mhxAIgZ0U1z7V0DFtpQYYYCRpwcU%2FFHLTgBnTT1b8On4XA1YfuSJ0DWDPpK1Tqbm81M5r2weTxiMYzcVVwnkPERuZ9SovpDA5Go%2FIosFdb2LwMKDNjs0GOqUBkxI6bBVoAS5BGPkZza1xMjxlFRAMkuTWvc7hc3IB4B0ijuVdftny7fSPM5yJlwoUR2C7rEMrdWshfc%2Bc%2Bt6PDwr%2FZy4F9sOIkSMnlmrsOCBO5naRtJNQhU6JDZTQWjAIhmQASmls05GE4TcFGvmGBCgDaN0aD73pIj2m3tTgRqszl%2B%2BvojrX2FO8r9u8ceF3zeEQmQi6QNk6sug9bq5zYev3Y3nX&X-Amz-Signature=7908c0c8f76894c33e1acf8c56d6f86da6c679e84ccc080ce8ca4fc70dba9db5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVS5LJSW%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAaS0vAxI2tw7WFhhp%2BzO0UKaszF%2BeXStzsnWZVD3EuaAiEA4Q%2FUXvUW6Glc%2BfvR0fnijPOQEH6IWbYoUpi4cb5kgY0q%2FwMIZBAAGgw2Mzc0MjMxODM4MDUiDAfvTNvrDPSJb4Sg2SrcA5IDNL0b22YYcwAh33dkkinLaYUuoISaYZTmrvAFjET6DvP44pir2C%2FbEMK8urVIV7N5h0IDiJbLLdttk58yfbTZ7Rc1zXUDw6%2Bx7BKWOukQUtgMrqVZTCbdHL3F%2FIZnFmTYHQ6fo3o%2B7wFbzcVnYIbo4H7XWJBk%2FSIqtcpYz4j%2Fng%2FjY1Hs%2Bjqs6W7V4bOM8EoRHJhUAzPSmZH7Z7cP7MeSEvANUOXcOaLGeyypxlZPkqXdIE0%2Fwna8vUfDtm6Pqg0kr9fIy%2FOIaCBw7hHI8QTtyC%2Fs0BNPm8VKW9aSuNWEK%2BpYXo69aARsgBSPgmN9EvACvlcxjJVpRWxV8T%2F5RxELxeBuWeoVc0lPeqyOMv5ZAkevD70jFTjGp0nAFIsLrC2HschnZB%2B9jmQ%2FhSedJFeL%2FtRj1Nh8WCZoZWzUlZ6s%2FmAlOjyiF5%2FoJyCrG02wkfxuQqEIN8SQkzom6NcAaxPa%2BpVhUZR8%2FQHwSalbkdV9OEH24w5FcCLnCymLZ4VgQl5wn%2Fiz6Ndd4U7mhxAIgZ0U1z7V0DFtpQYYYCRpwcU%2FFHLTgBnTT1b8On4XA1YfuSJ0DWDPpK1Tqbm81M5r2weTxiMYzcVVwnkPERuZ9SovpDA5Go%2FIosFdb2LwMKDNjs0GOqUBkxI6bBVoAS5BGPkZza1xMjxlFRAMkuTWvc7hc3IB4B0ijuVdftny7fSPM5yJlwoUR2C7rEMrdWshfc%2Bc%2Bt6PDwr%2FZy4F9sOIkSMnlmrsOCBO5naRtJNQhU6JDZTQWjAIhmQASmls05GE4TcFGvmGBCgDaN0aD73pIj2m3tTgRqszl%2B%2BvojrX2FO8r9u8ceF3zeEQmQi6QNk6sug9bq5zYev3Y3nX&X-Amz-Signature=e47eb13bb6ca4b5552468677d35f11fa7135de17fbbc8a1a20d838928a64bf25&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVS5LJSW%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAaS0vAxI2tw7WFhhp%2BzO0UKaszF%2BeXStzsnWZVD3EuaAiEA4Q%2FUXvUW6Glc%2BfvR0fnijPOQEH6IWbYoUpi4cb5kgY0q%2FwMIZBAAGgw2Mzc0MjMxODM4MDUiDAfvTNvrDPSJb4Sg2SrcA5IDNL0b22YYcwAh33dkkinLaYUuoISaYZTmrvAFjET6DvP44pir2C%2FbEMK8urVIV7N5h0IDiJbLLdttk58yfbTZ7Rc1zXUDw6%2Bx7BKWOukQUtgMrqVZTCbdHL3F%2FIZnFmTYHQ6fo3o%2B7wFbzcVnYIbo4H7XWJBk%2FSIqtcpYz4j%2Fng%2FjY1Hs%2Bjqs6W7V4bOM8EoRHJhUAzPSmZH7Z7cP7MeSEvANUOXcOaLGeyypxlZPkqXdIE0%2Fwna8vUfDtm6Pqg0kr9fIy%2FOIaCBw7hHI8QTtyC%2Fs0BNPm8VKW9aSuNWEK%2BpYXo69aARsgBSPgmN9EvACvlcxjJVpRWxV8T%2F5RxELxeBuWeoVc0lPeqyOMv5ZAkevD70jFTjGp0nAFIsLrC2HschnZB%2B9jmQ%2FhSedJFeL%2FtRj1Nh8WCZoZWzUlZ6s%2FmAlOjyiF5%2FoJyCrG02wkfxuQqEIN8SQkzom6NcAaxPa%2BpVhUZR8%2FQHwSalbkdV9OEH24w5FcCLnCymLZ4VgQl5wn%2Fiz6Ndd4U7mhxAIgZ0U1z7V0DFtpQYYYCRpwcU%2FFHLTgBnTT1b8On4XA1YfuSJ0DWDPpK1Tqbm81M5r2weTxiMYzcVVwnkPERuZ9SovpDA5Go%2FIosFdb2LwMKDNjs0GOqUBkxI6bBVoAS5BGPkZza1xMjxlFRAMkuTWvc7hc3IB4B0ijuVdftny7fSPM5yJlwoUR2C7rEMrdWshfc%2Bc%2Bt6PDwr%2FZy4F9sOIkSMnlmrsOCBO5naRtJNQhU6JDZTQWjAIhmQASmls05GE4TcFGvmGBCgDaN0aD73pIj2m3tTgRqszl%2B%2BvojrX2FO8r9u8ceF3zeEQmQi6QNk6sug9bq5zYev3Y3nX&X-Amz-Signature=89b81773515a9e34da1b7a3b917301745a901fe556c6c7c6c56c1cd699575897&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZPJIGI4E%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083056Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCyw5d9iJzj9PdkJy0vON%2FePTanez6A5toXLz3J%2B5n%2FEAIhAPGH%2Bio%2FROsUbrX9wRVJeBwH77oy6QTOKoR6mbbIb5CAKv8DCGQQABoMNjM3NDIzMTgzODA1IgzJ4IC6325PMD%2Fo7V8q3ANLF0npDsBHQM1uMbwpcFlvQZ4i7mvUu%2FmNkc3RagqYHMXkOZ2devWCucftgE2SsPpUc3jpeUERtmekmfoqmN9vwCE6OVz9ZiVcJfT%2BOwmSPzpaZGNTPMOk5PMd5ELvJ%2BREM92zOZNO%2BQhdUnZ7KHfl5egncff80Q3ai71g3VTUwn1cfWY6apGapctG0lSPmdbkm3EFZc7YvkLHh2xcwX3EkXJGoVWwh6dFW%2BMnKuiOHskVO1hKNupgPVzI1y9hYtwfVps7ukdUHGYbTpkhq%2F8feb7Mvz8zjn4tZ1wJ7xM0ahvB6d%2Fn82FSAs4l6w1oyGw%2BQN3DjyyIg0wjLAA1ZOxGQ%2FYaqV0SbLEAJUggHlUcURpOMkqTx9Cwvd7iH9UB7E4HlxboveFA2yxwo425Krxq2mQjRfnOjDeScAOb5ebVuQrMasg%2FaEIM%2FHxnP%2FdhQHyvPeeW8bz%2Fuu3RAFziumykX5C8tPVx%2Ft1fwOxLV0E900jNXhH9GOXWYLgOfqKczQDGoOTl8RAvWi82GieNLC66dqZiXdsV6jo0GWgbJKnOmDJ90AEKT%2BBaHKFZVEmZuacz4yop3GqfmLbnGVm77t4YocIXkdXxZTn1b5fER1f0U9D86Hun4OchLFcXljCAzY7NBjqkAYiumVqWEb5RvRc9OvoMx5a%2FUaSlIm0FMMaYmdgfRjI1%2F6ab9kAmfZj1kv8vPjzXzkdqV6vR7uGV5y05HJoHw3ZLOHrFeNFKe9a2fjWRyzPSc3tqWac4o%2BhNJZ%2BTBq%2BkeS0PFRFoxfqMnixL7S7B2x7fO5RW2N7WGEEcAk7%2FpqMFtJ5eb4%2BPIRHG1rRsVHbYW4nJXljw42F4FoAqhWY%2FWOcS%2FJQ%2F&X-Amz-Signature=47bf1e5f2913e24c2a2d4f4e81af347568465944151dc4248273fd9428d6b64c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662HGUZJQN%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083056Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCV9cwcB0vWW1s9gETh0V%2Bgc%2BTSrNerLP8W2U49YLaHNQIgGuyZnCAJxnU8jc%2BXMoUT%2FziakKjnpFKcFhvXRLWctSEq%2FwMIZBAAGgw2Mzc0MjMxODM4MDUiDFpBnFCmi1rT8lKuvSrcA94%2FkATvbLocNcKzHRmfcIDcFZlMBMho3Po0JFbKnhoVPv2oRxvBoX88501ty%2B4mMF1ucNbvx2XrldQRl7DpCVlZRBNBG9cZ8qpaf6Ss7IM7AUlbKw9GVyu8UWTw%2BMbpQ%2Fb9Xr51%2BuXq6Gx8%2BG9TPtDlyfS1S%2FywUuykcrxHbB%2BLx2Ce8KFo8hKj78D4FgUnJdyvyIEuTOprEfY%2FvQgF0zpUnzbjm1XY58yJPwYg7562Xgj4MzL%2FaTLMIQSglwtwV8sjZRLljO6uR3DQt73cpTB6EC10ANZ3r7wgT99mdrwerEn%2FmmnGUmQecPV1h0ixJCeiiu%2Bcb1fqQAkw%2FZeLQFBLW6bBpKtzT33mXO5BLMCuIHOH0eEuu6I1h1NgTXk2a%2Fqnu45695IYU9A9%2FhG0v0i5D9hwy2nJocHWgWhZ4jPFFYNgXwE0aEZXjczXi%2BB%2BmiYAgokanW9o6jOIKK32N0QVdt1NMArKKCSxtnTgqsKfFzg%2Fv2ma7fsHKg2fMCzVWkINIrGs1%2Flkz5Ev4dKMgDEhiw%2FufxIP0s9NqI27QGCU8AjteLa4KMJ8Tbrc%2Bet47VXCqYp1V2VQUOE5u12FTJ6tLaUG8VMBYjybr2XTZwBCmnbubSTVIrkiRQ1RMOvNjs0GOqUBuGm8lnxHDpEC4yYWZ2d3PNQPuBDrvT0bFSxsf8oa%2BxwhzAXJdzqr37IEbNL%2FyvgL3QGbJ%2BmiGuw36qX%2FlKn%2BMp76dEBw8QgZsZIlzg0Fcdg30Tt081%2BuNNxbwnGIm3uVhqJjlE4Ucb0A7DU18Xt1S6RW1qafhXW%2B6SXIB2wP8hdNT1GTjse1sluKxNA4q1KMBEQ%2FzHZ1JrtmYtjUhR1%2FM5NrKNFu&X-Amz-Signature=3eeb9d4eb26d0dbb6250192d210006a6f3f679437d7ad6219891852b9b7c6988&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662HGUZJQN%2F20260301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260301T083056Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCV9cwcB0vWW1s9gETh0V%2Bgc%2BTSrNerLP8W2U49YLaHNQIgGuyZnCAJxnU8jc%2BXMoUT%2FziakKjnpFKcFhvXRLWctSEq%2FwMIZBAAGgw2Mzc0MjMxODM4MDUiDFpBnFCmi1rT8lKuvSrcA94%2FkATvbLocNcKzHRmfcIDcFZlMBMho3Po0JFbKnhoVPv2oRxvBoX88501ty%2B4mMF1ucNbvx2XrldQRl7DpCVlZRBNBG9cZ8qpaf6Ss7IM7AUlbKw9GVyu8UWTw%2BMbpQ%2Fb9Xr51%2BuXq6Gx8%2BG9TPtDlyfS1S%2FywUuykcrxHbB%2BLx2Ce8KFo8hKj78D4FgUnJdyvyIEuTOprEfY%2FvQgF0zpUnzbjm1XY58yJPwYg7562Xgj4MzL%2FaTLMIQSglwtwV8sjZRLljO6uR3DQt73cpTB6EC10ANZ3r7wgT99mdrwerEn%2FmmnGUmQecPV1h0ixJCeiiu%2Bcb1fqQAkw%2FZeLQFBLW6bBpKtzT33mXO5BLMCuIHOH0eEuu6I1h1NgTXk2a%2Fqnu45695IYU9A9%2FhG0v0i5D9hwy2nJocHWgWhZ4jPFFYNgXwE0aEZXjczXi%2BB%2BmiYAgokanW9o6jOIKK32N0QVdt1NMArKKCSxtnTgqsKfFzg%2Fv2ma7fsHKg2fMCzVWkINIrGs1%2Flkz5Ev4dKMgDEhiw%2FufxIP0s9NqI27QGCU8AjteLa4KMJ8Tbrc%2Bet47VXCqYp1V2VQUOE5u12FTJ6tLaUG8VMBYjybr2XTZwBCmnbubSTVIrkiRQ1RMOvNjs0GOqUBuGm8lnxHDpEC4yYWZ2d3PNQPuBDrvT0bFSxsf8oa%2BxwhzAXJdzqr37IEbNL%2FyvgL3QGbJ%2BmiGuw36qX%2FlKn%2BMp76dEBw8QgZsZIlzg0Fcdg30Tt081%2BuNNxbwnGIm3uVhqJjlE4Ucb0A7DU18Xt1S6RW1qafhXW%2B6SXIB2wP8hdNT1GTjse1sluKxNA4q1KMBEQ%2FzHZ1JrtmYtjUhR1%2FM5NrKNFu&X-Amz-Signature=c5485e2998d9b7f4be3e5e9cb7e47ec3f372b2f16d9bc5353d55bd8ce6f2708e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
