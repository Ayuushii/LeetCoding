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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BIHVQDS%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJGMEQCIBAEY2cVZnfSKGROQ4Xz7RhWFAXkoendRo83hpEcv%2BFmAiAx9vOk3biA9ORhiJR5tGyObSZssYuYPTqTP2bWz3gCPSr%2FAwg5EAAaDDYzNzQyMzE4MzgwNSIMDYxSZK4qzzSwE%2BuJKtwDsEWPmYFBtKTPV1ByvuqlqUb%2FdbYgsxUk7IeJwsOoSkzkC3%2BzU3BjppGWAbujFaArWsZJdN1n6bPQtB9WChiKGDjgpCOCsaYCsVJGChwtsXc1FS7pC0UNBZTw7oRJLAHxn3B%2FZ2Aj7bgzVydzioS1ylhzXXDBCHfoscrObHYJB3%2BW%2B2e0tVJB4uQHdZHVDVl7clkV3HfaTc1WpnCK5ybeq2RW9990eDS0cMo11lXC5dxKaMFX5blZ%2BpGYVj4vaOr0yd5DxLTb2fhf2cMT8E%2BOOqkHfBMQIyNcz4JsAeGsfxRbkEXcqQvcM0PO3tRILGoO5HQFLcQ2eymji3Bn8wXF%2B4SAbhNF%2FPLdmjaIMlqRoQgLs7LxgrJMqmluToHYIyKCz3YkTaU7NTdP6IMqQiEcFJq4WAKzUSApqrFIS5CoMvPGTd%2BBSmzv8M2jX9kUsy75%2B73%2F%2B6xky3x2NOHzs3ZlNrbZvSr2R7Fska2kj3zt7j7z4wv4FhQ3AHAbOR%2F003W0suhKuGlnyGvngYZj4ERoDOzer31ZoRqQBYb7kdsdEzvN6KKMCPLNqaji1x9C%2FGfI2fQjaQzPCWWY01n2dJv1l8N3Jh7RzQNg6tIVOBBQP1qWwD2P5cEOG3AJQuQwgKbq1QY6pgFtgVN4mt2dkGfkiHNldiIcq9uXaejiHoubKPW54aLFSIU1XprHuP2f0DihXclrkt8oCW4E8Q3paVIU%2F6P5vmO1EYkjcwhFNDgOwsmO2qnHGif9uqn9HGoO%2FSLFevx7v9ksYOtw%2B5TRu93tnY3zGb5MvQdDuUVy52sF6wc8UC2nktvFwTIksSYaDQAEQH9HjcYth9M38x4ucqydknSo9QfmisKypT%2FO&X-Amz-Signature=907acf637ffffabd2ecb0659142c0a3d51f2f11337a55a0b470881f24f89d1f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BIHVQDS%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJGMEQCIBAEY2cVZnfSKGROQ4Xz7RhWFAXkoendRo83hpEcv%2BFmAiAx9vOk3biA9ORhiJR5tGyObSZssYuYPTqTP2bWz3gCPSr%2FAwg5EAAaDDYzNzQyMzE4MzgwNSIMDYxSZK4qzzSwE%2BuJKtwDsEWPmYFBtKTPV1ByvuqlqUb%2FdbYgsxUk7IeJwsOoSkzkC3%2BzU3BjppGWAbujFaArWsZJdN1n6bPQtB9WChiKGDjgpCOCsaYCsVJGChwtsXc1FS7pC0UNBZTw7oRJLAHxn3B%2FZ2Aj7bgzVydzioS1ylhzXXDBCHfoscrObHYJB3%2BW%2B2e0tVJB4uQHdZHVDVl7clkV3HfaTc1WpnCK5ybeq2RW9990eDS0cMo11lXC5dxKaMFX5blZ%2BpGYVj4vaOr0yd5DxLTb2fhf2cMT8E%2BOOqkHfBMQIyNcz4JsAeGsfxRbkEXcqQvcM0PO3tRILGoO5HQFLcQ2eymji3Bn8wXF%2B4SAbhNF%2FPLdmjaIMlqRoQgLs7LxgrJMqmluToHYIyKCz3YkTaU7NTdP6IMqQiEcFJq4WAKzUSApqrFIS5CoMvPGTd%2BBSmzv8M2jX9kUsy75%2B73%2F%2B6xky3x2NOHzs3ZlNrbZvSr2R7Fska2kj3zt7j7z4wv4FhQ3AHAbOR%2F003W0suhKuGlnyGvngYZj4ERoDOzer31ZoRqQBYb7kdsdEzvN6KKMCPLNqaji1x9C%2FGfI2fQjaQzPCWWY01n2dJv1l8N3Jh7RzQNg6tIVOBBQP1qWwD2P5cEOG3AJQuQwgKbq1QY6pgFtgVN4mt2dkGfkiHNldiIcq9uXaejiHoubKPW54aLFSIU1XprHuP2f0DihXclrkt8oCW4E8Q3paVIU%2F6P5vmO1EYkjcwhFNDgOwsmO2qnHGif9uqn9HGoO%2FSLFevx7v9ksYOtw%2B5TRu93tnY3zGb5MvQdDuUVy52sF6wc8UC2nktvFwTIksSYaDQAEQH9HjcYth9M38x4ucqydknSo9QfmisKypT%2FO&X-Amz-Signature=0d2a64d97a0ebdbe2f045bf1b743d31ac49cb11f61e9a0c6a885cfdd6bb168e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BIHVQDS%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJGMEQCIBAEY2cVZnfSKGROQ4Xz7RhWFAXkoendRo83hpEcv%2BFmAiAx9vOk3biA9ORhiJR5tGyObSZssYuYPTqTP2bWz3gCPSr%2FAwg5EAAaDDYzNzQyMzE4MzgwNSIMDYxSZK4qzzSwE%2BuJKtwDsEWPmYFBtKTPV1ByvuqlqUb%2FdbYgsxUk7IeJwsOoSkzkC3%2BzU3BjppGWAbujFaArWsZJdN1n6bPQtB9WChiKGDjgpCOCsaYCsVJGChwtsXc1FS7pC0UNBZTw7oRJLAHxn3B%2FZ2Aj7bgzVydzioS1ylhzXXDBCHfoscrObHYJB3%2BW%2B2e0tVJB4uQHdZHVDVl7clkV3HfaTc1WpnCK5ybeq2RW9990eDS0cMo11lXC5dxKaMFX5blZ%2BpGYVj4vaOr0yd5DxLTb2fhf2cMT8E%2BOOqkHfBMQIyNcz4JsAeGsfxRbkEXcqQvcM0PO3tRILGoO5HQFLcQ2eymji3Bn8wXF%2B4SAbhNF%2FPLdmjaIMlqRoQgLs7LxgrJMqmluToHYIyKCz3YkTaU7NTdP6IMqQiEcFJq4WAKzUSApqrFIS5CoMvPGTd%2BBSmzv8M2jX9kUsy75%2B73%2F%2B6xky3x2NOHzs3ZlNrbZvSr2R7Fska2kj3zt7j7z4wv4FhQ3AHAbOR%2F003W0suhKuGlnyGvngYZj4ERoDOzer31ZoRqQBYb7kdsdEzvN6KKMCPLNqaji1x9C%2FGfI2fQjaQzPCWWY01n2dJv1l8N3Jh7RzQNg6tIVOBBQP1qWwD2P5cEOG3AJQuQwgKbq1QY6pgFtgVN4mt2dkGfkiHNldiIcq9uXaejiHoubKPW54aLFSIU1XprHuP2f0DihXclrkt8oCW4E8Q3paVIU%2F6P5vmO1EYkjcwhFNDgOwsmO2qnHGif9uqn9HGoO%2FSLFevx7v9ksYOtw%2B5TRu93tnY3zGb5MvQdDuUVy52sF6wc8UC2nktvFwTIksSYaDQAEQH9HjcYth9M38x4ucqydknSo9QfmisKypT%2FO&X-Amz-Signature=2ba28d9f9f83ee5e58186886d8e420d0574c3a994db9ffaeac1c3e20818b47f5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEGAYHFK%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIE9FuP1TgDI5bkJrv4%2BB%2BX%2FngM%2BB3Rlleg%2F03OZwRWv4AiEA%2FiFQBgMTsUXP7Kpo8kE%2F9mdspOilSTiNJ590ZSqH0hIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDELWI8VO2L2ixZCjbSrcA%2BVI4cRvoAdUlmy8Kh%2F0a%2F9I8rDPGihQ6ag0F7ydpyQ1ivCCFY0JLTpZOs31RCqYZxlhWMlyW5w%2BLWg6Rk%2FFU3kXETvbjoLfibWc3m0rqSLKxP7GGLjHxikE0IPPrbNuUUEMWIoDxq4BWeA9FFcpvZK8AnukHiscjqWcHLZwJ1zG6ZZJ0ZN1AugSrNOa5SfaVQLtk6vTKFZQuOjEKLR%2F0xzLcWYAx2MhsRRXWoQmkLp9D%2BzDgBKoCkP5POcvxEB%2Fz5OBo6v9ePhqEqgcu7g5gnDUkkpB2dd793%2BDGG%2B4dNeYJqywmOuHbAogai2s5gVeHXMPb8wXVT1SBPRUsMID33337cSQKw%2B8qCGYH1U5iNo%2FjIn%2FsSpUaY%2FS7%2BAQYxCkmaNm4xKYKKPJLUU5obVX%2BWBcrDrdX0us5eKYEbHQVCLS%2FSBBAIcv7dJ7PTgDnGUtWSeLgGhyK2kpbcbUY%2BYHMuEB4bgWR321QSGyCSLO7MdMWp3hE4KjAyGiZCDtStsL0Y01I5eR%2FNUdYLVZkvNnDxbRMjhJ9lEqC25UQVkyzHXoYbvbLPv7hyhbxYkMILi24X7GEWq02AjY15pIsBNzt%2BYCv8hx8s%2FAvd8CZ24YZ%2FqsGUU9pQbIwpTgjW6JMJ%2Bm6tUGOqUB4vzUAfkf25aCovVKoOl6icHSxATAgVldeUOElJfwGDGRWo2ZhUgDZAOLt02B%2FNbVDxZcbHV3MQn5MRdxKOLg8fTof4SgVn4GhRCk4Ih6pKbxuxrxcrI6qriL6JCcrQWVY0p9AYmViv%2BGUVPvNw%2FlowaxkCMsFPInv3N8u%2BP63rxCdVbqCC25lXtuqKgz%2FJokXVOgU52izg2wlsx6nPP2sxhQ1l6y&X-Amz-Signature=bf0ce7db28b592abd87e70f27557a90eb79f74d885e6c537dbec3dc6bbe01936&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEGAYHFK%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIE9FuP1TgDI5bkJrv4%2BB%2BX%2FngM%2BB3Rlleg%2F03OZwRWv4AiEA%2FiFQBgMTsUXP7Kpo8kE%2F9mdspOilSTiNJ590ZSqH0hIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDELWI8VO2L2ixZCjbSrcA%2BVI4cRvoAdUlmy8Kh%2F0a%2F9I8rDPGihQ6ag0F7ydpyQ1ivCCFY0JLTpZOs31RCqYZxlhWMlyW5w%2BLWg6Rk%2FFU3kXETvbjoLfibWc3m0rqSLKxP7GGLjHxikE0IPPrbNuUUEMWIoDxq4BWeA9FFcpvZK8AnukHiscjqWcHLZwJ1zG6ZZJ0ZN1AugSrNOa5SfaVQLtk6vTKFZQuOjEKLR%2F0xzLcWYAx2MhsRRXWoQmkLp9D%2BzDgBKoCkP5POcvxEB%2Fz5OBo6v9ePhqEqgcu7g5gnDUkkpB2dd793%2BDGG%2B4dNeYJqywmOuHbAogai2s5gVeHXMPb8wXVT1SBPRUsMID33337cSQKw%2B8qCGYH1U5iNo%2FjIn%2FsSpUaY%2FS7%2BAQYxCkmaNm4xKYKKPJLUU5obVX%2BWBcrDrdX0us5eKYEbHQVCLS%2FSBBAIcv7dJ7PTgDnGUtWSeLgGhyK2kpbcbUY%2BYHMuEB4bgWR321QSGyCSLO7MdMWp3hE4KjAyGiZCDtStsL0Y01I5eR%2FNUdYLVZkvNnDxbRMjhJ9lEqC25UQVkyzHXoYbvbLPv7hyhbxYkMILi24X7GEWq02AjY15pIsBNzt%2BYCv8hx8s%2FAvd8CZ24YZ%2FqsGUU9pQbIwpTgjW6JMJ%2Bm6tUGOqUB4vzUAfkf25aCovVKoOl6icHSxATAgVldeUOElJfwGDGRWo2ZhUgDZAOLt02B%2FNbVDxZcbHV3MQn5MRdxKOLg8fTof4SgVn4GhRCk4Ih6pKbxuxrxcrI6qriL6JCcrQWVY0p9AYmViv%2BGUVPvNw%2FlowaxkCMsFPInv3N8u%2BP63rxCdVbqCC25lXtuqKgz%2FJokXVOgU52izg2wlsx6nPP2sxhQ1l6y&X-Amz-Signature=cf667e14c7614b40c2ee7fe5d3994478b1774638915e2c46dfd08620f23bd2f2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEGAYHFK%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIE9FuP1TgDI5bkJrv4%2BB%2BX%2FngM%2BB3Rlleg%2F03OZwRWv4AiEA%2FiFQBgMTsUXP7Kpo8kE%2F9mdspOilSTiNJ590ZSqH0hIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDELWI8VO2L2ixZCjbSrcA%2BVI4cRvoAdUlmy8Kh%2F0a%2F9I8rDPGihQ6ag0F7ydpyQ1ivCCFY0JLTpZOs31RCqYZxlhWMlyW5w%2BLWg6Rk%2FFU3kXETvbjoLfibWc3m0rqSLKxP7GGLjHxikE0IPPrbNuUUEMWIoDxq4BWeA9FFcpvZK8AnukHiscjqWcHLZwJ1zG6ZZJ0ZN1AugSrNOa5SfaVQLtk6vTKFZQuOjEKLR%2F0xzLcWYAx2MhsRRXWoQmkLp9D%2BzDgBKoCkP5POcvxEB%2Fz5OBo6v9ePhqEqgcu7g5gnDUkkpB2dd793%2BDGG%2B4dNeYJqywmOuHbAogai2s5gVeHXMPb8wXVT1SBPRUsMID33337cSQKw%2B8qCGYH1U5iNo%2FjIn%2FsSpUaY%2FS7%2BAQYxCkmaNm4xKYKKPJLUU5obVX%2BWBcrDrdX0us5eKYEbHQVCLS%2FSBBAIcv7dJ7PTgDnGUtWSeLgGhyK2kpbcbUY%2BYHMuEB4bgWR321QSGyCSLO7MdMWp3hE4KjAyGiZCDtStsL0Y01I5eR%2FNUdYLVZkvNnDxbRMjhJ9lEqC25UQVkyzHXoYbvbLPv7hyhbxYkMILi24X7GEWq02AjY15pIsBNzt%2BYCv8hx8s%2FAvd8CZ24YZ%2FqsGUU9pQbIwpTgjW6JMJ%2Bm6tUGOqUB4vzUAfkf25aCovVKoOl6icHSxATAgVldeUOElJfwGDGRWo2ZhUgDZAOLt02B%2FNbVDxZcbHV3MQn5MRdxKOLg8fTof4SgVn4GhRCk4Ih6pKbxuxrxcrI6qriL6JCcrQWVY0p9AYmViv%2BGUVPvNw%2FlowaxkCMsFPInv3N8u%2BP63rxCdVbqCC25lXtuqKgz%2FJokXVOgU52izg2wlsx6nPP2sxhQ1l6y&X-Amz-Signature=a6ffa2ffc1f541881e7887310435d161adcee3197763e131a3e349129d34abce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEGAYHFK%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162803Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIE9FuP1TgDI5bkJrv4%2BB%2BX%2FngM%2BB3Rlleg%2F03OZwRWv4AiEA%2FiFQBgMTsUXP7Kpo8kE%2F9mdspOilSTiNJ590ZSqH0hIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDELWI8VO2L2ixZCjbSrcA%2BVI4cRvoAdUlmy8Kh%2F0a%2F9I8rDPGihQ6ag0F7ydpyQ1ivCCFY0JLTpZOs31RCqYZxlhWMlyW5w%2BLWg6Rk%2FFU3kXETvbjoLfibWc3m0rqSLKxP7GGLjHxikE0IPPrbNuUUEMWIoDxq4BWeA9FFcpvZK8AnukHiscjqWcHLZwJ1zG6ZZJ0ZN1AugSrNOa5SfaVQLtk6vTKFZQuOjEKLR%2F0xzLcWYAx2MhsRRXWoQmkLp9D%2BzDgBKoCkP5POcvxEB%2Fz5OBo6v9ePhqEqgcu7g5gnDUkkpB2dd793%2BDGG%2B4dNeYJqywmOuHbAogai2s5gVeHXMPb8wXVT1SBPRUsMID33337cSQKw%2B8qCGYH1U5iNo%2FjIn%2FsSpUaY%2FS7%2BAQYxCkmaNm4xKYKKPJLUU5obVX%2BWBcrDrdX0us5eKYEbHQVCLS%2FSBBAIcv7dJ7PTgDnGUtWSeLgGhyK2kpbcbUY%2BYHMuEB4bgWR321QSGyCSLO7MdMWp3hE4KjAyGiZCDtStsL0Y01I5eR%2FNUdYLVZkvNnDxbRMjhJ9lEqC25UQVkyzHXoYbvbLPv7hyhbxYkMILi24X7GEWq02AjY15pIsBNzt%2BYCv8hx8s%2FAvd8CZ24YZ%2FqsGUU9pQbIwpTgjW6JMJ%2Bm6tUGOqUB4vzUAfkf25aCovVKoOl6icHSxATAgVldeUOElJfwGDGRWo2ZhUgDZAOLt02B%2FNbVDxZcbHV3MQn5MRdxKOLg8fTof4SgVn4GhRCk4Ih6pKbxuxrxcrI6qriL6JCcrQWVY0p9AYmViv%2BGUVPvNw%2FlowaxkCMsFPInv3N8u%2BP63rxCdVbqCC25lXtuqKgz%2FJokXVOgU52izg2wlsx6nPP2sxhQ1l6y&X-Amz-Signature=a211e114b956f4846f258ff541b2b431fe18b8bf738ad9af1750ccebfd6cad27&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QBHQ3Q7K%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIGbFKN6ZHdvw8e4A4cNC3eDG0Jj%2BuXF%2BxDCXwlF0bzckAiEAn%2Bnk1r9usKf%2FlY6lhsirIPUOssNCdPcaj2tlarqj3Xcq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDJPBUjriW7ryeaRWhSrcA7UVgoLTr7QrTkPkgkvmiTQ69fPadttmpiAVLc8Dj5sjOA1fpiQDfdo6NsY9oLV4fYnc1460IodsxqyQSkhGctpoi0eMuG6meJdDC6nc3qbTM5jSxxF7hGBWhI2XB5FjeL5VRTWdc4vtlgzXUj1GXzIZKY7AQCyDMecI1iV9uV6GK8JDSdW7VCa8Kvb6O1zeYwJd%2FpvwG6FhivEi5k5u4C9uvD7D7gPBnlYeOTIyRdSbiI%2BggYZlgMIuajLN3vkI4Y4T2z7%2FaBDUwgf29y0fG7QqYO24GOcErLBB12IGP%2B3ER%2FHpJnkt3OZS6MF86mHPO0IKrz7Xr0sCU8pqSb1ELzQem7sT3Ih%2Br9hfsMTRWQ5Ct02Rd3XTDx04eZWhpVmknyTSU6SFwFibHjhL5RYGuvZSntGr%2FPBxqPu0l3yoVWdaZT2LObNempN3sWfW9%2FZUWbFdwIH50PS21whfszx9kJr3w9KggzWcIy7iPNhK66yZ7NHJXoRSvBt8QxJLrseQfdF5QF0GCcAAtGxp1CrYfJxiSfY%2FqxXV%2Bs8xYHeSRPP8izENqkoK4Lrf4i4Oe11QIVr1r4KKLvf9vLbTl4H%2BxIBANJN%2B4YMcrTDfuKB3WeEjYiFwr2iJcop%2BHkljMJCm6tUGOqUB4352q256T%2Bk71zasSnxBko%2FojObrG7c5n6XNEn7MBfzx9ImQaMZsRcGBRtSFhw6EiGF%2BwDE8HCBJicZxsbaOgQXUkcS5bA11sXK%2BkRPcFUyq0efLSeQlW9HyoEiQjK2rat6uHDKFeqPKQ0Pkhhkl6QwCLFN7LvWZBlHgFouyuhqbl4qqcvSavBh5fKUsxNUmXEf25Hg94xUYWksiyPI6cnUK0qS3&X-Amz-Signature=484f9fd8facf565b57e4268f656a1c840e6769e5ac3215d3da0d94e360acff1b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UEMAOYJ2%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIAYmqnos%2FH%2FiFoENsRawGDwP3ZIwWtaVzLXdpAhN0%2FWEAiEA3etDHu0gBhA73k%2Ft8RuKZXYade6YPJda5HUcANKhtKwq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDI4Gk0%2BIa4vw40ld7SrcA59ZE7pTahqHvYhVj6VOSeGjqqX%2FHVKK5s5JIHCraQTEZqUMXyRmEkyYdjlxVU61yfnqz1QNVTYgwJa138UAspytOX22loPnL%2FmJwJSt6Lth9T2FRC4bgXyyoHReggAEnZPFqnAy475UnRqYCxOf3UZJJtcWkbJJAKj9YdcBM1fBhVnoA4BndrUieAywJ9UpBkmHIThc9o%2BPMIkiNHyZT2zdZcjcY4CfcK6uPfF1sK9Py%2FGSwAjTkHsxlv8JpkHxg62X6xrcmyjrJK%2B%2FyF5QziljejrU8RmdYJa%2FMgArot%2FJkIrmGnIgx9WhFZsQIZIqzq233rsPgYSJyQUxrjGyq5jw1a5OVcGzBouQ8XznnlCQpwvta8LTnDDpB6bRYzZ0jzBSC19%2BTZiW6zi%2Bxj1kp9gIAf7UyJVirxbC9aVJTTUScZcd8OEo6AF8nOC5U6PM%2BCWBSw3b58lN%2Fx0pzNmhVEGGRXu9Ocpoez2zPwETvO1YTIlNclJieNNfmYjg0q1SBIBYVF3NFxwcgYMWl64KGEyBomkS1y5dlSauz%2BDs0FVcQVQXwYxk5r9ZAPPz4eYipzEmMGeUb1ENZDus9RJ30GeHvHNqpNps1fWlVbQG%2FVOvAvyfpnhJRunU1Ei5MN%2Bn6tUGOqUBVZbzZlJ4ip5%2Fb6%2FtaihUfQPQ8lQyDFxd3EGDzngLN3UIMXlJm%2BAaVZk598nIBT3RewdQz4C23b5F89h4w%2Fd3wrrNC0sFZEHblI5eLZj5RsZU9vbYIXc3HbKzJVIXvqFmUyKO92cZKSp3vEpXkOP8nAc6s9%2BgTttP5xydYepZV4kPz7cSD0nY4AN8HBaPHkODYM%2F5UaQCiPAkmw1SeCqCBYKXda9Q&X-Amz-Signature=b84107affececa1f05e2c4b8b92184350ceadef407505586337daaf0e9fe42e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UEMAOYJ2%2F20260928%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260928T162804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHEaCXVzLXdlc3QtMiJHMEUCIAYmqnos%2FH%2FiFoENsRawGDwP3ZIwWtaVzLXdpAhN0%2FWEAiEA3etDHu0gBhA73k%2Ft8RuKZXYade6YPJda5HUcANKhtKwq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDI4Gk0%2BIa4vw40ld7SrcA59ZE7pTahqHvYhVj6VOSeGjqqX%2FHVKK5s5JIHCraQTEZqUMXyRmEkyYdjlxVU61yfnqz1QNVTYgwJa138UAspytOX22loPnL%2FmJwJSt6Lth9T2FRC4bgXyyoHReggAEnZPFqnAy475UnRqYCxOf3UZJJtcWkbJJAKj9YdcBM1fBhVnoA4BndrUieAywJ9UpBkmHIThc9o%2BPMIkiNHyZT2zdZcjcY4CfcK6uPfF1sK9Py%2FGSwAjTkHsxlv8JpkHxg62X6xrcmyjrJK%2B%2FyF5QziljejrU8RmdYJa%2FMgArot%2FJkIrmGnIgx9WhFZsQIZIqzq233rsPgYSJyQUxrjGyq5jw1a5OVcGzBouQ8XznnlCQpwvta8LTnDDpB6bRYzZ0jzBSC19%2BTZiW6zi%2Bxj1kp9gIAf7UyJVirxbC9aVJTTUScZcd8OEo6AF8nOC5U6PM%2BCWBSw3b58lN%2Fx0pzNmhVEGGRXu9Ocpoez2zPwETvO1YTIlNclJieNNfmYjg0q1SBIBYVF3NFxwcgYMWl64KGEyBomkS1y5dlSauz%2BDs0FVcQVQXwYxk5r9ZAPPz4eYipzEmMGeUb1ENZDus9RJ30GeHvHNqpNps1fWlVbQG%2FVOvAvyfpnhJRunU1Ei5MN%2Bn6tUGOqUBVZbzZlJ4ip5%2Fb6%2FtaihUfQPQ8lQyDFxd3EGDzngLN3UIMXlJm%2BAaVZk598nIBT3RewdQz4C23b5F89h4w%2Fd3wrrNC0sFZEHblI5eLZj5RsZU9vbYIXc3HbKzJVIXvqFmUyKO92cZKSp3vEpXkOP8nAc6s9%2BgTttP5xydYepZV4kPz7cSD0nY4AN8HBaPHkODYM%2F5UaQCiPAkmw1SeCqCBYKXda9Q&X-Amz-Signature=c4b9c0b3ac2c70e9d66eca42b2f16688a9abb711f2e96a908b6af1db62170fdb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
