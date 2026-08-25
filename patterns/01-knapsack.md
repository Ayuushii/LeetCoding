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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633TZLOXA%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDRbOXikhXE6ohq0JuIwROMScubo78uB1ew3%2FVjCNx6KAIgSPcRSCxJOuF%2BsCtz1mQUFHMKn3KZbhPJj0%2FiSp11opgq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDOCWsPuLGiUjluzckCrcA3NhGccPRi1fXDcE5pkql%2FK2hhwA7TIgxH45V462WihcGxRwejkAv%2BpU%2BrYTRT0cVJxTmRT6Ec1Q63xYZJKm9pMv0N142IwIYBWwJkvt6o%2FUDN5i%2BH41Aq4gkZIy4eR3sHOYb4TpOv%2FxQEiwjagrN7CmJphlCFWWr0YHfCyMwI%2BMrDSHD63bY8YV2BqMXh9OmJODBhnKjYEeBMcPN%2Bd%2F0P3Ie5kKbcp%2FwAngkZhIVyIWcdOIeryGugx8yIhtWk9mDQ5rveF8wArU9kKbf5A3ZIq3roIxixrbKTb2Nntz1m6cu9%2F%2B1nnE1tcCDfRBpF%2FEjV8E4FGtmzSPUhWjNpzcnvGFdl%2FmqrfTddK8QcU3B8rSG%2FKTTMydVSxoFF0mUwgHVuFUgVVNEi22x04mKrfvvCwHn7iQ%2Fc8NIWsU8bT5S6nJF96GK5LzOS%2Fw8X%2B6Y8bMCBHCLdU%2BI07elysUG5sw8Jr6O3BvkFngI9OAzQKyiXp6%2Bvx2hkVMc3iXqqEDgRvmolwZO0bS5orIB89Gg%2B7Nc6pzOgAgc90srSyX690KXDy92I5SokcgE1T97eFbHSYaJO%2FxFKdM01iLDJaP22G%2BgEx%2BvN4Z%2F8LE5mKmH5ciZRtD%2FfZIECHiKE2%2FDaDnMOeXtdQGOqUBMWTPQ4gDGFrUw4kDTT7N7%2Bx5nWCG7RfzwRMD%2F4%2BJ6nr6xmhHIB88vbc0j6BdYWo%2FfR9WkaD0%2F3ayoRoKbxI%2BXW3jacMwPsXtgM4uA0zZBSjkmqxmJZthYzdmdl4EIDeQnENsIYQxOX6iP9u2M%2B5rOkjbmDdKq090POWVx%2FUguvEYxa3MCNMawE8EJigAn06xRQMp68eDNN1LqT%2FBW%2Fo2fKkRIWeQ&X-Amz-Signature=7acbd36f8be85b88a032a7065263ec14e30e8c62b80562eedd4461f4bb36c246&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633TZLOXA%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDRbOXikhXE6ohq0JuIwROMScubo78uB1ew3%2FVjCNx6KAIgSPcRSCxJOuF%2BsCtz1mQUFHMKn3KZbhPJj0%2FiSp11opgq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDOCWsPuLGiUjluzckCrcA3NhGccPRi1fXDcE5pkql%2FK2hhwA7TIgxH45V462WihcGxRwejkAv%2BpU%2BrYTRT0cVJxTmRT6Ec1Q63xYZJKm9pMv0N142IwIYBWwJkvt6o%2FUDN5i%2BH41Aq4gkZIy4eR3sHOYb4TpOv%2FxQEiwjagrN7CmJphlCFWWr0YHfCyMwI%2BMrDSHD63bY8YV2BqMXh9OmJODBhnKjYEeBMcPN%2Bd%2F0P3Ie5kKbcp%2FwAngkZhIVyIWcdOIeryGugx8yIhtWk9mDQ5rveF8wArU9kKbf5A3ZIq3roIxixrbKTb2Nntz1m6cu9%2F%2B1nnE1tcCDfRBpF%2FEjV8E4FGtmzSPUhWjNpzcnvGFdl%2FmqrfTddK8QcU3B8rSG%2FKTTMydVSxoFF0mUwgHVuFUgVVNEi22x04mKrfvvCwHn7iQ%2Fc8NIWsU8bT5S6nJF96GK5LzOS%2Fw8X%2B6Y8bMCBHCLdU%2BI07elysUG5sw8Jr6O3BvkFngI9OAzQKyiXp6%2Bvx2hkVMc3iXqqEDgRvmolwZO0bS5orIB89Gg%2B7Nc6pzOgAgc90srSyX690KXDy92I5SokcgE1T97eFbHSYaJO%2FxFKdM01iLDJaP22G%2BgEx%2BvN4Z%2F8LE5mKmH5ciZRtD%2FfZIECHiKE2%2FDaDnMOeXtdQGOqUBMWTPQ4gDGFrUw4kDTT7N7%2Bx5nWCG7RfzwRMD%2F4%2BJ6nr6xmhHIB88vbc0j6BdYWo%2FfR9WkaD0%2F3ayoRoKbxI%2BXW3jacMwPsXtgM4uA0zZBSjkmqxmJZthYzdmdl4EIDeQnENsIYQxOX6iP9u2M%2B5rOkjbmDdKq090POWVx%2FUguvEYxa3MCNMawE8EJigAn06xRQMp68eDNN1LqT%2FBW%2Fo2fKkRIWeQ&X-Amz-Signature=db75067bd519363bed6bcef6b40088bea9c2428ef84ae48131f501370a176d0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633TZLOXA%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQDRbOXikhXE6ohq0JuIwROMScubo78uB1ew3%2FVjCNx6KAIgSPcRSCxJOuF%2BsCtz1mQUFHMKn3KZbhPJj0%2FiSp11opgq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDOCWsPuLGiUjluzckCrcA3NhGccPRi1fXDcE5pkql%2FK2hhwA7TIgxH45V462WihcGxRwejkAv%2BpU%2BrYTRT0cVJxTmRT6Ec1Q63xYZJKm9pMv0N142IwIYBWwJkvt6o%2FUDN5i%2BH41Aq4gkZIy4eR3sHOYb4TpOv%2FxQEiwjagrN7CmJphlCFWWr0YHfCyMwI%2BMrDSHD63bY8YV2BqMXh9OmJODBhnKjYEeBMcPN%2Bd%2F0P3Ie5kKbcp%2FwAngkZhIVyIWcdOIeryGugx8yIhtWk9mDQ5rveF8wArU9kKbf5A3ZIq3roIxixrbKTb2Nntz1m6cu9%2F%2B1nnE1tcCDfRBpF%2FEjV8E4FGtmzSPUhWjNpzcnvGFdl%2FmqrfTddK8QcU3B8rSG%2FKTTMydVSxoFF0mUwgHVuFUgVVNEi22x04mKrfvvCwHn7iQ%2Fc8NIWsU8bT5S6nJF96GK5LzOS%2Fw8X%2B6Y8bMCBHCLdU%2BI07elysUG5sw8Jr6O3BvkFngI9OAzQKyiXp6%2Bvx2hkVMc3iXqqEDgRvmolwZO0bS5orIB89Gg%2B7Nc6pzOgAgc90srSyX690KXDy92I5SokcgE1T97eFbHSYaJO%2FxFKdM01iLDJaP22G%2BgEx%2BvN4Z%2F8LE5mKmH5ciZRtD%2FfZIECHiKE2%2FDaDnMOeXtdQGOqUBMWTPQ4gDGFrUw4kDTT7N7%2Bx5nWCG7RfzwRMD%2F4%2BJ6nr6xmhHIB88vbc0j6BdYWo%2FfR9WkaD0%2F3ayoRoKbxI%2BXW3jacMwPsXtgM4uA0zZBSjkmqxmJZthYzdmdl4EIDeQnENsIYQxOX6iP9u2M%2B5rOkjbmDdKq090POWVx%2FUguvEYxa3MCNMawE8EJigAn06xRQMp68eDNN1LqT%2FBW%2Fo2fKkRIWeQ&X-Amz-Signature=b9e814a3496896076d26af3249e2f06b6bb989ea1bfa5ddc7bee325e8b55541f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466456DR3BR%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCejgHdoyGLrdD5Pnvwlqkflb4yXBX0qj8840TrMp3DxAIhANiWj2Hm3%2F%2BBTXzZRND%2FTWVo3omRxCbvRzOyr8OwX805Kv8DCAEQABoMNjM3NDIzMTgzODA1IgxKgVQZnGiw9JQduGEq3ANobFp%2BPvwss04ypMI2k28V7Vyi0PvfHpPm2z4ZmSOB%2FGrIkkL93MMNacQe14E3%2BOsFMpKqCGO4GZM%2FKHAMydVerGka%2BDjFBFl1tqtiqrU3rJtsKolkF7Ji1zSVNWzSN8Pk9yI4wcHiJbOZ06PrfHkHBtqem6AfzqbGuz2mvswhzXCHaKiWLLi5kCH47LGkUDL1ulSChl5LhJ9yQRt9y7bigJ10T6R3mNcrwul8%2FHNGIdU4vPqhvw0HAo2g6x%2B4oWtuFfcYDcG5KbQ9CzMonp0g5AMkM9eDq9AicUniw%2B%2FY0gcdufI5EMOhtFN4Ku%2F3eeSlUH57QcFjT9K7PMhUBi59gkbPTcO7syQkb%2F%2FTMdia%2BG0zeXQ%2FocW8Mih6eZwKTn6HYL%2ByJGx72OUc1T6amx6WuK%2ByNKW8SVRX74UMzw6XO14wn07srNp1uJnahBawZbP5GRdKdLpA7bNw7Q1yZmcv%2F%2BnAoMmbKapz%2BfFrl3knaBRZ%2FYwXDP4kzfm%2BuBE3%2BH3Z1xPXR41gIg9eCw9vIIKtXWZiJrXVDIzODrRoRV0U8%2BIoVPIArgfVV2GN5J%2BqzeREdYl6jR8M3laHKJa0spgTe%2FCyebNdvuUmAjSUe4aIBXDf%2FbnqeMtJtumAIzCKm7XUBjqkAZ%2FpU62CqMi8MvqK42C0bNAk0W42a2Ax62X6lc5R6Z0I3gsFNMinQdh8le5OEe1IWdutm1QHjbF219TkltJbhnybOr2v0eXBJjZXZSQamrogWXpllRjTJGe%2Bvgwsp7WhTURLr6BXguwbIaZrrT3uc%2F4skfAoBKnxGGk%2FJDxpDGmGfP0u8mJqWdcHwZnbwWWk18gfwzdCIrlxw1p0vBk4ahZBhfGy&X-Amz-Signature=f933294f869eeb1aa27f567e8577c01b8029e7b7797af7bb74e8ac19e5e163ed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466456DR3BR%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCejgHdoyGLrdD5Pnvwlqkflb4yXBX0qj8840TrMp3DxAIhANiWj2Hm3%2F%2BBTXzZRND%2FTWVo3omRxCbvRzOyr8OwX805Kv8DCAEQABoMNjM3NDIzMTgzODA1IgxKgVQZnGiw9JQduGEq3ANobFp%2BPvwss04ypMI2k28V7Vyi0PvfHpPm2z4ZmSOB%2FGrIkkL93MMNacQe14E3%2BOsFMpKqCGO4GZM%2FKHAMydVerGka%2BDjFBFl1tqtiqrU3rJtsKolkF7Ji1zSVNWzSN8Pk9yI4wcHiJbOZ06PrfHkHBtqem6AfzqbGuz2mvswhzXCHaKiWLLi5kCH47LGkUDL1ulSChl5LhJ9yQRt9y7bigJ10T6R3mNcrwul8%2FHNGIdU4vPqhvw0HAo2g6x%2B4oWtuFfcYDcG5KbQ9CzMonp0g5AMkM9eDq9AicUniw%2B%2FY0gcdufI5EMOhtFN4Ku%2F3eeSlUH57QcFjT9K7PMhUBi59gkbPTcO7syQkb%2F%2FTMdia%2BG0zeXQ%2FocW8Mih6eZwKTn6HYL%2ByJGx72OUc1T6amx6WuK%2ByNKW8SVRX74UMzw6XO14wn07srNp1uJnahBawZbP5GRdKdLpA7bNw7Q1yZmcv%2F%2BnAoMmbKapz%2BfFrl3knaBRZ%2FYwXDP4kzfm%2BuBE3%2BH3Z1xPXR41gIg9eCw9vIIKtXWZiJrXVDIzODrRoRV0U8%2BIoVPIArgfVV2GN5J%2BqzeREdYl6jR8M3laHKJa0spgTe%2FCyebNdvuUmAjSUe4aIBXDf%2FbnqeMtJtumAIzCKm7XUBjqkAZ%2FpU62CqMi8MvqK42C0bNAk0W42a2Ax62X6lc5R6Z0I3gsFNMinQdh8le5OEe1IWdutm1QHjbF219TkltJbhnybOr2v0eXBJjZXZSQamrogWXpllRjTJGe%2Bvgwsp7WhTURLr6BXguwbIaZrrT3uc%2F4skfAoBKnxGGk%2FJDxpDGmGfP0u8mJqWdcHwZnbwWWk18gfwzdCIrlxw1p0vBk4ahZBhfGy&X-Amz-Signature=22a106df1f728a165933e369a4ff2ba09d5eec9050a849b31f836b09aab41998&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466456DR3BR%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCejgHdoyGLrdD5Pnvwlqkflb4yXBX0qj8840TrMp3DxAIhANiWj2Hm3%2F%2BBTXzZRND%2FTWVo3omRxCbvRzOyr8OwX805Kv8DCAEQABoMNjM3NDIzMTgzODA1IgxKgVQZnGiw9JQduGEq3ANobFp%2BPvwss04ypMI2k28V7Vyi0PvfHpPm2z4ZmSOB%2FGrIkkL93MMNacQe14E3%2BOsFMpKqCGO4GZM%2FKHAMydVerGka%2BDjFBFl1tqtiqrU3rJtsKolkF7Ji1zSVNWzSN8Pk9yI4wcHiJbOZ06PrfHkHBtqem6AfzqbGuz2mvswhzXCHaKiWLLi5kCH47LGkUDL1ulSChl5LhJ9yQRt9y7bigJ10T6R3mNcrwul8%2FHNGIdU4vPqhvw0HAo2g6x%2B4oWtuFfcYDcG5KbQ9CzMonp0g5AMkM9eDq9AicUniw%2B%2FY0gcdufI5EMOhtFN4Ku%2F3eeSlUH57QcFjT9K7PMhUBi59gkbPTcO7syQkb%2F%2FTMdia%2BG0zeXQ%2FocW8Mih6eZwKTn6HYL%2ByJGx72OUc1T6amx6WuK%2ByNKW8SVRX74UMzw6XO14wn07srNp1uJnahBawZbP5GRdKdLpA7bNw7Q1yZmcv%2F%2BnAoMmbKapz%2BfFrl3knaBRZ%2FYwXDP4kzfm%2BuBE3%2BH3Z1xPXR41gIg9eCw9vIIKtXWZiJrXVDIzODrRoRV0U8%2BIoVPIArgfVV2GN5J%2BqzeREdYl6jR8M3laHKJa0spgTe%2FCyebNdvuUmAjSUe4aIBXDf%2FbnqeMtJtumAIzCKm7XUBjqkAZ%2FpU62CqMi8MvqK42C0bNAk0W42a2Ax62X6lc5R6Z0I3gsFNMinQdh8le5OEe1IWdutm1QHjbF219TkltJbhnybOr2v0eXBJjZXZSQamrogWXpllRjTJGe%2Bvgwsp7WhTURLr6BXguwbIaZrrT3uc%2F4skfAoBKnxGGk%2FJDxpDGmGfP0u8mJqWdcHwZnbwWWk18gfwzdCIrlxw1p0vBk4ahZBhfGy&X-Amz-Signature=4efc226e39a3b55dccd5cd2348d76495bb9206ecc506d2a78a18e98a59d71653&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466456DR3BR%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJIMEYCIQCejgHdoyGLrdD5Pnvwlqkflb4yXBX0qj8840TrMp3DxAIhANiWj2Hm3%2F%2BBTXzZRND%2FTWVo3omRxCbvRzOyr8OwX805Kv8DCAEQABoMNjM3NDIzMTgzODA1IgxKgVQZnGiw9JQduGEq3ANobFp%2BPvwss04ypMI2k28V7Vyi0PvfHpPm2z4ZmSOB%2FGrIkkL93MMNacQe14E3%2BOsFMpKqCGO4GZM%2FKHAMydVerGka%2BDjFBFl1tqtiqrU3rJtsKolkF7Ji1zSVNWzSN8Pk9yI4wcHiJbOZ06PrfHkHBtqem6AfzqbGuz2mvswhzXCHaKiWLLi5kCH47LGkUDL1ulSChl5LhJ9yQRt9y7bigJ10T6R3mNcrwul8%2FHNGIdU4vPqhvw0HAo2g6x%2B4oWtuFfcYDcG5KbQ9CzMonp0g5AMkM9eDq9AicUniw%2B%2FY0gcdufI5EMOhtFN4Ku%2F3eeSlUH57QcFjT9K7PMhUBi59gkbPTcO7syQkb%2F%2FTMdia%2BG0zeXQ%2FocW8Mih6eZwKTn6HYL%2ByJGx72OUc1T6amx6WuK%2ByNKW8SVRX74UMzw6XO14wn07srNp1uJnahBawZbP5GRdKdLpA7bNw7Q1yZmcv%2F%2BnAoMmbKapz%2BfFrl3knaBRZ%2FYwXDP4kzfm%2BuBE3%2BH3Z1xPXR41gIg9eCw9vIIKtXWZiJrXVDIzODrRoRV0U8%2BIoVPIArgfVV2GN5J%2BqzeREdYl6jR8M3laHKJa0spgTe%2FCyebNdvuUmAjSUe4aIBXDf%2FbnqeMtJtumAIzCKm7XUBjqkAZ%2FpU62CqMi8MvqK42C0bNAk0W42a2Ax62X6lc5R6Z0I3gsFNMinQdh8le5OEe1IWdutm1QHjbF219TkltJbhnybOr2v0eXBJjZXZSQamrogWXpllRjTJGe%2Bvgwsp7WhTURLr6BXguwbIaZrrT3uc%2F4skfAoBKnxGGk%2FJDxpDGmGfP0u8mJqWdcHwZnbwWWk18gfwzdCIrlxw1p0vBk4ahZBhfGy&X-Amz-Signature=adf8f71b5cc85caca0c57327623066354492e5c15a0de5caefc58e402b9abe3e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ROCPMI47%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCICyqGJz%2BpeyqJjrVcyuJbdSdg8k3p156KLvYDEGgxR8ZAiEAs55DKsPEFAK08L3A3x%2BcZ%2FtOsuJ4LwCDck57gCglS8cq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDKiy0VtCGXAkR2bTCSrcAyQq9n7fsLds3n7TlPVBZSLNchdz8g0zVg6MP0WaC92YldvGpobpbNHZ7wQyW8kUFF7Z5h5RQo4ff086ltwnl%2BsxIO%2BQ2JrV7oznqVHkn814OsXbUyAnNJSuLHZ5DoDY82sXXgQdMm7PQ5Gbg7Y4cuusCInFDJpgwuSrcPBXOoHfC458WG4kYzsni3SwHYkyZ4JxWoRC6VXNoTjgqH4h7LqRXAFt6HnXv6%2BNsk0KYmTNkID5ZNv80Rnhr%2Bh%2BpbjIPDyKpKx0Gr88utF1rvfa6OZ2rMO6JOg6YYUU6hK1B85zfrUy70xOVuNtvjkD3GoUtEAYAqIuhzXdM4XD49gewL%2FwMcIV2kBmpoKDXwwU82IpzZPdRWiljzV%2F9FFlTl%2BBS2COdobx2dLkgbyh5RvhebEkmukAvDazm6hTXklzCQ3JdRvOPimJ1sbxX8pEBS%2Fy526B0A0XpDfXUyak327ivUAboX59YM3kT%2BrBtJy%2Fv8jzgFjyUzy94UuwwRycCeWFIQ1hGtmBJwCy%2BjiFyOfR6bIlDlql5ZdOz9EV0mEu7LqFoHTg9txr%2FZhuy6H6eVEpVj0lVWfjB%2BanUamN6jdFGcFH7KY8ZFw8P9fYxGjrO8a7D84lDoHsEwAAG%2Bc%2BMI%2BatdQGOqUBtnb0MDmsypSIurt8dcdMipvPlISKJ44h3YG4XSl9DRkAwOyOwK2ay%2FHsaqOMFkMwM68RGkAWeuNn%2BFyPTFHtJofUEZHjG4R%2B2V2qzlIzSgCnbFe8G7AzDChR7NEUnLYRLjybzDcEnHuFJ90ceO6PvBKbU4HBHzq59wwYwmDi1jBQBkwrL9W5Tt9clYZbXgYD72049ZxxbLYRRi1p07NqxXgxG8sx&X-Amz-Signature=5af492ad3afefe4961c76a39c5338dd57db67fab63e190269a9c92125a19c7a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U5TT6FPF%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQD%2B5T5kqNz%2FJ7i6J02S4MWJDg17lkAa5PUn5qfokkm0cgIgISk73URqbVDVSOLjgKRk9Mq0I4RCATP9vXDgDeTd9D0q%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDIfjegdBUiTVienMXCrcA7JuaGUjyPwaLfayxrCJwEINoNGqYmXLN1aHEjc6MX8O0BemEDMdtDtCKOppCu8MvO3bOuMhNEhNgVZhDpBDos%2Bm11Lv2kXVtFu5QJ5ACrBj7gXLXLmVvrD6eUXuEU%2FTN0dc%2FpZmgNrcezPegZsF1v%2F9%2BqC4xog%2FLFkfGJUkt8tBq6Ryds%2Fm1WvyY2Ag4yIO9LTA%2BBB3oPra%2BCLTNt2ZG7agSSDKdoUH9jDtBtL8zmS278SP6KzrXnTuqUC4zhoE1EiehDm9g%2F6Ht6u0BB5HagVCmdvygk5O82bDfU5txes7LAEwjXJJ%2B0hSawE2L0hHDeUIGpi%2FV0Q0DWUWJrpe8FA8UbY1Va4VtL8AfCdg6W%2Bbk0D9ivWE6fj2Hsyj%2BCrYMi%2BVGG2uWA08P5g7eY6SEbkyUBKBDdYHTccvWQGB6fO6wE%2Fa9kWKUf4MT2wzlFsGJ5bO%2FCDHy8sCbvoK1%2F8aINeOEetIX8DouL01ysd2DIKnXcy%2FVvk%2F47stXdUq04qkrcbv%2BCuNk0Y014vNyh6omnggi9RSSMzc63QghINfDGvUM3oJgOfXiZxkckjXHeVgBBcE9f9VEnTkj%2FNa5PB6Yl43G31E%2BKnKpsQJSzwcRZJmYtLAupOG%2FfU5werCMKGYtdQGOqUBsP1DF1lxCiOvHxAX5FxxlLUPhOwHyTXJZWpvxzLIwCVLZPtc4KBjxu7xDwcbktcCnsSHKeIcnrjJAm4UJODSgR5HGgQp1KiHYQXtDYXTCkrAL16MZjhwB2Kxf38pk73ll6PW0OnSYECTDZKcQ%2BRZEMBgNwGcebeWAVPiWJcOxDDgNaULJk8K%2B%2FVQD8V2A2TjKiy9iaSbJMyjVNkA3X1Uct5CUuIk&X-Amz-Signature=487706e71219fb55a8e0458bdf8d11bb55c0c3b1f473ff5f37958fa251de7a43&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U5TT6FPF%2F20260825%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260825T083930Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCIQD%2B5T5kqNz%2FJ7i6J02S4MWJDg17lkAa5PUn5qfokkm0cgIgISk73URqbVDVSOLjgKRk9Mq0I4RCATP9vXDgDeTd9D0q%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDIfjegdBUiTVienMXCrcA7JuaGUjyPwaLfayxrCJwEINoNGqYmXLN1aHEjc6MX8O0BemEDMdtDtCKOppCu8MvO3bOuMhNEhNgVZhDpBDos%2Bm11Lv2kXVtFu5QJ5ACrBj7gXLXLmVvrD6eUXuEU%2FTN0dc%2FpZmgNrcezPegZsF1v%2F9%2BqC4xog%2FLFkfGJUkt8tBq6Ryds%2Fm1WvyY2Ag4yIO9LTA%2BBB3oPra%2BCLTNt2ZG7agSSDKdoUH9jDtBtL8zmS278SP6KzrXnTuqUC4zhoE1EiehDm9g%2F6Ht6u0BB5HagVCmdvygk5O82bDfU5txes7LAEwjXJJ%2B0hSawE2L0hHDeUIGpi%2FV0Q0DWUWJrpe8FA8UbY1Va4VtL8AfCdg6W%2Bbk0D9ivWE6fj2Hsyj%2BCrYMi%2BVGG2uWA08P5g7eY6SEbkyUBKBDdYHTccvWQGB6fO6wE%2Fa9kWKUf4MT2wzlFsGJ5bO%2FCDHy8sCbvoK1%2F8aINeOEetIX8DouL01ysd2DIKnXcy%2FVvk%2F47stXdUq04qkrcbv%2BCuNk0Y014vNyh6omnggi9RSSMzc63QghINfDGvUM3oJgOfXiZxkckjXHeVgBBcE9f9VEnTkj%2FNa5PB6Yl43G31E%2BKnKpsQJSzwcRZJmYtLAupOG%2FfU5werCMKGYtdQGOqUBsP1DF1lxCiOvHxAX5FxxlLUPhOwHyTXJZWpvxzLIwCVLZPtc4KBjxu7xDwcbktcCnsSHKeIcnrjJAm4UJODSgR5HGgQp1KiHYQXtDYXTCkrAL16MZjhwB2Kxf38pk73ll6PW0OnSYECTDZKcQ%2BRZEMBgNwGcebeWAVPiWJcOxDDgNaULJk8K%2B%2FVQD8V2A2TjKiy9iaSbJMyjVNkA3X1Uct5CUuIk&X-Amz-Signature=82cd886c085bee31ca47fb5791a1a97dacf83dc5574e7d32703a613138d66539&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
