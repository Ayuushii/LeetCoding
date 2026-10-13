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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FAAF4E5%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICrJrNAWpyecNb9dplXpaY5qfC8X9FWc%2B38WggqvBtDEAiAunDgIaKa2ZeHj0%2FXNGQIE1vrHtnMDErPSoNMsBNl%2BryqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz60sMAAfnvGz1nVjKtwDx%2FgB%2FV3%2BtpTqYf%2FU5hwxpOeOztR0JpoRjcy%2BNEMvggJpF6WRvZDaq%2Ftz40ZZeMoK7lgG1MbpsMZjpWfX3OHFZmTE0szyozZQ6z9xiN9D%2BMdg916h1NKsx7YZ2J0bR2Tzg8tKzZ6OtBmTZYxDP26%2BdGWGmY%2FplINMcAjKYBnQ1kgPuAfvCjo3y0LQC9Fldh6ZEs7zE6djEri%2B0dwpzSxffIIuM6sNKcNtZJYEhxGg9BTto1bHKi113dC%2B2onK3WcCLhuJT8w3IIkog7rvMx8s%2F%2BusKWnQOoNPKPHtXKZiG8cLDR2%2BjI7HjKiWQvsQvrt8OLrpsk3un0w%2FPxzf9OE7K4jRFBITERupAvo441pYTQizrwoGl37Z%2BrzBJjEc3GG8tXp5%2BWWTLplycUgHE3T6AvmW7Qbt3eiQeb8g%2Br9sShXikxyCtLqppFVZnrjHuIxdpUdLDPESpz1VJYq4WLbG5EsubahTqHTFiPk9HoIsfX%2FK3HgOrEVITszvh4WQQ5EN8Se%2BmxRua0h4ErqAHChwOdH7frjz5X5o7C7IBAJHJfTpyAm70ljNZAKYY6rrQEKnh5QgDSRUN8qyFR8TCvb%2BHy9l8Xxtg6ZHoPUH12gnxhtfl4h2mTZ7Gk%2BJUF8wwue41gY6pgGTE%2BS%2FluxUbiIwW8XSRhoevX87jEXWGtfsLkAfWnWQ%2Bp64Ni4ZRYEBRyvgiU516AUCzfSWyNNsvth51AKlpuQd%2BV34n5%2Fj3h56GcMsOqkm2v33FoWkL6UM5xr2MkFFtCAPqB6KMbgLtV2X3IwOgZ7hR9YtRPNvYrlCfd9AvZR87Pe8h0AR0%2FTkg0SGk9UMFqBnR64wN7vYGI%2FTMxhN73w2K31p3p9w&X-Amz-Signature=dc3d4393e9d0b39a4c4bfacef9ff3840d737122845920d7e6bd8d2c6a7525768&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FAAF4E5%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICrJrNAWpyecNb9dplXpaY5qfC8X9FWc%2B38WggqvBtDEAiAunDgIaKa2ZeHj0%2FXNGQIE1vrHtnMDErPSoNMsBNl%2BryqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz60sMAAfnvGz1nVjKtwDx%2FgB%2FV3%2BtpTqYf%2FU5hwxpOeOztR0JpoRjcy%2BNEMvggJpF6WRvZDaq%2Ftz40ZZeMoK7lgG1MbpsMZjpWfX3OHFZmTE0szyozZQ6z9xiN9D%2BMdg916h1NKsx7YZ2J0bR2Tzg8tKzZ6OtBmTZYxDP26%2BdGWGmY%2FplINMcAjKYBnQ1kgPuAfvCjo3y0LQC9Fldh6ZEs7zE6djEri%2B0dwpzSxffIIuM6sNKcNtZJYEhxGg9BTto1bHKi113dC%2B2onK3WcCLhuJT8w3IIkog7rvMx8s%2F%2BusKWnQOoNPKPHtXKZiG8cLDR2%2BjI7HjKiWQvsQvrt8OLrpsk3un0w%2FPxzf9OE7K4jRFBITERupAvo441pYTQizrwoGl37Z%2BrzBJjEc3GG8tXp5%2BWWTLplycUgHE3T6AvmW7Qbt3eiQeb8g%2Br9sShXikxyCtLqppFVZnrjHuIxdpUdLDPESpz1VJYq4WLbG5EsubahTqHTFiPk9HoIsfX%2FK3HgOrEVITszvh4WQQ5EN8Se%2BmxRua0h4ErqAHChwOdH7frjz5X5o7C7IBAJHJfTpyAm70ljNZAKYY6rrQEKnh5QgDSRUN8qyFR8TCvb%2BHy9l8Xxtg6ZHoPUH12gnxhtfl4h2mTZ7Gk%2BJUF8wwue41gY6pgGTE%2BS%2FluxUbiIwW8XSRhoevX87jEXWGtfsLkAfWnWQ%2Bp64Ni4ZRYEBRyvgiU516AUCzfSWyNNsvth51AKlpuQd%2BV34n5%2Fj3h56GcMsOqkm2v33FoWkL6UM5xr2MkFFtCAPqB6KMbgLtV2X3IwOgZ7hR9YtRPNvYrlCfd9AvZR87Pe8h0AR0%2FTkg0SGk9UMFqBnR64wN7vYGI%2FTMxhN73w2K31p3p9w&X-Amz-Signature=75ec73e26e893d91957c43a518c192801fddd0576659c8b6b3e1e2ff27b76cbb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FAAF4E5%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICrJrNAWpyecNb9dplXpaY5qfC8X9FWc%2B38WggqvBtDEAiAunDgIaKa2ZeHj0%2FXNGQIE1vrHtnMDErPSoNMsBNl%2BryqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz60sMAAfnvGz1nVjKtwDx%2FgB%2FV3%2BtpTqYf%2FU5hwxpOeOztR0JpoRjcy%2BNEMvggJpF6WRvZDaq%2Ftz40ZZeMoK7lgG1MbpsMZjpWfX3OHFZmTE0szyozZQ6z9xiN9D%2BMdg916h1NKsx7YZ2J0bR2Tzg8tKzZ6OtBmTZYxDP26%2BdGWGmY%2FplINMcAjKYBnQ1kgPuAfvCjo3y0LQC9Fldh6ZEs7zE6djEri%2B0dwpzSxffIIuM6sNKcNtZJYEhxGg9BTto1bHKi113dC%2B2onK3WcCLhuJT8w3IIkog7rvMx8s%2F%2BusKWnQOoNPKPHtXKZiG8cLDR2%2BjI7HjKiWQvsQvrt8OLrpsk3un0w%2FPxzf9OE7K4jRFBITERupAvo441pYTQizrwoGl37Z%2BrzBJjEc3GG8tXp5%2BWWTLplycUgHE3T6AvmW7Qbt3eiQeb8g%2Br9sShXikxyCtLqppFVZnrjHuIxdpUdLDPESpz1VJYq4WLbG5EsubahTqHTFiPk9HoIsfX%2FK3HgOrEVITszvh4WQQ5EN8Se%2BmxRua0h4ErqAHChwOdH7frjz5X5o7C7IBAJHJfTpyAm70ljNZAKYY6rrQEKnh5QgDSRUN8qyFR8TCvb%2BHy9l8Xxtg6ZHoPUH12gnxhtfl4h2mTZ7Gk%2BJUF8wwue41gY6pgGTE%2BS%2FluxUbiIwW8XSRhoevX87jEXWGtfsLkAfWnWQ%2Bp64Ni4ZRYEBRyvgiU516AUCzfSWyNNsvth51AKlpuQd%2BV34n5%2Fj3h56GcMsOqkm2v33FoWkL6UM5xr2MkFFtCAPqB6KMbgLtV2X3IwOgZ7hR9YtRPNvYrlCfd9AvZR87Pe8h0AR0%2FTkg0SGk9UMFqBnR64wN7vYGI%2FTMxhN73w2K31p3p9w&X-Amz-Signature=a765a0a0139ec7e165e39d0463ae5042a781fed68cc759c4204a8d7e57ebc7c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVCJZXFZ%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGr8%2BRGtm3LdodCYWBfytN%2F9RQM31wPMDDtbBAAF9r2kAiBptdg1N82Z6va5cIOujJiRQ2bnCwpyzBvPfj%2FtoHIhQCqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4miO66OtgAYzJCKXKtwDVin7%2FIXeWUCo8%2FuOM0D5uhDuxUDUnLEZ4kkr0PPwCmQBNEJ62HCqPj5CG9Esw3NXZBCC14hY8hE19ah810ryYLuVdKCQUSPtSZqPYw9aqF9IbdNX70PcUNJPY4a66akX2CSYNMM96ffhYtUXGfHfEAwgD%2FwS15lAWzmf2QkwHz%2BdNsrDaVCv%2B17tVF4oX6QqYTu9TE%2BGIbUG1oKeTq0U%2ByfH4SMAYdbdmbnP7t7Fx184XjpGTh%2FCZV%2BIjv801ZFMOBzF%2FQlWJZDFJLaf0fGt4NL4QbnQm3P8fh5Pb82KVmzn%2BpYWf4FmQHAmbv0Bp2wfAqX57xXc3MBhyhanN4niQwcTtz9WlwrWYYBV3g6qcgYq58M94aiZxmEt6K36q%2FRxEnPFiZhSJeJd473NCFyjBWXyoDdfSNWk4uZLTNQME2RebdUUOp08YQTRDDMDffxSuffHg9Kk2c887%2FVRNbqN%2F4Z3ihFACTCdMaaRTt5UaqhGXwnYp5jny%2BMAxurCH1n2z38%2FDZ6g1u12NTlLqyqMKq4o1xIBoEYehivBVZWuyfgmeXv1bKfPNPj2hfVNZ3MLFGX%2Fnr2DPw4dqBhXr9HwlRa8CqtPvTtaUPOshJ32IZ5Dl2Utad2xV31TKJkwvOe41gY6pgGcoOwFCnw%2FqBDFCzd6HKk61Axu8wQUzEXERv2Bin9IeYAx4n0TAIU1am7XZsKvcXtytvtE04WU3YeRsY27rdJ1BLEfmZ9EdEFNhYxPHNTW6u548S9mj2oKYCd7tc24p08R%2FWpbqLIo5SbItgC7Se0P%2Ftneum%2FBR2xcRmtDXISUhHOXDeznRMvUdH896oHZHo0BoTjyNOP4MFZVkBBFOHUO6zX8V9ZB&X-Amz-Signature=b3cd5845e744a3d857617464de501c6aaa1ca0231834dd58554ebd005b33fbf1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVCJZXFZ%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGr8%2BRGtm3LdodCYWBfytN%2F9RQM31wPMDDtbBAAF9r2kAiBptdg1N82Z6va5cIOujJiRQ2bnCwpyzBvPfj%2FtoHIhQCqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4miO66OtgAYzJCKXKtwDVin7%2FIXeWUCo8%2FuOM0D5uhDuxUDUnLEZ4kkr0PPwCmQBNEJ62HCqPj5CG9Esw3NXZBCC14hY8hE19ah810ryYLuVdKCQUSPtSZqPYw9aqF9IbdNX70PcUNJPY4a66akX2CSYNMM96ffhYtUXGfHfEAwgD%2FwS15lAWzmf2QkwHz%2BdNsrDaVCv%2B17tVF4oX6QqYTu9TE%2BGIbUG1oKeTq0U%2ByfH4SMAYdbdmbnP7t7Fx184XjpGTh%2FCZV%2BIjv801ZFMOBzF%2FQlWJZDFJLaf0fGt4NL4QbnQm3P8fh5Pb82KVmzn%2BpYWf4FmQHAmbv0Bp2wfAqX57xXc3MBhyhanN4niQwcTtz9WlwrWYYBV3g6qcgYq58M94aiZxmEt6K36q%2FRxEnPFiZhSJeJd473NCFyjBWXyoDdfSNWk4uZLTNQME2RebdUUOp08YQTRDDMDffxSuffHg9Kk2c887%2FVRNbqN%2F4Z3ihFACTCdMaaRTt5UaqhGXwnYp5jny%2BMAxurCH1n2z38%2FDZ6g1u12NTlLqyqMKq4o1xIBoEYehivBVZWuyfgmeXv1bKfPNPj2hfVNZ3MLFGX%2Fnr2DPw4dqBhXr9HwlRa8CqtPvTtaUPOshJ32IZ5Dl2Utad2xV31TKJkwvOe41gY6pgGcoOwFCnw%2FqBDFCzd6HKk61Axu8wQUzEXERv2Bin9IeYAx4n0TAIU1am7XZsKvcXtytvtE04WU3YeRsY27rdJ1BLEfmZ9EdEFNhYxPHNTW6u548S9mj2oKYCd7tc24p08R%2FWpbqLIo5SbItgC7Se0P%2Ftneum%2FBR2xcRmtDXISUhHOXDeznRMvUdH896oHZHo0BoTjyNOP4MFZVkBBFOHUO6zX8V9ZB&X-Amz-Signature=c7ae05deccfb3da981f5cbb2bd9188e498f88d9c3c5cebc07e549272c960918c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVCJZXFZ%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGr8%2BRGtm3LdodCYWBfytN%2F9RQM31wPMDDtbBAAF9r2kAiBptdg1N82Z6va5cIOujJiRQ2bnCwpyzBvPfj%2FtoHIhQCqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4miO66OtgAYzJCKXKtwDVin7%2FIXeWUCo8%2FuOM0D5uhDuxUDUnLEZ4kkr0PPwCmQBNEJ62HCqPj5CG9Esw3NXZBCC14hY8hE19ah810ryYLuVdKCQUSPtSZqPYw9aqF9IbdNX70PcUNJPY4a66akX2CSYNMM96ffhYtUXGfHfEAwgD%2FwS15lAWzmf2QkwHz%2BdNsrDaVCv%2B17tVF4oX6QqYTu9TE%2BGIbUG1oKeTq0U%2ByfH4SMAYdbdmbnP7t7Fx184XjpGTh%2FCZV%2BIjv801ZFMOBzF%2FQlWJZDFJLaf0fGt4NL4QbnQm3P8fh5Pb82KVmzn%2BpYWf4FmQHAmbv0Bp2wfAqX57xXc3MBhyhanN4niQwcTtz9WlwrWYYBV3g6qcgYq58M94aiZxmEt6K36q%2FRxEnPFiZhSJeJd473NCFyjBWXyoDdfSNWk4uZLTNQME2RebdUUOp08YQTRDDMDffxSuffHg9Kk2c887%2FVRNbqN%2F4Z3ihFACTCdMaaRTt5UaqhGXwnYp5jny%2BMAxurCH1n2z38%2FDZ6g1u12NTlLqyqMKq4o1xIBoEYehivBVZWuyfgmeXv1bKfPNPj2hfVNZ3MLFGX%2Fnr2DPw4dqBhXr9HwlRa8CqtPvTtaUPOshJ32IZ5Dl2Utad2xV31TKJkwvOe41gY6pgGcoOwFCnw%2FqBDFCzd6HKk61Axu8wQUzEXERv2Bin9IeYAx4n0TAIU1am7XZsKvcXtytvtE04WU3YeRsY27rdJ1BLEfmZ9EdEFNhYxPHNTW6u548S9mj2oKYCd7tc24p08R%2FWpbqLIo5SbItgC7Se0P%2Ftneum%2FBR2xcRmtDXISUhHOXDeznRMvUdH896oHZHo0BoTjyNOP4MFZVkBBFOHUO6zX8V9ZB&X-Amz-Signature=3066b50aa61aad9e8c0a0bbc571f09690b8dd477c3bbd15f0882aed6055248f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVCJZXFZ%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGr8%2BRGtm3LdodCYWBfytN%2F9RQM31wPMDDtbBAAF9r2kAiBptdg1N82Z6va5cIOujJiRQ2bnCwpyzBvPfj%2FtoHIhQCqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4miO66OtgAYzJCKXKtwDVin7%2FIXeWUCo8%2FuOM0D5uhDuxUDUnLEZ4kkr0PPwCmQBNEJ62HCqPj5CG9Esw3NXZBCC14hY8hE19ah810ryYLuVdKCQUSPtSZqPYw9aqF9IbdNX70PcUNJPY4a66akX2CSYNMM96ffhYtUXGfHfEAwgD%2FwS15lAWzmf2QkwHz%2BdNsrDaVCv%2B17tVF4oX6QqYTu9TE%2BGIbUG1oKeTq0U%2ByfH4SMAYdbdmbnP7t7Fx184XjpGTh%2FCZV%2BIjv801ZFMOBzF%2FQlWJZDFJLaf0fGt4NL4QbnQm3P8fh5Pb82KVmzn%2BpYWf4FmQHAmbv0Bp2wfAqX57xXc3MBhyhanN4niQwcTtz9WlwrWYYBV3g6qcgYq58M94aiZxmEt6K36q%2FRxEnPFiZhSJeJd473NCFyjBWXyoDdfSNWk4uZLTNQME2RebdUUOp08YQTRDDMDffxSuffHg9Kk2c887%2FVRNbqN%2F4Z3ihFACTCdMaaRTt5UaqhGXwnYp5jny%2BMAxurCH1n2z38%2FDZ6g1u12NTlLqyqMKq4o1xIBoEYehivBVZWuyfgmeXv1bKfPNPj2hfVNZ3MLFGX%2Fnr2DPw4dqBhXr9HwlRa8CqtPvTtaUPOshJ32IZ5Dl2Utad2xV31TKJkwvOe41gY6pgGcoOwFCnw%2FqBDFCzd6HKk61Axu8wQUzEXERv2Bin9IeYAx4n0TAIU1am7XZsKvcXtytvtE04WU3YeRsY27rdJ1BLEfmZ9EdEFNhYxPHNTW6u548S9mj2oKYCd7tc24p08R%2FWpbqLIo5SbItgC7Se0P%2Ftneum%2FBR2xcRmtDXISUhHOXDeznRMvUdH896oHZHo0BoTjyNOP4MFZVkBBFOHUO6zX8V9ZB&X-Amz-Signature=2ab8c2f69459e0dcd075d5141b2a90b97dbd9d9b2dd47e9db07a1b8cb861924a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663W6RANA2%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD37rvZ7vBAYBDKM2IzfPitTHbbc7Kvt0cWrPNPc7wkMQIgN1Q96nefrwjQHPUZBA7zM1Qq1%2Fm8VK823FdF7YzHfMgqiAQInv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPZFIpx0BaOkvDrVNircAxKLxpizg%2BqgYIcg2NnL57WBpAqzmc90wzXuz0KWfxLiDbQdB4gSePpNvS8hvxB7cppLoatQWqdb%2FbFs%2BSXp2uTx7AOU3Ep%2BAF6jOUTxnzIveMMeuf%2FmHdbtnmN%2FzUJAbSpDr2roQ9cqM9orLlqLDXxHyeSmvQ035lroUntKgBWvkIPeoD2VTBBjdPuEhJNNaRqCb6j1H1YOYkmXWVf5l7a%2FzsYqm9nNFSDBULeQ55ytCf%2BGijqWQE33jNXN72NNiteJlGrWFYQeKIZf1He6qtk4Vy%2Bz2lrH08kIK0jLIbolO9aWEJ75CJPZCzlA9bcM6xX7fd7Cb21i8qZsciym8YDXiGechHsCSsqsSljDjUOiX3MjOtC%2FdcMb2hdhKLw6fcZADO4bUPDM7T78PTRieTYYaHEVXH2tblC2iYmF2JIMrwZwk79ycKUKn9p3uqdI9mWlK%2Ffj23Is92zZds80P2VqfqcvTrltSk%2BwyTIr6TDzkEyg7Bje9pSkt7PfHMtTDLyxMkfdLPFvHKxZzRUwnyd81mPrZns3naPqfpiMect3KanvYI3qaEyievYDwffPExtkm2SJfBB00nnE4xk4ijirMlR9MllYsDtXmPOoWuflDHXx62h%2FoH%2B%2BfEK2MPvkuNYGOqUB1RwxLZFjp%2BQOYFt8R0r%2FIcBmcClbk5w6fme15s4JdRvo%2BaEKCVcNAW9B2RPCWlmn4eO8OV3%2F2%2Fq8xpWUWeCgUeOx%2F%2BXgWtXEpuowMJS%2FTCIo3DxRbaB3YRdJA7nav%2BO6Mp0kdynO%2BUM%2F2HHQEatjrvgLD8k%2B137sb81mDSEjcOvfvB0DTKiDkZWQJvZ3%2Fhwz5tO7zROEhculeaHJiA3NOy8aoHAw&X-Amz-Signature=067bf435e0b814e963ddeb869876f341f6cab187b9d53f554097f0980ed79395&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663FLMWS4D%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIE2%2B3ovTvHpTYbitH87MUXHxtFOcw6ToaG66FXlcYC0EAiEAkc%2Fgjc8cnGZGqEWzIG2kzvwfh9pwVwNHRWMprWWDqUoqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMsEtTKC43XcQP8oNCrcAxIe4fPgeGMtFVVC9HyALNc136Kzu1%2BVo8tcEcQg%2F2foBmNGUK%2BFE%2FKRWWBIj2eUKNgRTkOoFDZl7ZeM4cijS1hB1BIBu3ugkOkCunXoyta2VSYj4lGlx0sS6CMaxjCCO7g9tVqtGc7y0SuKnxQZ%2B6d0rxIW0IVNsFFiy5cLN1wVuNuEmIAm7Yc%2F0k4Jx0uDQbkMpUp3CYA77FYu7DGNVjqDy7s1gGY48FU5BteZCB17e5CWZLp%2BkXvddE%2BaDir9cFqtiRatxuURYHmKZccj85WPR57emEFzZ0KRcim60n7eNUvN78A1KaVM3Y%2Btve66XgWVdzM9zWNH5I836lAqG4skjOFThhtVKbRSh39Z7d4kPsz5DPiWFjgPIR1EnOaXeU%2BOffSnPtbrDrodx7QfIF0WMxeRkMh6TJWs628M0jzJpGkp4SqwzRO1j8YxSTaswV%2FRJkw0OCMSh7AuV6YWaHKeeoSu5yLbMS3uAEn%2F%2B%2Fi1Jek7VHOkzj7ikDdM0jc2yy1ShZXdQrSijjSXjl1l0hIiq77B%2FKnRoRukA4qp%2B2jsa4F6jyZeR8otXfn4Ct%2BlxvSafGn4cqQuFYJ9gqzQ88NrmMTL7zFMurER%2BK1ssLGej3futeZJNCuVCeA9MJidudYGOqUBFlr%2BCezZq7b6VG2osnPvjZd5%2BM8BT3Qt3o1ApW1P7dy2Cdr5mt7VhG9Hw1tPjZVMhxUInIuh53sKVVmxMcPrsJc7E0YS%2BIdVG0YFrgWEHqNLRuMX9fR2Wd%2B5RKuby%2BiFi%2Bs%2BO7NTpVp5uHoK4Ah54mP6lgDvtPFsApBvqSt1E4HxJgSXF8TBsk%2Btjb4qWOTwVBzhA6cgIZ%2B3zE55svdhGkqkd4%2FM&X-Amz-Signature=6b4ffe8698725db535579a6e18b791f1d139b6cb60ab7b2baf45c17ca2208d7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663FLMWS4D%2F20261013%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261013T153543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIE2%2B3ovTvHpTYbitH87MUXHxtFOcw6ToaG66FXlcYC0EAiEAkc%2Fgjc8cnGZGqEWzIG2kzvwfh9pwVwNHRWMprWWDqUoqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMsEtTKC43XcQP8oNCrcAxIe4fPgeGMtFVVC9HyALNc136Kzu1%2BVo8tcEcQg%2F2foBmNGUK%2BFE%2FKRWWBIj2eUKNgRTkOoFDZl7ZeM4cijS1hB1BIBu3ugkOkCunXoyta2VSYj4lGlx0sS6CMaxjCCO7g9tVqtGc7y0SuKnxQZ%2B6d0rxIW0IVNsFFiy5cLN1wVuNuEmIAm7Yc%2F0k4Jx0uDQbkMpUp3CYA77FYu7DGNVjqDy7s1gGY48FU5BteZCB17e5CWZLp%2BkXvddE%2BaDir9cFqtiRatxuURYHmKZccj85WPR57emEFzZ0KRcim60n7eNUvN78A1KaVM3Y%2Btve66XgWVdzM9zWNH5I836lAqG4skjOFThhtVKbRSh39Z7d4kPsz5DPiWFjgPIR1EnOaXeU%2BOffSnPtbrDrodx7QfIF0WMxeRkMh6TJWs628M0jzJpGkp4SqwzRO1j8YxSTaswV%2FRJkw0OCMSh7AuV6YWaHKeeoSu5yLbMS3uAEn%2F%2B%2Fi1Jek7VHOkzj7ikDdM0jc2yy1ShZXdQrSijjSXjl1l0hIiq77B%2FKnRoRukA4qp%2B2jsa4F6jyZeR8otXfn4Ct%2BlxvSafGn4cqQuFYJ9gqzQ88NrmMTL7zFMurER%2BK1ssLGej3futeZJNCuVCeA9MJidudYGOqUBFlr%2BCezZq7b6VG2osnPvjZd5%2BM8BT3Qt3o1ApW1P7dy2Cdr5mt7VhG9Hw1tPjZVMhxUInIuh53sKVVmxMcPrsJc7E0YS%2BIdVG0YFrgWEHqNLRuMX9fR2Wd%2B5RKuby%2BiFi%2Bs%2BO7NTpVp5uHoK4Ah54mP6lgDvtPFsApBvqSt1E4HxJgSXF8TBsk%2Btjb4qWOTwVBzhA6cgIZ%2B3zE55svdhGkqkd4%2FM&X-Amz-Signature=fadb41728e2b70d2b0271fba9118083f856f84fae6ba52e55a1fa12f7be8115c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
