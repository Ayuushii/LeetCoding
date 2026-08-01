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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662RG3NARX%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYNAsnCfl0SuTVHEfkJxWNhgSNOby4%2BXz1ELmumoTkjgIgU9%2BVMRYP8LXYWUg2o9TVqL8sI70huMXNm25j2qRGPBkqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKai1We2buGRwQTIkyrcA4F4f4xUUn9bjI0RewsGCRthCK9TdxyNOtweqDYgXUdu%2Ft5u6rehhQGRBReKpCEnsm5K8jl1T5yTDO9n2FLSNxS%2FJQN321gIWANw3sPx10iF52CXRAqGnlKgm3SDfc3%2B4bmQu%2BAy10syaJvy6vd0HKuzKMRqG0W0Cu0e6m%2BH7JuPlFhCrYkM1Yv%2FaLi8FrzhBiDJD9Mv6DuH%2FCSXYPfV4HZJhW9rUxXLRHVXpq4fCHfsms8TyRs0PYOy8gQrKJfT5VCT%2Fmhlbg7gaQr0Y5j4fkwWpYx6DPj6kntVMiN1c1b5QB2Ae6HpT0CCIEgDqoyB4t%2FNii5y%2BRAXKwbV8qpwfFxsLOOM07SAGwJ52jGk%2Fg5kJgA6UESodyeBwsBz1MHWUhrS%2F1dQGCMk3fi2kqjxaORWkXN7P53PZe20Qu5U%2B9BOkxMFAN3RHNn043hyDuT3m0k9HOUTuIZtKfihGPXEXJHQ0pV3GCqP68ZkRr8MRA2G7SLdN7qz1NkbTjYzhN6Z%2FGoRuxzyYs9a%2BTK8eE17uwkdX%2Bk4pr8%2BEF78hbuVj%2FUbGYSqFUwvnwsF9OWNjLzM5Wd6bNZmyB2YAYP6r31XlFMmpvu2J1IQCbfICP7swH06cM2iYbWIYznv5V7MMPP2ttMGOqUBdZZ1BpfpVwnEpynfQ3xNcTLSL5YUhlXK672Q2U8ACBNOALfhU8K03DN9I3rPhar2aXsyEnVrDIFaj%2Fv1%2BVnsmc3nDuTtanm52c02LpF8K3y0UIht%2FXXCgtYAH4VgGQondeleRKq3%2BPdcXGnUonj5zWr2Ert7mh5T4KLEHFX7T5qsribhTMhl1Fb2ZS21HqwF1363ujK4zvN%2Bs9fBoyPv1L0Ok2rF&X-Amz-Signature=6520437f819414073e4042a97eadd0d859131057a74669c0f40858ca4881fb31&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662RG3NARX%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYNAsnCfl0SuTVHEfkJxWNhgSNOby4%2BXz1ELmumoTkjgIgU9%2BVMRYP8LXYWUg2o9TVqL8sI70huMXNm25j2qRGPBkqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKai1We2buGRwQTIkyrcA4F4f4xUUn9bjI0RewsGCRthCK9TdxyNOtweqDYgXUdu%2Ft5u6rehhQGRBReKpCEnsm5K8jl1T5yTDO9n2FLSNxS%2FJQN321gIWANw3sPx10iF52CXRAqGnlKgm3SDfc3%2B4bmQu%2BAy10syaJvy6vd0HKuzKMRqG0W0Cu0e6m%2BH7JuPlFhCrYkM1Yv%2FaLi8FrzhBiDJD9Mv6DuH%2FCSXYPfV4HZJhW9rUxXLRHVXpq4fCHfsms8TyRs0PYOy8gQrKJfT5VCT%2Fmhlbg7gaQr0Y5j4fkwWpYx6DPj6kntVMiN1c1b5QB2Ae6HpT0CCIEgDqoyB4t%2FNii5y%2BRAXKwbV8qpwfFxsLOOM07SAGwJ52jGk%2Fg5kJgA6UESodyeBwsBz1MHWUhrS%2F1dQGCMk3fi2kqjxaORWkXN7P53PZe20Qu5U%2B9BOkxMFAN3RHNn043hyDuT3m0k9HOUTuIZtKfihGPXEXJHQ0pV3GCqP68ZkRr8MRA2G7SLdN7qz1NkbTjYzhN6Z%2FGoRuxzyYs9a%2BTK8eE17uwkdX%2Bk4pr8%2BEF78hbuVj%2FUbGYSqFUwvnwsF9OWNjLzM5Wd6bNZmyB2YAYP6r31XlFMmpvu2J1IQCbfICP7swH06cM2iYbWIYznv5V7MMPP2ttMGOqUBdZZ1BpfpVwnEpynfQ3xNcTLSL5YUhlXK672Q2U8ACBNOALfhU8K03DN9I3rPhar2aXsyEnVrDIFaj%2Fv1%2BVnsmc3nDuTtanm52c02LpF8K3y0UIht%2FXXCgtYAH4VgGQondeleRKq3%2BPdcXGnUonj5zWr2Ert7mh5T4KLEHFX7T5qsribhTMhl1Fb2ZS21HqwF1363ujK4zvN%2Bs9fBoyPv1L0Ok2rF&X-Amz-Signature=59831e0d4177f1232df33238fa43edb951baedecfb3afe507b33defbcff65ca1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662RG3NARX%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYNAsnCfl0SuTVHEfkJxWNhgSNOby4%2BXz1ELmumoTkjgIgU9%2BVMRYP8LXYWUg2o9TVqL8sI70huMXNm25j2qRGPBkqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKai1We2buGRwQTIkyrcA4F4f4xUUn9bjI0RewsGCRthCK9TdxyNOtweqDYgXUdu%2Ft5u6rehhQGRBReKpCEnsm5K8jl1T5yTDO9n2FLSNxS%2FJQN321gIWANw3sPx10iF52CXRAqGnlKgm3SDfc3%2B4bmQu%2BAy10syaJvy6vd0HKuzKMRqG0W0Cu0e6m%2BH7JuPlFhCrYkM1Yv%2FaLi8FrzhBiDJD9Mv6DuH%2FCSXYPfV4HZJhW9rUxXLRHVXpq4fCHfsms8TyRs0PYOy8gQrKJfT5VCT%2Fmhlbg7gaQr0Y5j4fkwWpYx6DPj6kntVMiN1c1b5QB2Ae6HpT0CCIEgDqoyB4t%2FNii5y%2BRAXKwbV8qpwfFxsLOOM07SAGwJ52jGk%2Fg5kJgA6UESodyeBwsBz1MHWUhrS%2F1dQGCMk3fi2kqjxaORWkXN7P53PZe20Qu5U%2B9BOkxMFAN3RHNn043hyDuT3m0k9HOUTuIZtKfihGPXEXJHQ0pV3GCqP68ZkRr8MRA2G7SLdN7qz1NkbTjYzhN6Z%2FGoRuxzyYs9a%2BTK8eE17uwkdX%2Bk4pr8%2BEF78hbuVj%2FUbGYSqFUwvnwsF9OWNjLzM5Wd6bNZmyB2YAYP6r31XlFMmpvu2J1IQCbfICP7swH06cM2iYbWIYznv5V7MMPP2ttMGOqUBdZZ1BpfpVwnEpynfQ3xNcTLSL5YUhlXK672Q2U8ACBNOALfhU8K03DN9I3rPhar2aXsyEnVrDIFaj%2Fv1%2BVnsmc3nDuTtanm52c02LpF8K3y0UIht%2FXXCgtYAH4VgGQondeleRKq3%2BPdcXGnUonj5zWr2Ert7mh5T4KLEHFX7T5qsribhTMhl1Fb2ZS21HqwF1363ujK4zvN%2Bs9fBoyPv1L0Ok2rF&X-Amz-Signature=69da53325e947073160de2618bf95a8da74419db69ed6ca7d59cab6e2693ea04&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SOUCD2NO%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUhgS2R36hvxAuN2u%2BtL74pr8KxPRyOdzeGf5w04o0NwIgDxZIUPL2EuyF1DOWNUBdEG0rtVcalHcQsGIXkMX3hboqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJ92dIzTjSvKBstmaCrcA2zLQ2%2B2F5xVuuUNno7UPWUquj%2Bc7O3MFyLkBSJO82Z5bGgaf9MMqhso5VoI8%2FrIp5G3Th4JXK8k4Mn7Kcy1Wal1CvKZfYWqQdEEEu0q1LY4pkK5eYK8381D0glhvsQgS8Zw5S1rEtN95niVhd4lSdicMxVbAgLpb%2B1hHAFGfwVlK1aekYFYHHPzeJHNc1sVEV1Z%2BNpNx1PRAMOAAC%2BGeQi%2F4cehI57nJlzy4dbFsM1cCvN%2Fb6WGz1rDjXteBimsbyrIuaKkg37lDyNwfBXl%2BAw5i1BIdXC2N5Z1zjJpSKyYQNbxO4X7iTxzDLn2WSPUKM3m2xfYdiWSZTAcwF9XHzHjH83o7cLIjmKJtGbLjOegYxAi6TiPZ7QLYCYDLivSXFlFpeT25UespHHsXdKOmAB3N2Gi3PDGv%2FO7vrO3v0uzJUNGjFClcngox4PLGdmBC0irFigDOnzJl%2FUckgM%2BtADwshFupmyghvdnHhP2aZ8J7C42chNwl%2Bw39tw%2BDtoxJv3XXv1%2FTp%2FznjHANCzgXuguEbvnJsWGUPzRolo%2FIzxLuN8DLz1QD4cMg8xG0Dz2tbFCZf8aKPiivfqmA1h7roSoD%2Blz2UDd4WFYLsPPu%2BM6MnkgwMuf7JzMmNumMOv4ttMGOqUBLKMNetXgPT93%2BfSn2%2FOBDvv6uYKH88ukJnc3CG3ah9ceus4%2FAd4OlC5PNOCIEJlxpRXO3yfd%2BZJzh4bL2KLju1c5P4eIbp7bzg7NUaPU%2BV5fTMu1UIisF%2FH%2BUsCWq%2Bur3VOf31wx7LBhlbmOKoc8bgrBLY8TIhZ38XCXtSLMjtpy%2F8SDi442pmSeI1yILNGjYrd%2Fcok9SWqiDDTakpROONIsJ1v5&X-Amz-Signature=8ec9be01668427a49f1ab1e0dcf477f5403e5e788008ff4f8752363a8d6cf9a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SOUCD2NO%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUhgS2R36hvxAuN2u%2BtL74pr8KxPRyOdzeGf5w04o0NwIgDxZIUPL2EuyF1DOWNUBdEG0rtVcalHcQsGIXkMX3hboqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJ92dIzTjSvKBstmaCrcA2zLQ2%2B2F5xVuuUNno7UPWUquj%2Bc7O3MFyLkBSJO82Z5bGgaf9MMqhso5VoI8%2FrIp5G3Th4JXK8k4Mn7Kcy1Wal1CvKZfYWqQdEEEu0q1LY4pkK5eYK8381D0glhvsQgS8Zw5S1rEtN95niVhd4lSdicMxVbAgLpb%2B1hHAFGfwVlK1aekYFYHHPzeJHNc1sVEV1Z%2BNpNx1PRAMOAAC%2BGeQi%2F4cehI57nJlzy4dbFsM1cCvN%2Fb6WGz1rDjXteBimsbyrIuaKkg37lDyNwfBXl%2BAw5i1BIdXC2N5Z1zjJpSKyYQNbxO4X7iTxzDLn2WSPUKM3m2xfYdiWSZTAcwF9XHzHjH83o7cLIjmKJtGbLjOegYxAi6TiPZ7QLYCYDLivSXFlFpeT25UespHHsXdKOmAB3N2Gi3PDGv%2FO7vrO3v0uzJUNGjFClcngox4PLGdmBC0irFigDOnzJl%2FUckgM%2BtADwshFupmyghvdnHhP2aZ8J7C42chNwl%2Bw39tw%2BDtoxJv3XXv1%2FTp%2FznjHANCzgXuguEbvnJsWGUPzRolo%2FIzxLuN8DLz1QD4cMg8xG0Dz2tbFCZf8aKPiivfqmA1h7roSoD%2Blz2UDd4WFYLsPPu%2BM6MnkgwMuf7JzMmNumMOv4ttMGOqUBLKMNetXgPT93%2BfSn2%2FOBDvv6uYKH88ukJnc3CG3ah9ceus4%2FAd4OlC5PNOCIEJlxpRXO3yfd%2BZJzh4bL2KLju1c5P4eIbp7bzg7NUaPU%2BV5fTMu1UIisF%2FH%2BUsCWq%2Bur3VOf31wx7LBhlbmOKoc8bgrBLY8TIhZ38XCXtSLMjtpy%2F8SDi442pmSeI1yILNGjYrd%2Fcok9SWqiDDTakpROONIsJ1v5&X-Amz-Signature=9eb19e48f4758accd6b2ca1dd163ede405b497a21abdccc179e87b729d147c67&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SOUCD2NO%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUhgS2R36hvxAuN2u%2BtL74pr8KxPRyOdzeGf5w04o0NwIgDxZIUPL2EuyF1DOWNUBdEG0rtVcalHcQsGIXkMX3hboqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJ92dIzTjSvKBstmaCrcA2zLQ2%2B2F5xVuuUNno7UPWUquj%2Bc7O3MFyLkBSJO82Z5bGgaf9MMqhso5VoI8%2FrIp5G3Th4JXK8k4Mn7Kcy1Wal1CvKZfYWqQdEEEu0q1LY4pkK5eYK8381D0glhvsQgS8Zw5S1rEtN95niVhd4lSdicMxVbAgLpb%2B1hHAFGfwVlK1aekYFYHHPzeJHNc1sVEV1Z%2BNpNx1PRAMOAAC%2BGeQi%2F4cehI57nJlzy4dbFsM1cCvN%2Fb6WGz1rDjXteBimsbyrIuaKkg37lDyNwfBXl%2BAw5i1BIdXC2N5Z1zjJpSKyYQNbxO4X7iTxzDLn2WSPUKM3m2xfYdiWSZTAcwF9XHzHjH83o7cLIjmKJtGbLjOegYxAi6TiPZ7QLYCYDLivSXFlFpeT25UespHHsXdKOmAB3N2Gi3PDGv%2FO7vrO3v0uzJUNGjFClcngox4PLGdmBC0irFigDOnzJl%2FUckgM%2BtADwshFupmyghvdnHhP2aZ8J7C42chNwl%2Bw39tw%2BDtoxJv3XXv1%2FTp%2FznjHANCzgXuguEbvnJsWGUPzRolo%2FIzxLuN8DLz1QD4cMg8xG0Dz2tbFCZf8aKPiivfqmA1h7roSoD%2Blz2UDd4WFYLsPPu%2BM6MnkgwMuf7JzMmNumMOv4ttMGOqUBLKMNetXgPT93%2BfSn2%2FOBDvv6uYKH88ukJnc3CG3ah9ceus4%2FAd4OlC5PNOCIEJlxpRXO3yfd%2BZJzh4bL2KLju1c5P4eIbp7bzg7NUaPU%2BV5fTMu1UIisF%2FH%2BUsCWq%2Bur3VOf31wx7LBhlbmOKoc8bgrBLY8TIhZ38XCXtSLMjtpy%2F8SDi442pmSeI1yILNGjYrd%2Fcok9SWqiDDTakpROONIsJ1v5&X-Amz-Signature=3444687055fbac4c28c6c1c446c457377b2ab1a314e2fe621862a2db8033a63b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SOUCD2NO%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUhgS2R36hvxAuN2u%2BtL74pr8KxPRyOdzeGf5w04o0NwIgDxZIUPL2EuyF1DOWNUBdEG0rtVcalHcQsGIXkMX3hboqiAQIwv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJ92dIzTjSvKBstmaCrcA2zLQ2%2B2F5xVuuUNno7UPWUquj%2Bc7O3MFyLkBSJO82Z5bGgaf9MMqhso5VoI8%2FrIp5G3Th4JXK8k4Mn7Kcy1Wal1CvKZfYWqQdEEEu0q1LY4pkK5eYK8381D0glhvsQgS8Zw5S1rEtN95niVhd4lSdicMxVbAgLpb%2B1hHAFGfwVlK1aekYFYHHPzeJHNc1sVEV1Z%2BNpNx1PRAMOAAC%2BGeQi%2F4cehI57nJlzy4dbFsM1cCvN%2Fb6WGz1rDjXteBimsbyrIuaKkg37lDyNwfBXl%2BAw5i1BIdXC2N5Z1zjJpSKyYQNbxO4X7iTxzDLn2WSPUKM3m2xfYdiWSZTAcwF9XHzHjH83o7cLIjmKJtGbLjOegYxAi6TiPZ7QLYCYDLivSXFlFpeT25UespHHsXdKOmAB3N2Gi3PDGv%2FO7vrO3v0uzJUNGjFClcngox4PLGdmBC0irFigDOnzJl%2FUckgM%2BtADwshFupmyghvdnHhP2aZ8J7C42chNwl%2Bw39tw%2BDtoxJv3XXv1%2FTp%2FznjHANCzgXuguEbvnJsWGUPzRolo%2FIzxLuN8DLz1QD4cMg8xG0Dz2tbFCZf8aKPiivfqmA1h7roSoD%2Blz2UDd4WFYLsPPu%2BM6MnkgwMuf7JzMmNumMOv4ttMGOqUBLKMNetXgPT93%2BfSn2%2FOBDvv6uYKH88ukJnc3CG3ah9ceus4%2FAd4OlC5PNOCIEJlxpRXO3yfd%2BZJzh4bL2KLju1c5P4eIbp7bzg7NUaPU%2BV5fTMu1UIisF%2FH%2BUsCWq%2Bur3VOf31wx7LBhlbmOKoc8bgrBLY8TIhZ38XCXtSLMjtpy%2F8SDi442pmSeI1yILNGjYrd%2Fcok9SWqiDDTakpROONIsJ1v5&X-Amz-Signature=c00ddddb614ebda08b95a46bc1a86e2e7b55ce9afda2c4c12f6fa2990627f344&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UDRJ4HTW%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCT5P3U3QTDleSwHimOBXgF0zBkMpRtfUi9R8C5%2FkdbEwIhAIjxMDM5aAbTOtKMpU%2BV1MoVEJrYFlmoxIXe4C0AMqSJKogECMP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxG8L5eT6hc%2B5SUN8Qq3AOIayWC09USE1CRrVe%2BCw%2FjMjqA%2BiovYnmIgdVuqg40nk0oIoi3GSiaHSQBlSuyodPlwWEI%2B5ZTleE1BIfzRPtym66VT77MLjF6TPvZfmpbHnfx3ivAKgp8RXmrUQAtvXTJYfHBpWQE%2Bpo3dZFEMpkUW7bI4jJZg4sWpE%2B87RGEin2Oz9s4y8aFt%2BYRBTV7OUPCcjMUzKgM6ZU4UlUiU%2BvpExqwQh4Ci1%2BFCJhM4PrCvFl%2BJ%2B2tSGLYCx2dYmj9RIe%2FNiXemZP9NQwvlhSE8wE9tUPcLXgZpNVlNz%2F9I2Qc1tl6u3GLidEVmjuColfaOD9avL1tiQKrFE%2BHNh76argBaHuSio4epulsvJqgHgvutTmCnm%2FY4KxjtiKpa63J%2BJshbFTlX4ArdZSWSivVDEm1zd8m1%2Fe1l%2FkYUrIiMAojCQ2bnCdFmjyzaB%2B8WazuDLTPrSM3RiiryX%2FbFL4KacmdmAyCGeC6vrCpMZmvXuq5qKBpitq9GIs7YL7wXbF8k%2Bigd1ZmC3kxsbafpscwDxcWbeABdeBJHR0t94ZYHeaeKr36JiHq1dA6Bm3DA0daoaQ2vSQxC6tLy97Q7AvvUwIx665rdLWqV7g7R5NgCCzs3EvDgtAS5QkIF3T9IjD89rbTBjqkAVOXnd04Jyva4RJ7CTfHTVLsJNPenTjftMbxmW3Yr0xkNdgT661BiygAeUGS%2BIsL6is2zFGD2wPiGyYljiH2pFxYA1DiOk16GEVRohkieD%2Fu9COTM%2Bw7r3W%2F%2BA9a0fOnlSIqJ6fCTvhQKTV4MGbDeFDJC%2B50OTWt5U5nUIJ%2FkREvwL%2FAy6OH7vcVVS5Y7CdYFZ02Mn3q07SnRxZLyMJdLsq308rw&X-Amz-Signature=ec05f8c81fac382ac4a708413a9089923378406498de51d2ac0cb5a37fe66e8f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJPUGRCZ%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBm52XUlsY0efGhSqg7KwRZaIRmmhE4Z1LyJZtN6gjZoAiA12Kn18pTKS9K7u%2F4ZIGLleHt7qWw7c3IR0qlTHj4s3iqIBAjD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMfg2vaaBDAVzEkW%2F4KtwD2pv6EaybOAc1fj2wSLKmcVwFT5IIy8E5h6GN8mN9EXXRuLGo6qoRmsCaRqpuj%2BddakarG0lF%2BIhduQlau95ROOSgXSGn0g7%2BeSaSGpLO4gjZKHdzf%2Bo6Eq5o%2Bfr6%2FVBfT76bgDSFASr5kh56s9NJvkKUmjfwByWBGv8sHBOIOjW17z4dhR%2B0fAO5KmtohL%2B7HpTKVRSeY6c0XylWykLZjObWqZbXEu%2BSMLjUcCKgdpbRIy1tMklnkHne8qj2dukYFleyCK%2BzZdKvU0Pi7CoSZu2X0K5hI%2BVhzVo%2B5mDuPh61NtrjamY89MKqla%2Bn9w83iOx88pa06T75oYGSlhD0Oj7Eexw8miDWk6TP%2Bx2grdqFKFk2Zq7qFF3CDflBXJTzRQt07ElfcEYuDYjArGsfESsMxtjNNBHbKDW%2FcQaL40BBjj4x1A97g9xMSs%2Bg8pGHvfc%2Ftf6fzhpR6xxBVvGVNaW9OHia38Oxu5QtpUy1qpIzsolbmPzfTNinXL%2BSv8kwZdt7EmWqb5CAvhs5QsKfrvHw8BO64wWHZhR35k1lkJR5VYJEurqF1Q7IS5RyJ0nXmQzNRR9bRZS2JC24RH1u4guaz0YB%2BP2RdGDC01T68thMFfNUjSApcDdiFcAw5%2Fa20wY6pgEsFFt0%2BRHCKh0tZHpOEyYWgb6SWVpkVM2u4baR5ybsw3SZHdFc2TE4unKQeXkTWxoM4cgGN3XQsyXpbopgDrMUOB8OcEWZsJhSlnHeG0Dl5yRnsvlPxe0%2BR5SL%2FdBNxO7BMn7i3aUP%2BZTdi8Nx%2BawTEMj9%2FiIjpcwL312hSI8op2iQkziq2l9XD7R9sZ3g1z8txMMW9jIvDgQ%2BGclpegcr0UphIP%2F6&X-Amz-Signature=0bfcf9b71408f613128a5c7f93930db1806315c8da031cc042b56eb0e18399a3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJPUGRCZ%2F20260801%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260801T095715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBm52XUlsY0efGhSqg7KwRZaIRmmhE4Z1LyJZtN6gjZoAiA12Kn18pTKS9K7u%2F4ZIGLleHt7qWw7c3IR0qlTHj4s3iqIBAjD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMfg2vaaBDAVzEkW%2F4KtwD2pv6EaybOAc1fj2wSLKmcVwFT5IIy8E5h6GN8mN9EXXRuLGo6qoRmsCaRqpuj%2BddakarG0lF%2BIhduQlau95ROOSgXSGn0g7%2BeSaSGpLO4gjZKHdzf%2Bo6Eq5o%2Bfr6%2FVBfT76bgDSFASr5kh56s9NJvkKUmjfwByWBGv8sHBOIOjW17z4dhR%2B0fAO5KmtohL%2B7HpTKVRSeY6c0XylWykLZjObWqZbXEu%2BSMLjUcCKgdpbRIy1tMklnkHne8qj2dukYFleyCK%2BzZdKvU0Pi7CoSZu2X0K5hI%2BVhzVo%2B5mDuPh61NtrjamY89MKqla%2Bn9w83iOx88pa06T75oYGSlhD0Oj7Eexw8miDWk6TP%2Bx2grdqFKFk2Zq7qFF3CDflBXJTzRQt07ElfcEYuDYjArGsfESsMxtjNNBHbKDW%2FcQaL40BBjj4x1A97g9xMSs%2Bg8pGHvfc%2Ftf6fzhpR6xxBVvGVNaW9OHia38Oxu5QtpUy1qpIzsolbmPzfTNinXL%2BSv8kwZdt7EmWqb5CAvhs5QsKfrvHw8BO64wWHZhR35k1lkJR5VYJEurqF1Q7IS5RyJ0nXmQzNRR9bRZS2JC24RH1u4guaz0YB%2BP2RdGDC01T68thMFfNUjSApcDdiFcAw5%2Fa20wY6pgEsFFt0%2BRHCKh0tZHpOEyYWgb6SWVpkVM2u4baR5ybsw3SZHdFc2TE4unKQeXkTWxoM4cgGN3XQsyXpbopgDrMUOB8OcEWZsJhSlnHeG0Dl5yRnsvlPxe0%2BR5SL%2FdBNxO7BMn7i3aUP%2BZTdi8Nx%2BawTEMj9%2FiIjpcwL312hSI8op2iQkziq2l9XD7R9sZ3g1z8txMMW9jIvDgQ%2BGclpegcr0UphIP%2F6&X-Amz-Signature=70cce7befc2c63e7968a228c14e418e1e5eca448337f241feebba0b4f6232a99&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
