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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665EYQCEWV%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJHMEUCIQD0DyTM9JeZ0qSzDQ7f87QLD3ek%2BeOml%2FJbxICYiDxdnAIgeKbSaGNz6UxRm0%2FYZ4hEl5sSSeja%2BiBjMqJzt2WNdSYq%2FwMIJRAAGgw2Mzc0MjMxODM4MDUiDG5uhAYxTio55bCOaircA8H8SI%2BVy1nd59eziMCKozDxDC9ApMF11Lw9Ow4ZpAJ45vvuQg0mQ9TmX9yZ59eD0ZCNXTOUjMexQlD9BET01OJrtGShi2tKuMWPOd2oxwU%2F%2FaPvWsYcWACpc3GYyOWiK5CtIbG%2Bo7FhlcLDX9KJlNyGGIIx4SsavyMtv8nxqSpQ5IvBWoJoO7HX4Z2cCr1EMdd1sS9ez4GNvXT6XCJxN6Q9l2Jos%2BWQy%2BfIBnoMhtoLQnYkMPtfl1%2BQVHpegqv11Z8yl9DpcnBPf70ODfsOmefwiYwCyJW98Ak9CiwJrUasw0udL8jAqQDHBmTFknKtsKgreOpWEdjp94%2BU%2FG%2BGQ5kiNMnXK5One4f0kuNaNMx4hm06F5zTBwrk5DDGWon7jz%2B5%2FzniM8U7kDheeWXrLA6GVmx0Atz2w6kndw7JI%2B06%2BYM%2F2KG7W7Wl5lfHh3yj7YmmrHzuCC5wGN0YqTa73vC9puATs45NHdZkVFYfZiIDARThVSuPw77UehpQUT95r%2BjlaKWjkMQN6xKoqA1Xdw4u2VJKvJ5a7floYYJLbgOwdMYlsOulqiWIC2oc6bOOWCS31g0u73EDWbfqdu3nErv123%2FoHaIyk7TWemtHdZFA3RiBUy%2BDiQ9kJrO9MISuntYGOqUB6QuCSjQ44v7HHNeo2EeAN6ys8KoLXS78c4ft4KDYl2yk2p%2F33IwIdhfrHO6R%2F30GjEGqe4EmyA0rB5Dc81n2D%2BchIaGEea9VT2%2BpLd%2BYzSyM%2F%2B56huc4LQMhiKUBP1pCkiUoj6JrqMDve%2FZ0O%2BhGpo5xpS1LBrIH%2BQHP3KIhtxGWhWjs1Hveby%2FD6Xnz7Pr%2BUtomiimQ3BuvROny4d64%2FfU24rTz&X-Amz-Signature=b97bbfd31da2a6692394a7a4579fa718b986dc861a383a8f6f69b48ba2e022c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665EYQCEWV%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJHMEUCIQD0DyTM9JeZ0qSzDQ7f87QLD3ek%2BeOml%2FJbxICYiDxdnAIgeKbSaGNz6UxRm0%2FYZ4hEl5sSSeja%2BiBjMqJzt2WNdSYq%2FwMIJRAAGgw2Mzc0MjMxODM4MDUiDG5uhAYxTio55bCOaircA8H8SI%2BVy1nd59eziMCKozDxDC9ApMF11Lw9Ow4ZpAJ45vvuQg0mQ9TmX9yZ59eD0ZCNXTOUjMexQlD9BET01OJrtGShi2tKuMWPOd2oxwU%2F%2FaPvWsYcWACpc3GYyOWiK5CtIbG%2Bo7FhlcLDX9KJlNyGGIIx4SsavyMtv8nxqSpQ5IvBWoJoO7HX4Z2cCr1EMdd1sS9ez4GNvXT6XCJxN6Q9l2Jos%2BWQy%2BfIBnoMhtoLQnYkMPtfl1%2BQVHpegqv11Z8yl9DpcnBPf70ODfsOmefwiYwCyJW98Ak9CiwJrUasw0udL8jAqQDHBmTFknKtsKgreOpWEdjp94%2BU%2FG%2BGQ5kiNMnXK5One4f0kuNaNMx4hm06F5zTBwrk5DDGWon7jz%2B5%2FzniM8U7kDheeWXrLA6GVmx0Atz2w6kndw7JI%2B06%2BYM%2F2KG7W7Wl5lfHh3yj7YmmrHzuCC5wGN0YqTa73vC9puATs45NHdZkVFYfZiIDARThVSuPw77UehpQUT95r%2BjlaKWjkMQN6xKoqA1Xdw4u2VJKvJ5a7floYYJLbgOwdMYlsOulqiWIC2oc6bOOWCS31g0u73EDWbfqdu3nErv123%2FoHaIyk7TWemtHdZFA3RiBUy%2BDiQ9kJrO9MISuntYGOqUB6QuCSjQ44v7HHNeo2EeAN6ys8KoLXS78c4ft4KDYl2yk2p%2F33IwIdhfrHO6R%2F30GjEGqe4EmyA0rB5Dc81n2D%2BchIaGEea9VT2%2BpLd%2BYzSyM%2F%2B56huc4LQMhiKUBP1pCkiUoj6JrqMDve%2FZ0O%2BhGpo5xpS1LBrIH%2BQHP3KIhtxGWhWjs1Hveby%2FD6Xnz7Pr%2BUtomiimQ3BuvROny4d64%2FfU24rTz&X-Amz-Signature=978fda22f30ca2938c8415d155f31abacef896014bc4c9fe69a18dd3e2a2af4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665EYQCEWV%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151326Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJHMEUCIQD0DyTM9JeZ0qSzDQ7f87QLD3ek%2BeOml%2FJbxICYiDxdnAIgeKbSaGNz6UxRm0%2FYZ4hEl5sSSeja%2BiBjMqJzt2WNdSYq%2FwMIJRAAGgw2Mzc0MjMxODM4MDUiDG5uhAYxTio55bCOaircA8H8SI%2BVy1nd59eziMCKozDxDC9ApMF11Lw9Ow4ZpAJ45vvuQg0mQ9TmX9yZ59eD0ZCNXTOUjMexQlD9BET01OJrtGShi2tKuMWPOd2oxwU%2F%2FaPvWsYcWACpc3GYyOWiK5CtIbG%2Bo7FhlcLDX9KJlNyGGIIx4SsavyMtv8nxqSpQ5IvBWoJoO7HX4Z2cCr1EMdd1sS9ez4GNvXT6XCJxN6Q9l2Jos%2BWQy%2BfIBnoMhtoLQnYkMPtfl1%2BQVHpegqv11Z8yl9DpcnBPf70ODfsOmefwiYwCyJW98Ak9CiwJrUasw0udL8jAqQDHBmTFknKtsKgreOpWEdjp94%2BU%2FG%2BGQ5kiNMnXK5One4f0kuNaNMx4hm06F5zTBwrk5DDGWon7jz%2B5%2FzniM8U7kDheeWXrLA6GVmx0Atz2w6kndw7JI%2B06%2BYM%2F2KG7W7Wl5lfHh3yj7YmmrHzuCC5wGN0YqTa73vC9puATs45NHdZkVFYfZiIDARThVSuPw77UehpQUT95r%2BjlaKWjkMQN6xKoqA1Xdw4u2VJKvJ5a7floYYJLbgOwdMYlsOulqiWIC2oc6bOOWCS31g0u73EDWbfqdu3nErv123%2FoHaIyk7TWemtHdZFA3RiBUy%2BDiQ9kJrO9MISuntYGOqUB6QuCSjQ44v7HHNeo2EeAN6ys8KoLXS78c4ft4KDYl2yk2p%2F33IwIdhfrHO6R%2F30GjEGqe4EmyA0rB5Dc81n2D%2BchIaGEea9VT2%2BpLd%2BYzSyM%2F%2B56huc4LQMhiKUBP1pCkiUoj6JrqMDve%2FZ0O%2BhGpo5xpS1LBrIH%2BQHP3KIhtxGWhWjs1Hveby%2FD6Xnz7Pr%2BUtomiimQ3BuvROny4d64%2FfU24rTz&X-Amz-Signature=82f08342e528f485dcbd0daffa635f0e3b2b67b19e68df900235d4fa2b361278&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS6HSJOB%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDAQbMSlu0hUNxrhZWBgWtg3iKyihMJr%2BdvOUcjj41m%2BgIhAMQqbO2n4VVNVBjvKPYmkbyqGpTRBQpy7P2hH%2FuFPdsOKv8DCCYQABoMNjM3NDIzMTgzODA1IgxyQ5b9cRyrdyj6oj8q3APSX%2F4o4lhOY%2FqYmaF8LAqH2pK9R0wHEFCkPxZ%2BkoXE8df8LtnQZo2r4dYrlnSL8TiDFKbHEDGhYJXLvZ%2Bg3SalUyUIGwC%2Bj7g6pPsZ0YSMUJzl5%2FsYovoOyOLtxEHO3frWgT3BENIBGUqWSborkjmapXQzPcdFoJ47u6PZEjORCS6qIFGzdtC8HkZOzh4tbq4Ap5Mif%2FElUHFk%2BjBZym6JupM4zpqlQNG0HD2blXZfz%2FXv%2BSx56CwXxn8xwxqoqAJsdBl2dOVK2S%2F8UtyFVbXOUky35INVsBP82SDbkuiGc3n8n3MRj7hM%2FHkQIOadRHFk46ZvHfQw%2FMoXhbBh3JUtCH%2BqTC5R%2B5Q35Z52G4GPbvoSrMce%2BSmBNm%2F0Hh%2F%2BOL9Gt9uwLX%2FcUH1OGxjhlpB6B3V2p6A7INXWECFMEHBW6ZRawDfju%2FSHo3yVQGupTwtVitfenQuDjyCudt5phtzVdN38fyMdXbwAY5FBN08YU%2FRw%2FdzDKovvzi5ZIIiAD9Kyb1BxDEeOeKBnkstlG8e2xndNj8Y%2F5v1WCnaxggIRdDMXCUmR6nHy%2Fj4qbMLnk%2BTrOkMhPwMecMBEqGem6YwV99zeK%2Fa%2FZrbbciS%2B0IWkOJKOqJXlXcOYNLNl5DDzrZ7WBjqkAS4QTiE0EuSBS0Z2yYI8q9v5lmHpdlPUREyqE2pbcxFMhckL8Ljx5xjpDiO%2BgpPHwbrciLBDka7%2BPMFSrYrjt9S7tbzGtecMQO1GVMqcyC%2FzTvIv2WnxBtzVz7VgoLe%2FicndIrvjRJbJ7s8KrXoKRSR5qyszegSmBKqtiI9N4eAZh1ooj9LkLQqu5Pb%2FeB%2Bz1cXphhUWC2lPnJPxZicgU6d6A0VJ&X-Amz-Signature=b7f2554243cf7fc3f257a9618fdaf382cf4793b09ea668932b921534f591d4f3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS6HSJOB%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDAQbMSlu0hUNxrhZWBgWtg3iKyihMJr%2BdvOUcjj41m%2BgIhAMQqbO2n4VVNVBjvKPYmkbyqGpTRBQpy7P2hH%2FuFPdsOKv8DCCYQABoMNjM3NDIzMTgzODA1IgxyQ5b9cRyrdyj6oj8q3APSX%2F4o4lhOY%2FqYmaF8LAqH2pK9R0wHEFCkPxZ%2BkoXE8df8LtnQZo2r4dYrlnSL8TiDFKbHEDGhYJXLvZ%2Bg3SalUyUIGwC%2Bj7g6pPsZ0YSMUJzl5%2FsYovoOyOLtxEHO3frWgT3BENIBGUqWSborkjmapXQzPcdFoJ47u6PZEjORCS6qIFGzdtC8HkZOzh4tbq4Ap5Mif%2FElUHFk%2BjBZym6JupM4zpqlQNG0HD2blXZfz%2FXv%2BSx56CwXxn8xwxqoqAJsdBl2dOVK2S%2F8UtyFVbXOUky35INVsBP82SDbkuiGc3n8n3MRj7hM%2FHkQIOadRHFk46ZvHfQw%2FMoXhbBh3JUtCH%2BqTC5R%2B5Q35Z52G4GPbvoSrMce%2BSmBNm%2F0Hh%2F%2BOL9Gt9uwLX%2FcUH1OGxjhlpB6B3V2p6A7INXWECFMEHBW6ZRawDfju%2FSHo3yVQGupTwtVitfenQuDjyCudt5phtzVdN38fyMdXbwAY5FBN08YU%2FRw%2FdzDKovvzi5ZIIiAD9Kyb1BxDEeOeKBnkstlG8e2xndNj8Y%2F5v1WCnaxggIRdDMXCUmR6nHy%2Fj4qbMLnk%2BTrOkMhPwMecMBEqGem6YwV99zeK%2Fa%2FZrbbciS%2B0IWkOJKOqJXlXcOYNLNl5DDzrZ7WBjqkAS4QTiE0EuSBS0Z2yYI8q9v5lmHpdlPUREyqE2pbcxFMhckL8Ljx5xjpDiO%2BgpPHwbrciLBDka7%2BPMFSrYrjt9S7tbzGtecMQO1GVMqcyC%2FzTvIv2WnxBtzVz7VgoLe%2FicndIrvjRJbJ7s8KrXoKRSR5qyszegSmBKqtiI9N4eAZh1ooj9LkLQqu5Pb%2FeB%2Bz1cXphhUWC2lPnJPxZicgU6d6A0VJ&X-Amz-Signature=00bf820ced10327d459e4f9fb800f23ec5c9641188e044e1d7b860708caea400&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS6HSJOB%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDAQbMSlu0hUNxrhZWBgWtg3iKyihMJr%2BdvOUcjj41m%2BgIhAMQqbO2n4VVNVBjvKPYmkbyqGpTRBQpy7P2hH%2FuFPdsOKv8DCCYQABoMNjM3NDIzMTgzODA1IgxyQ5b9cRyrdyj6oj8q3APSX%2F4o4lhOY%2FqYmaF8LAqH2pK9R0wHEFCkPxZ%2BkoXE8df8LtnQZo2r4dYrlnSL8TiDFKbHEDGhYJXLvZ%2Bg3SalUyUIGwC%2Bj7g6pPsZ0YSMUJzl5%2FsYovoOyOLtxEHO3frWgT3BENIBGUqWSborkjmapXQzPcdFoJ47u6PZEjORCS6qIFGzdtC8HkZOzh4tbq4Ap5Mif%2FElUHFk%2BjBZym6JupM4zpqlQNG0HD2blXZfz%2FXv%2BSx56CwXxn8xwxqoqAJsdBl2dOVK2S%2F8UtyFVbXOUky35INVsBP82SDbkuiGc3n8n3MRj7hM%2FHkQIOadRHFk46ZvHfQw%2FMoXhbBh3JUtCH%2BqTC5R%2B5Q35Z52G4GPbvoSrMce%2BSmBNm%2F0Hh%2F%2BOL9Gt9uwLX%2FcUH1OGxjhlpB6B3V2p6A7INXWECFMEHBW6ZRawDfju%2FSHo3yVQGupTwtVitfenQuDjyCudt5phtzVdN38fyMdXbwAY5FBN08YU%2FRw%2FdzDKovvzi5ZIIiAD9Kyb1BxDEeOeKBnkstlG8e2xndNj8Y%2F5v1WCnaxggIRdDMXCUmR6nHy%2Fj4qbMLnk%2BTrOkMhPwMecMBEqGem6YwV99zeK%2Fa%2FZrbbciS%2B0IWkOJKOqJXlXcOYNLNl5DDzrZ7WBjqkAS4QTiE0EuSBS0Z2yYI8q9v5lmHpdlPUREyqE2pbcxFMhckL8Ljx5xjpDiO%2BgpPHwbrciLBDka7%2BPMFSrYrjt9S7tbzGtecMQO1GVMqcyC%2FzTvIv2WnxBtzVz7VgoLe%2FicndIrvjRJbJ7s8KrXoKRSR5qyszegSmBKqtiI9N4eAZh1ooj9LkLQqu5Pb%2FeB%2Bz1cXphhUWC2lPnJPxZicgU6d6A0VJ&X-Amz-Signature=98db0bc942486573a2777b020c91723e4d7306f2ff8aa21b6d803b36c7845aaf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS6HSJOB%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDAQbMSlu0hUNxrhZWBgWtg3iKyihMJr%2BdvOUcjj41m%2BgIhAMQqbO2n4VVNVBjvKPYmkbyqGpTRBQpy7P2hH%2FuFPdsOKv8DCCYQABoMNjM3NDIzMTgzODA1IgxyQ5b9cRyrdyj6oj8q3APSX%2F4o4lhOY%2FqYmaF8LAqH2pK9R0wHEFCkPxZ%2BkoXE8df8LtnQZo2r4dYrlnSL8TiDFKbHEDGhYJXLvZ%2Bg3SalUyUIGwC%2Bj7g6pPsZ0YSMUJzl5%2FsYovoOyOLtxEHO3frWgT3BENIBGUqWSborkjmapXQzPcdFoJ47u6PZEjORCS6qIFGzdtC8HkZOzh4tbq4Ap5Mif%2FElUHFk%2BjBZym6JupM4zpqlQNG0HD2blXZfz%2FXv%2BSx56CwXxn8xwxqoqAJsdBl2dOVK2S%2F8UtyFVbXOUky35INVsBP82SDbkuiGc3n8n3MRj7hM%2FHkQIOadRHFk46ZvHfQw%2FMoXhbBh3JUtCH%2BqTC5R%2B5Q35Z52G4GPbvoSrMce%2BSmBNm%2F0Hh%2F%2BOL9Gt9uwLX%2FcUH1OGxjhlpB6B3V2p6A7INXWECFMEHBW6ZRawDfju%2FSHo3yVQGupTwtVitfenQuDjyCudt5phtzVdN38fyMdXbwAY5FBN08YU%2FRw%2FdzDKovvzi5ZIIiAD9Kyb1BxDEeOeKBnkstlG8e2xndNj8Y%2F5v1WCnaxggIRdDMXCUmR6nHy%2Fj4qbMLnk%2BTrOkMhPwMecMBEqGem6YwV99zeK%2Fa%2FZrbbciS%2B0IWkOJKOqJXlXcOYNLNl5DDzrZ7WBjqkAS4QTiE0EuSBS0Z2yYI8q9v5lmHpdlPUREyqE2pbcxFMhckL8Ljx5xjpDiO%2BgpPHwbrciLBDka7%2BPMFSrYrjt9S7tbzGtecMQO1GVMqcyC%2FzTvIv2WnxBtzVz7VgoLe%2FicndIrvjRJbJ7s8KrXoKRSR5qyszegSmBKqtiI9N4eAZh1ooj9LkLQqu5Pb%2FeB%2Bz1cXphhUWC2lPnJPxZicgU6d6A0VJ&X-Amz-Signature=7cd3f6363145eba5e50f6486d404f92fac49cd47c3cc5185055bce124bd4ec63&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MCLBB3Q%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDsexTwj4XL4HhxxbDfQR3ShulLi4qFPyHuqjP6lY416wIhAPVa6FghxICbONJTOqviNCMqzn2efvcvO9XnalJMClYcKv8DCCYQABoMNjM3NDIzMTgzODA1IgxFbldb6Z8qKnf2WVAq3AMc%2FIOGRug8npa%2BQmC8YR5qtOuyJjlXhUMhM%2BAuIYZuftFYeYaHnMEd8RGXP3CPl702BvAF2vD0D2CCaNcxPdVQoAYiz8oxYrCZbxIHi3NOWLDqnzrAhJnNwx7z6qRgrsrmROXytDAag2XTDmVAHhMQRMFrYSpCn9%2FZEvtb9yPGA4KZf4Hgg1Ivg7YqtTMec8vidtNfBfVi3Uuz%2FWVjbNtIm55WK3Sg%2FRZvt53UDafu2oP2DWF7c5zHxAWXUZbkj5Z%2F0dboJ5htaaGhGU%2Bc1zwrneIFXx8Z0O%2BmjUBVRSCprfIh57bAKrsHb7xuXFyees9tDme8O9Zuoj88Zzij1jaSk%2Bga7hYOaPfPM761ZEjCe%2FrhTY3Ty%2Fx9gW%2FHXcDzs3%2FFnT1%2BStBHmzXhTB%2FK3Ctw5da6z8fA%2FFIb%2FkBJ%2BdIB26vBx5RUFUY8NTfbK4%2FM4%2B8Pl%2BUVXKKBZaQC5LbI7ClgsNd%2FkachKon8Z8E9Ycmck2EeENk5l%2BrUKMo0SpWkuwV3Rju5afm7LZu%2BH9iX2sF9HjCgz808OJ6LXhuMmjlFDbn%2BtZ2UglKDRo5vZhoHYD3WeZMvGwcwdKK%2BRK7WlTZH5m5GwXD27LBG3AqrV0kerx8a1tIbXryZGvTe1jDpr57WBjqkAbEuFF3W3ysb%2FL6ODWskB7VS%2FUKOOvxFi1%2FMMthZFsMAbzXKM2Uhxmx9G9D32GuhC%2B8nvFeDmLSpyoE%2FNOTOCvQqetCkliyzl%2Fgb5LEXIMG%2BZ%2FpS2KGJTOX3d0CfflAmWJr8NryKzvBSxOa2axDw6TrvJ7MIxjrZUWr4BrvuhudwsfwEKfStRYSpPXMule53I1XQf53AAUzJlbE2MZu%2FxOcIsHYr&X-Amz-Signature=ed827e3b1288ed9781e55be6d2c81e8faad2733851d54f8a7b2d0525ac73127f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666G4Z6CG2%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF4aCXVzLXdlc3QtMiJHMEUCIEYpvw2dhBoFyG98FHnqg9k3DaAN3MPo237U08Zr0ikmAiEA8Ote2%2FOwdyfg5m%2BiuPMTY3lDfcUHd1alDE5egXBwxwYq%2FwMIJhAAGgw2Mzc0MjMxODM4MDUiDL9MpgJukXkhdl1XwircA536Troxy5Nb3v4geXbR%2FRnw1U3yo3W6Ea4ltDsBT1I%2F8T94N37FKvDC0Bc1OP3lWr3x%2FMay3zB%2FaC8xYnTDEEl0n45Lbf6bm57%2B1roaL6idPiheqIB6Uhc1QsRjhxc%2B0x45K%2B6T7yo94kldJh%2BVs6%2BLvmI6P3RDEmJjoXBSXwGirTY5eOXPAZ1dOREbXvFlnRrBViAQLLxc9%2B%2FnvNO7cXW1DIHmIAkqHH5SwYlh%2FuHgm1LjC%2FVIucFj9dIK%2BNY%2ByDGu9Yz0qKJ8t1rsVva3fScD2oazt97JWBJC9Zt1Q0J4axVkqy%2BtvYd4NM7Q29razAcIzDQwrNFgMpWiEc891nBL1x8gBCvnWVJDnfGH7fTwBd6J4ioZCp7hGiRPNrIUC4gPdWNG3x7qSRBUfqU3vIWGCq4pCn1VcCrgIUlnDR5JyrEzfZ4N9Ao%2B8t7clrc2S%2F6LdmxLEo5SyHtvGd9us9RBcP4yKZE9CUFiLod7TyIywIYUkwSQvbupukUtosse%2F7JfK5ywgA942MRW6z0MuiPKke8atQBWQYRUBz5C9e%2FYqJHvnUHb4pEs5jwiUtfbx9%2FQ9VwBVsjGJij4K60UqGQPmUEI3Q%2FE1oyt%2FDio0fimjnc1BT%2FV0kKiy8MOMMmwntYGOqUBdSmY9s%2FHB2xjuPbzO6h3ZTgilbqWkHzhk25hz2mka0jzVLN34hmSRxA1%2FeydqEt6YilvgvNztXmeQtG7sz2o%2B9tpIGBAxgx0H1gtoMPPOolXACARB2xMi9dYMRWHuu9eVr32dlUDru1%2BGfJmbKnTXbF%2Fjt8v1jGEFFGbAvU1mOxcwILVfVPOMAaLJufYXp9S9Ae0I%2BTWwiCG9EXcT7CD69DcdDUR&X-Amz-Signature=85112f7b14dbcb5e7c1c9a2bff984f24545963a4370115de9bb3d6e156a9212e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666G4Z6CG2%2F20261008%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261008T151327Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF4aCXVzLXdlc3QtMiJHMEUCIEYpvw2dhBoFyG98FHnqg9k3DaAN3MPo237U08Zr0ikmAiEA8Ote2%2FOwdyfg5m%2BiuPMTY3lDfcUHd1alDE5egXBwxwYq%2FwMIJhAAGgw2Mzc0MjMxODM4MDUiDL9MpgJukXkhdl1XwircA536Troxy5Nb3v4geXbR%2FRnw1U3yo3W6Ea4ltDsBT1I%2F8T94N37FKvDC0Bc1OP3lWr3x%2FMay3zB%2FaC8xYnTDEEl0n45Lbf6bm57%2B1roaL6idPiheqIB6Uhc1QsRjhxc%2B0x45K%2B6T7yo94kldJh%2BVs6%2BLvmI6P3RDEmJjoXBSXwGirTY5eOXPAZ1dOREbXvFlnRrBViAQLLxc9%2B%2FnvNO7cXW1DIHmIAkqHH5SwYlh%2FuHgm1LjC%2FVIucFj9dIK%2BNY%2ByDGu9Yz0qKJ8t1rsVva3fScD2oazt97JWBJC9Zt1Q0J4axVkqy%2BtvYd4NM7Q29razAcIzDQwrNFgMpWiEc891nBL1x8gBCvnWVJDnfGH7fTwBd6J4ioZCp7hGiRPNrIUC4gPdWNG3x7qSRBUfqU3vIWGCq4pCn1VcCrgIUlnDR5JyrEzfZ4N9Ao%2B8t7clrc2S%2F6LdmxLEo5SyHtvGd9us9RBcP4yKZE9CUFiLod7TyIywIYUkwSQvbupukUtosse%2F7JfK5ywgA942MRW6z0MuiPKke8atQBWQYRUBz5C9e%2FYqJHvnUHb4pEs5jwiUtfbx9%2FQ9VwBVsjGJij4K60UqGQPmUEI3Q%2FE1oyt%2FDio0fimjnc1BT%2FV0kKiy8MOMMmwntYGOqUBdSmY9s%2FHB2xjuPbzO6h3ZTgilbqWkHzhk25hz2mka0jzVLN34hmSRxA1%2FeydqEt6YilvgvNztXmeQtG7sz2o%2B9tpIGBAxgx0H1gtoMPPOolXACARB2xMi9dYMRWHuu9eVr32dlUDru1%2BGfJmbKnTXbF%2Fjt8v1jGEFFGbAvU1mOxcwILVfVPOMAaLJufYXp9S9Ae0I%2BTWwiCG9EXcT7CD69DcdDUR&X-Amz-Signature=f96b1960f928c5b8a08706fd7e48a19f3f4bd4e9ff21583300e3d637671a38a9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
