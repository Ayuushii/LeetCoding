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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SULNICV3%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF9QNrq96BU4E7OA5LYHdIPEab8gV2D6m%2FG7L61GxArbAiBh5Z0h%2F%2BFDhx9cD7E%2F9%2FPbrkF6DKf2OjTC86CJ8Ux8eiqIBAiE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMs%2Fm26BB6kkaLu13KKtwD%2FX23r31yk%2F%2Fw07fH7PBJJL4NWtGbRCV%2FtyaXLFfcVeMfa8N34fr7hul2sc9hjzk5m7yOtPH8V1Y3819S2CvghEQKKPKu8SsYHm2pc7PNtvdvuuXz9kWMsmWv%2B6l9Q9Kwy5ExdFoo3otKpN0lrlrzrq3drqikXhbar1FfcUBIg%2FAdYONtSYAzHJwX8R7X3Ph1zsAR3n8NRgmk%2FtWVaSKEeMuW913Dx9gHIeWMHzKSBlig8PFRl%2BwphO4JvseKJmPrV%2Fr%2BQ7EuZD9C7io%2BpZRZZRxP4Da7UAkRULoRh%2FKrEuexWXPMVUNH3xcRJQ%2B8UUfBgYJK3DFXp%2FJVCk4ToKbM63tcUTaY4lmCxDT6XbNNPid9aQGguB4jYkKFQJU1Ya%2FPjnImAnKC1kd8HPu42Q3A8pMs%2FNazc0iyt7hmwkIywG0C4WVjBt9lE8PaQMNCjRpaWHrolr%2FUTaLancA0sC7TYRXVZ1QE6HD4WepvHLz2Eu04r6vS7qbhFTeKbyd0jHM63GwbcRIF2sXwCdtPmZOtHO%2FCHmIJQ2dTZACaUtOMVfJwwi%2FJuZoY%2F7jYYZKSdBtVHc5MUYWaQDIe%2BmDEcxofBCnf6r9pMQzJWLz9uG5xxvigUgZ6cwFexhxLWeQw7KGK1QY6pgEVOrDSUC7To6gS7oJRftFLoSJ6nHpXg4OeDMqHY4MYvr7tb56kmNsXVfvAQm2u49R6yACE4vcdrtg4wld1devexfLtAVDxk3EtkWO28PS5eXuaKL4IrJHYJuX84qnB%2FLNHpp%2BX%2B1mPviaahMVYDdESpzXLJp%2FAhubPh3VIS43ftDiHbSfaq8EjahemtKqleWzX7BSpOX17zMjIueBGtI6%2BnO7tJ1se&X-Amz-Signature=a6bcc32109b80a432927046bb7e362381246f2a7e745c92d6e0edcf1ce361b48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SULNICV3%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF9QNrq96BU4E7OA5LYHdIPEab8gV2D6m%2FG7L61GxArbAiBh5Z0h%2F%2BFDhx9cD7E%2F9%2FPbrkF6DKf2OjTC86CJ8Ux8eiqIBAiE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMs%2Fm26BB6kkaLu13KKtwD%2FX23r31yk%2F%2Fw07fH7PBJJL4NWtGbRCV%2FtyaXLFfcVeMfa8N34fr7hul2sc9hjzk5m7yOtPH8V1Y3819S2CvghEQKKPKu8SsYHm2pc7PNtvdvuuXz9kWMsmWv%2B6l9Q9Kwy5ExdFoo3otKpN0lrlrzrq3drqikXhbar1FfcUBIg%2FAdYONtSYAzHJwX8R7X3Ph1zsAR3n8NRgmk%2FtWVaSKEeMuW913Dx9gHIeWMHzKSBlig8PFRl%2BwphO4JvseKJmPrV%2Fr%2BQ7EuZD9C7io%2BpZRZZRxP4Da7UAkRULoRh%2FKrEuexWXPMVUNH3xcRJQ%2B8UUfBgYJK3DFXp%2FJVCk4ToKbM63tcUTaY4lmCxDT6XbNNPid9aQGguB4jYkKFQJU1Ya%2FPjnImAnKC1kd8HPu42Q3A8pMs%2FNazc0iyt7hmwkIywG0C4WVjBt9lE8PaQMNCjRpaWHrolr%2FUTaLancA0sC7TYRXVZ1QE6HD4WepvHLz2Eu04r6vS7qbhFTeKbyd0jHM63GwbcRIF2sXwCdtPmZOtHO%2FCHmIJQ2dTZACaUtOMVfJwwi%2FJuZoY%2F7jYYZKSdBtVHc5MUYWaQDIe%2BmDEcxofBCnf6r9pMQzJWLz9uG5xxvigUgZ6cwFexhxLWeQw7KGK1QY6pgEVOrDSUC7To6gS7oJRftFLoSJ6nHpXg4OeDMqHY4MYvr7tb56kmNsXVfvAQm2u49R6yACE4vcdrtg4wld1devexfLtAVDxk3EtkWO28PS5eXuaKL4IrJHYJuX84qnB%2FLNHpp%2BX%2B1mPviaahMVYDdESpzXLJp%2FAhubPh3VIS43ftDiHbSfaq8EjahemtKqleWzX7BSpOX17zMjIueBGtI6%2BnO7tJ1se&X-Amz-Signature=85cf0b7b40864ddf4680e02922796404121ee3634e82cec7763d5d571a41c2e7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SULNICV3%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF9QNrq96BU4E7OA5LYHdIPEab8gV2D6m%2FG7L61GxArbAiBh5Z0h%2F%2BFDhx9cD7E%2F9%2FPbrkF6DKf2OjTC86CJ8Ux8eiqIBAiE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMs%2Fm26BB6kkaLu13KKtwD%2FX23r31yk%2F%2Fw07fH7PBJJL4NWtGbRCV%2FtyaXLFfcVeMfa8N34fr7hul2sc9hjzk5m7yOtPH8V1Y3819S2CvghEQKKPKu8SsYHm2pc7PNtvdvuuXz9kWMsmWv%2B6l9Q9Kwy5ExdFoo3otKpN0lrlrzrq3drqikXhbar1FfcUBIg%2FAdYONtSYAzHJwX8R7X3Ph1zsAR3n8NRgmk%2FtWVaSKEeMuW913Dx9gHIeWMHzKSBlig8PFRl%2BwphO4JvseKJmPrV%2Fr%2BQ7EuZD9C7io%2BpZRZZRxP4Da7UAkRULoRh%2FKrEuexWXPMVUNH3xcRJQ%2B8UUfBgYJK3DFXp%2FJVCk4ToKbM63tcUTaY4lmCxDT6XbNNPid9aQGguB4jYkKFQJU1Ya%2FPjnImAnKC1kd8HPu42Q3A8pMs%2FNazc0iyt7hmwkIywG0C4WVjBt9lE8PaQMNCjRpaWHrolr%2FUTaLancA0sC7TYRXVZ1QE6HD4WepvHLz2Eu04r6vS7qbhFTeKbyd0jHM63GwbcRIF2sXwCdtPmZOtHO%2FCHmIJQ2dTZACaUtOMVfJwwi%2FJuZoY%2F7jYYZKSdBtVHc5MUYWaQDIe%2BmDEcxofBCnf6r9pMQzJWLz9uG5xxvigUgZ6cwFexhxLWeQw7KGK1QY6pgEVOrDSUC7To6gS7oJRftFLoSJ6nHpXg4OeDMqHY4MYvr7tb56kmNsXVfvAQm2u49R6yACE4vcdrtg4wld1devexfLtAVDxk3EtkWO28PS5eXuaKL4IrJHYJuX84qnB%2FLNHpp%2BX%2B1mPviaahMVYDdESpzXLJp%2FAhubPh3VIS43ftDiHbSfaq8EjahemtKqleWzX7BSpOX17zMjIueBGtI6%2BnO7tJ1se&X-Amz-Signature=3464c92d50b510e83011f032f93857c22d3e3af87f481a4cbe5fa6422445d02a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNNUL7TK%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChy7ZYxyx1c2%2Bi2F8ufZpVrma8jtZBNjJZOosaUa0QrgIhAPI8QYqNCiqL6%2FWkfuvx%2BolFDUgaAgesqn%2BJvjg89BMDKogECIT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyUtSs%2FqweFwTCKDYq3AOd7kl9aaLDfhp33XcbcaocCUQJz3D3os4IeZOSEJMGiBjGkZCE3urSYQ8FdXdt9D1dZ5CibYzEhmaekj2H1zwcCJ6a4DGZF72iHVjqgp%2BtX62myMLzVKHX8U%2Facw%2FTUPPlm6EfgvE%2FblLIgqhkpCfrydN7VPq4mTp3ckC4vzr0c5HlDcsKaex5kaQW62gwsuqYJGB8wIWLCklG2GkAuALtdQzgBTYE704os58kG8j5zxs1rh9qQcIR1H2ScJVSOMpS0IxAEP%2BeUvnC6L6j9IO3xxfNtj%2BSPJnwJnWaon8UXHSB%2BAaYsJ%2BJo26sLyqIWgkF970uxYAkAMnq8kN1vUB%2F8WEpmRf%2BsPxSb6nWEXxHgUT37FZDJvby%2FrFuaFom0AcaSQ%2BLadmvK82NBGQz4GrsgrrWOXNUcCgjVFYonrxypetBCmf2anYgcdXVxdrB%2B1lcUUEyXJPwJz85Ks%2F9JEJqW0GMRWdC7zak3bCzAGvesspYtJk0x%2BgLmzaw1jWYW%2FWwKWNYWWOP0EzHfQac85qJZCXpAsg14VLrEAFogmt0SCoOGQs%2Fh32vmK2GGzEmR1ln8E2QyOZgDux%2FR%2B%2F1vByYmozlGcYIDkspoYIUbHbcg163EqgjpuSNCUSt6DDtoYrVBjqkAXY%2BBXiwZx6tbQ9ULBC64nIz%2FmZ1fldpy1wUy0N3qDoghsw%2F4Lo%2FKSADR5YILZw%2F%2FrG72HRpplNCehuniw6aBm2H6cXKmo2CkqyZ%2B0sIjAWljCpvvtYg39ry2T6a%2BAf3sFFiRdpl1ajhbvPNdtLrLdAu7M1SO3uML7GcuLhHHiBseqQh8Xb4SvlfAzZxhBtWE83pjob5eyntIFKrwoVvaM%2BKkCgg&X-Amz-Signature=f3815273b79deb1c8fd2485caef1c6a64882791417611e25469a2babfde58516&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNNUL7TK%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChy7ZYxyx1c2%2Bi2F8ufZpVrma8jtZBNjJZOosaUa0QrgIhAPI8QYqNCiqL6%2FWkfuvx%2BolFDUgaAgesqn%2BJvjg89BMDKogECIT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyUtSs%2FqweFwTCKDYq3AOd7kl9aaLDfhp33XcbcaocCUQJz3D3os4IeZOSEJMGiBjGkZCE3urSYQ8FdXdt9D1dZ5CibYzEhmaekj2H1zwcCJ6a4DGZF72iHVjqgp%2BtX62myMLzVKHX8U%2Facw%2FTUPPlm6EfgvE%2FblLIgqhkpCfrydN7VPq4mTp3ckC4vzr0c5HlDcsKaex5kaQW62gwsuqYJGB8wIWLCklG2GkAuALtdQzgBTYE704os58kG8j5zxs1rh9qQcIR1H2ScJVSOMpS0IxAEP%2BeUvnC6L6j9IO3xxfNtj%2BSPJnwJnWaon8UXHSB%2BAaYsJ%2BJo26sLyqIWgkF970uxYAkAMnq8kN1vUB%2F8WEpmRf%2BsPxSb6nWEXxHgUT37FZDJvby%2FrFuaFom0AcaSQ%2BLadmvK82NBGQz4GrsgrrWOXNUcCgjVFYonrxypetBCmf2anYgcdXVxdrB%2B1lcUUEyXJPwJz85Ks%2F9JEJqW0GMRWdC7zak3bCzAGvesspYtJk0x%2BgLmzaw1jWYW%2FWwKWNYWWOP0EzHfQac85qJZCXpAsg14VLrEAFogmt0SCoOGQs%2Fh32vmK2GGzEmR1ln8E2QyOZgDux%2FR%2B%2F1vByYmozlGcYIDkspoYIUbHbcg163EqgjpuSNCUSt6DDtoYrVBjqkAXY%2BBXiwZx6tbQ9ULBC64nIz%2FmZ1fldpy1wUy0N3qDoghsw%2F4Lo%2FKSADR5YILZw%2F%2FrG72HRpplNCehuniw6aBm2H6cXKmo2CkqyZ%2B0sIjAWljCpvvtYg39ry2T6a%2BAf3sFFiRdpl1ajhbvPNdtLrLdAu7M1SO3uML7GcuLhHHiBseqQh8Xb4SvlfAzZxhBtWE83pjob5eyntIFKrwoVvaM%2BKkCgg&X-Amz-Signature=5b174cb7d1a49bf558a99de4f269e6324e55cac41a271c6538cf9b8c5053f5bb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNNUL7TK%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChy7ZYxyx1c2%2Bi2F8ufZpVrma8jtZBNjJZOosaUa0QrgIhAPI8QYqNCiqL6%2FWkfuvx%2BolFDUgaAgesqn%2BJvjg89BMDKogECIT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyUtSs%2FqweFwTCKDYq3AOd7kl9aaLDfhp33XcbcaocCUQJz3D3os4IeZOSEJMGiBjGkZCE3urSYQ8FdXdt9D1dZ5CibYzEhmaekj2H1zwcCJ6a4DGZF72iHVjqgp%2BtX62myMLzVKHX8U%2Facw%2FTUPPlm6EfgvE%2FblLIgqhkpCfrydN7VPq4mTp3ckC4vzr0c5HlDcsKaex5kaQW62gwsuqYJGB8wIWLCklG2GkAuALtdQzgBTYE704os58kG8j5zxs1rh9qQcIR1H2ScJVSOMpS0IxAEP%2BeUvnC6L6j9IO3xxfNtj%2BSPJnwJnWaon8UXHSB%2BAaYsJ%2BJo26sLyqIWgkF970uxYAkAMnq8kN1vUB%2F8WEpmRf%2BsPxSb6nWEXxHgUT37FZDJvby%2FrFuaFom0AcaSQ%2BLadmvK82NBGQz4GrsgrrWOXNUcCgjVFYonrxypetBCmf2anYgcdXVxdrB%2B1lcUUEyXJPwJz85Ks%2F9JEJqW0GMRWdC7zak3bCzAGvesspYtJk0x%2BgLmzaw1jWYW%2FWwKWNYWWOP0EzHfQac85qJZCXpAsg14VLrEAFogmt0SCoOGQs%2Fh32vmK2GGzEmR1ln8E2QyOZgDux%2FR%2B%2F1vByYmozlGcYIDkspoYIUbHbcg163EqgjpuSNCUSt6DDtoYrVBjqkAXY%2BBXiwZx6tbQ9ULBC64nIz%2FmZ1fldpy1wUy0N3qDoghsw%2F4Lo%2FKSADR5YILZw%2F%2FrG72HRpplNCehuniw6aBm2H6cXKmo2CkqyZ%2B0sIjAWljCpvvtYg39ry2T6a%2BAf3sFFiRdpl1ajhbvPNdtLrLdAu7M1SO3uML7GcuLhHHiBseqQh8Xb4SvlfAzZxhBtWE83pjob5eyntIFKrwoVvaM%2BKkCgg&X-Amz-Signature=c0910e75e2bf331ac0fbc37e2b626636d5e410e753b8e8d20c15817172091407&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNNUL7TK%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124243Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChy7ZYxyx1c2%2Bi2F8ufZpVrma8jtZBNjJZOosaUa0QrgIhAPI8QYqNCiqL6%2FWkfuvx%2BolFDUgaAgesqn%2BJvjg89BMDKogECIT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwyUtSs%2FqweFwTCKDYq3AOd7kl9aaLDfhp33XcbcaocCUQJz3D3os4IeZOSEJMGiBjGkZCE3urSYQ8FdXdt9D1dZ5CibYzEhmaekj2H1zwcCJ6a4DGZF72iHVjqgp%2BtX62myMLzVKHX8U%2Facw%2FTUPPlm6EfgvE%2FblLIgqhkpCfrydN7VPq4mTp3ckC4vzr0c5HlDcsKaex5kaQW62gwsuqYJGB8wIWLCklG2GkAuALtdQzgBTYE704os58kG8j5zxs1rh9qQcIR1H2ScJVSOMpS0IxAEP%2BeUvnC6L6j9IO3xxfNtj%2BSPJnwJnWaon8UXHSB%2BAaYsJ%2BJo26sLyqIWgkF970uxYAkAMnq8kN1vUB%2F8WEpmRf%2BsPxSb6nWEXxHgUT37FZDJvby%2FrFuaFom0AcaSQ%2BLadmvK82NBGQz4GrsgrrWOXNUcCgjVFYonrxypetBCmf2anYgcdXVxdrB%2B1lcUUEyXJPwJz85Ks%2F9JEJqW0GMRWdC7zak3bCzAGvesspYtJk0x%2BgLmzaw1jWYW%2FWwKWNYWWOP0EzHfQac85qJZCXpAsg14VLrEAFogmt0SCoOGQs%2Fh32vmK2GGzEmR1ln8E2QyOZgDux%2FR%2B%2F1vByYmozlGcYIDkspoYIUbHbcg163EqgjpuSNCUSt6DDtoYrVBjqkAXY%2BBXiwZx6tbQ9ULBC64nIz%2FmZ1fldpy1wUy0N3qDoghsw%2F4Lo%2FKSADR5YILZw%2F%2FrG72HRpplNCehuniw6aBm2H6cXKmo2CkqyZ%2B0sIjAWljCpvvtYg39ry2T6a%2BAf3sFFiRdpl1ajhbvPNdtLrLdAu7M1SO3uML7GcuLhHHiBseqQh8Xb4SvlfAzZxhBtWE83pjob5eyntIFKrwoVvaM%2BKkCgg&X-Amz-Signature=9a6d569c159e6c4680d4c5b6bac0bdb5bd06b3385386cd16c55bef66b3ed0a7a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46622WMLCLC%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDxRBJV6j8MMCPxh%2FbWX0LXkpd0hJao1jqzlap3nqzaRAIgP5iXm1IlW2NbQ5IIhyHkHjur%2FiVnVILdsHIl1Ihx1yEqiAQIhP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBI9IovNjo65%2B3W6lSrcA6ppXNtde4h0%2FQ7PTebLXyf1d7Bwl5AqhrinP2ElL3%2FfcaauTQQeTEisTx3mWBYmzZHV0hqH8Plc9yeLqpbPU1xhEuBH0oVgkFI5G3quLP3Zc3mo63lecsaGHfqh%2Fyj7TMT7an0fjL3p7OMbxF7EvUjAPtbCwiiNlHg%2FUeCHkcc7yzPN3D9i%2F1gOk2s9hZmbOw2%2FhiKIfHhw7rHN%2FHeIolNIkKfWGsMnPXJ%2FjpMBu%2F3WXf8RHotFeAcpRC4pp5%2FjQ2AXtMQRNkTle17LaHoTOZroLSznBIV0tlAPMat4D7yPPi6Nwg6mOwsZBdkqDLPYBeIUD8NGHS2I52a2tHxAFmWpiR26%2BLbE1LmuSKcGzYtY2lv5PuTD3vMNxhD%2FAwrpyqLZq3%2F1cXpqWg4qMYv6VFJDMX%2BW2VouBopYDgqzL49avnwS9yntnsAJ250FKiY2CNslDAE45hNavFEIoXpVwkI9BVM0TlvWUwOeXG2GHORDAbcFkgGhvKR0LhpRfi%2FbxT0Ymu8CoeAp0uLJTPWVSUIAum%2FZDJQVxfAE2o7bS%2BZfGm1FFeBOJtm4Z5XLQY0im4RuZyLkmR4WwI9yJ2prfn8QfJwaJ8SpBQiNX1%2FXOvuu%2Bz1P8mtaiW%2FyvKbOMMeiitUGOqUBLB9ZDu5v8uXaY%2Buts2sCfFqBM4dqwi7apkChOaVg4pd73aZSDGJ8TQTajaCXRZipz1O%2FCvD%2B%2BMY9%2B%2Fhi71dfBQjXcDPHigHjDYq%2F7HSETCvXlUe1eBidy0OGfl4agrfJwazp7TP2Occ1ZYuo1ynLFd%2BfIWrh%2BPzG7VAauvsMr4C22Leyzqzx7Qz%2F%2BeGQRLACBaCcKrTkUtfyir05taZBnDFhqDSn&X-Amz-Signature=d1754b61a9f000e7b63980da07401ea4750247824ddc80eaf1ebb63f6b594673&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGEFNVQI%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFuEqTroGnWjaHcGvaBp5EydYES9jbCvNwSiydFsua6JAiEA%2Btb1oo4ZTTxGXA7k9y3I2e4f0bdF96x3vXvIozPI1wAqiAQIhP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOg%2B1FLzYcgNWYFSeCrcAw0SBmTRyE6trOAul3wn0FaEH3AynvWffuN8r8Cb3H4GEdWCGCm1icu4djuhcR1ftpWOqG997KpzNW%2FqlLmXlvGj6daTYZorNgrFInX6DjfKM%2B9BbEnlZ6PGBVgl1xRUsc7z6sHIypha9cSSTyXFvJvFa1n1o6DPDW1In%2FFHado3ktO84S1JJ%2BhZeS6bNdDGkeoV9Nr1TiC57ovg09dVI8wnyCNjtz0Fwi1obZPO7wRhe91x73DimPT9iyU9PSKr%2FPnEErZFZK73vl8rDVzorTjKYzLMXr5mbWLbU%2FFZBof88Ysmm645baL0fGFjDR2Xp2wYnn0Bn9jLiAodiUw7DVabqxr3pyAUtt6dAnv%2B%2FTWTWhGUJ1H5XQpoBI4U2iR1jQk6Q1QWanXYx2jQU4iQG%2FJhrWt0qR%2BJf8G8M1oXUI5aQKN1B4FUuzswfDG3fKLbppKEUlUdbcYgBfjjzOnn0rruuZTWKJ8sL0G1Q%2FqeMDUdUWuudwToJYRz%2BGo0jMpiNuUo1l0fA61StHUE9yqRAoKZcYepvNuEZfyupVyTniJBONr%2F20uWsp3EIv30rbpyTwqO1mXVEu34%2FceALijKxyct4ZuQ4NJCIjGPxHuvTzZX0ynF1payJbCVSacTMLCgitUGOqUBpn4mBtvQb%2FU0HcwVD8gevuJ%2FggwHm3FMqtX759zDGrH04fWRdMpYp8GA1AH%2FUQE20rlYRS9F0qNClre6r1h7oRLlPOOoTFLEmM08ciympjxAUJT6%2BeNZUoQOPW2h5pu1043KPMm2R4%2B2aHviwrxBc6yI%2Fc0jQQU4MAusqmHTgjxItK20u1%2BbiPnRNggVXgNvM0spSq9F5nEldN6K9qgQCNGi0wP%2F&X-Amz-Signature=6b17cc913242dfb4e1ad51b02f7fadab7fbabfb9787ece6c535c65f2eeefbc88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGEFNVQI%2F20260910%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260910T124244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFuEqTroGnWjaHcGvaBp5EydYES9jbCvNwSiydFsua6JAiEA%2Btb1oo4ZTTxGXA7k9y3I2e4f0bdF96x3vXvIozPI1wAqiAQIhP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOg%2B1FLzYcgNWYFSeCrcAw0SBmTRyE6trOAul3wn0FaEH3AynvWffuN8r8Cb3H4GEdWCGCm1icu4djuhcR1ftpWOqG997KpzNW%2FqlLmXlvGj6daTYZorNgrFInX6DjfKM%2B9BbEnlZ6PGBVgl1xRUsc7z6sHIypha9cSSTyXFvJvFa1n1o6DPDW1In%2FFHado3ktO84S1JJ%2BhZeS6bNdDGkeoV9Nr1TiC57ovg09dVI8wnyCNjtz0Fwi1obZPO7wRhe91x73DimPT9iyU9PSKr%2FPnEErZFZK73vl8rDVzorTjKYzLMXr5mbWLbU%2FFZBof88Ysmm645baL0fGFjDR2Xp2wYnn0Bn9jLiAodiUw7DVabqxr3pyAUtt6dAnv%2B%2FTWTWhGUJ1H5XQpoBI4U2iR1jQk6Q1QWanXYx2jQU4iQG%2FJhrWt0qR%2BJf8G8M1oXUI5aQKN1B4FUuzswfDG3fKLbppKEUlUdbcYgBfjjzOnn0rruuZTWKJ8sL0G1Q%2FqeMDUdUWuudwToJYRz%2BGo0jMpiNuUo1l0fA61StHUE9yqRAoKZcYepvNuEZfyupVyTniJBONr%2F20uWsp3EIv30rbpyTwqO1mXVEu34%2FceALijKxyct4ZuQ4NJCIjGPxHuvTzZX0ynF1payJbCVSacTMLCgitUGOqUBpn4mBtvQb%2FU0HcwVD8gevuJ%2FggwHm3FMqtX759zDGrH04fWRdMpYp8GA1AH%2FUQE20rlYRS9F0qNClre6r1h7oRLlPOOoTFLEmM08ciympjxAUJT6%2BeNZUoQOPW2h5pu1043KPMm2R4%2B2aHviwrxBc6yI%2Fc0jQQU4MAusqmHTgjxItK20u1%2BbiPnRNggVXgNvM0spSq9F5nEldN6K9qgQCNGi0wP%2F&X-Amz-Signature=2ff997c04fdb3919674c3bf30cc5613c79f589c55292b76391a9ab0609cb0dba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
