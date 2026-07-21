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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZWTLX5AP%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEm0bz8ZE%2BdzVol14SQhfPW3UWLw40w1LJ6dTDt3t%2B8aAiEA9rivKd4VNDuZVwxgP%2BfB%2BRv%2F2SkMZJoZQoZOWld5Z0AqiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGhn%2BOxuIRRzd8pg5ircA8GcLqejIRdFdm4rB2Qm%2F0PQChqIAqmhIMcah6NCtPXbN17gSQE6y808v0tP75Hbr3VC%2F4wBiWAPnMXjUroIfJYav%2BVuN2e0tPUPCUjGE0luX4f6dHkoWUhnatc8E5mZWiId%2FqJvOrhhLWV%2B0GFLRWN3Hdg6q00o6EWNFxzVe8gVslM7tXBUwtFALaoDxA3tqxmIy2dmdRiMXsZF%2FsEMzBgEe4r4S79VW%2Fh38SBDZwHMON6p5wl3xVqDW6rdfXueho5uyV6oYJev6MSmsoQaNG%2FUhbVNV%2BIVx4m4HSm2Qh1jBuCeRY4iIXs7xYL2ekUp3Yznjk%2Bm%2FarGWEDpj2o8zZs4b0IzVgwTG%2BPMYkxw5JHr6U%2FWc4fjuhB8l5lgREmAPUooGpM1X07Pakev%2F%2BWsD5IdNJZ3p44TZOgrGx81xK3M231cbg%2F33f8x1f4tku9FcO6qNW5KBE%2FsCCOU7v3JH75nCPiYUpLrq6f%2FVrEdBvxlh%2Bh5sBHeGxjbQGAZCuf7Ohj7A1XedUqn50Jh0%2BxT0bM01WeE0YHpGbm9B6D8%2FATFcJhA9bm3asSeGoIn4S3t9zuCIsXS3A6MNUbTPAAvk5GNR84Uyewg319FV44EGaF8gJS111J%2F7cXbTXGSMKbg%2FNIGOqUBkCJFDsyfEMud7lyviQRoRowslBzGIh8NHCxqu8jMUq96MuicTGx7P%2Fg6KLTGNn5%2BHqBYcQuJ5zCa%2FIy6iVP783M9etEPmJZicylsAtUrM4EAkAUL8Yoj8Wgq7oOBTySTjI4F3SxALkAjGkAXlQ1SL%2B6Rkr73Ju1hPyiaDiYqAkBIM2MhafUGKTuPuJDRHLCGu4GSh%2FudNwR1rnser%2B4W0p1ROtMd&X-Amz-Signature=45df7459d3bb13717ffb3f8f09e24a61ef5100a3153c0a300fb7a2fd9a837bbf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZWTLX5AP%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEm0bz8ZE%2BdzVol14SQhfPW3UWLw40w1LJ6dTDt3t%2B8aAiEA9rivKd4VNDuZVwxgP%2BfB%2BRv%2F2SkMZJoZQoZOWld5Z0AqiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGhn%2BOxuIRRzd8pg5ircA8GcLqejIRdFdm4rB2Qm%2F0PQChqIAqmhIMcah6NCtPXbN17gSQE6y808v0tP75Hbr3VC%2F4wBiWAPnMXjUroIfJYav%2BVuN2e0tPUPCUjGE0luX4f6dHkoWUhnatc8E5mZWiId%2FqJvOrhhLWV%2B0GFLRWN3Hdg6q00o6EWNFxzVe8gVslM7tXBUwtFALaoDxA3tqxmIy2dmdRiMXsZF%2FsEMzBgEe4r4S79VW%2Fh38SBDZwHMON6p5wl3xVqDW6rdfXueho5uyV6oYJev6MSmsoQaNG%2FUhbVNV%2BIVx4m4HSm2Qh1jBuCeRY4iIXs7xYL2ekUp3Yznjk%2Bm%2FarGWEDpj2o8zZs4b0IzVgwTG%2BPMYkxw5JHr6U%2FWc4fjuhB8l5lgREmAPUooGpM1X07Pakev%2F%2BWsD5IdNJZ3p44TZOgrGx81xK3M231cbg%2F33f8x1f4tku9FcO6qNW5KBE%2FsCCOU7v3JH75nCPiYUpLrq6f%2FVrEdBvxlh%2Bh5sBHeGxjbQGAZCuf7Ohj7A1XedUqn50Jh0%2BxT0bM01WeE0YHpGbm9B6D8%2FATFcJhA9bm3asSeGoIn4S3t9zuCIsXS3A6MNUbTPAAvk5GNR84Uyewg319FV44EGaF8gJS111J%2F7cXbTXGSMKbg%2FNIGOqUBkCJFDsyfEMud7lyviQRoRowslBzGIh8NHCxqu8jMUq96MuicTGx7P%2Fg6KLTGNn5%2BHqBYcQuJ5zCa%2FIy6iVP783M9etEPmJZicylsAtUrM4EAkAUL8Yoj8Wgq7oOBTySTjI4F3SxALkAjGkAXlQ1SL%2B6Rkr73Ju1hPyiaDiYqAkBIM2MhafUGKTuPuJDRHLCGu4GSh%2FudNwR1rnser%2B4W0p1ROtMd&X-Amz-Signature=6e8f7323c5c7e660a61a06dcac617eca58e61ff1fb18637a06d15eab5da15fbb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZWTLX5AP%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEm0bz8ZE%2BdzVol14SQhfPW3UWLw40w1LJ6dTDt3t%2B8aAiEA9rivKd4VNDuZVwxgP%2BfB%2BRv%2F2SkMZJoZQoZOWld5Z0AqiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGhn%2BOxuIRRzd8pg5ircA8GcLqejIRdFdm4rB2Qm%2F0PQChqIAqmhIMcah6NCtPXbN17gSQE6y808v0tP75Hbr3VC%2F4wBiWAPnMXjUroIfJYav%2BVuN2e0tPUPCUjGE0luX4f6dHkoWUhnatc8E5mZWiId%2FqJvOrhhLWV%2B0GFLRWN3Hdg6q00o6EWNFxzVe8gVslM7tXBUwtFALaoDxA3tqxmIy2dmdRiMXsZF%2FsEMzBgEe4r4S79VW%2Fh38SBDZwHMON6p5wl3xVqDW6rdfXueho5uyV6oYJev6MSmsoQaNG%2FUhbVNV%2BIVx4m4HSm2Qh1jBuCeRY4iIXs7xYL2ekUp3Yznjk%2Bm%2FarGWEDpj2o8zZs4b0IzVgwTG%2BPMYkxw5JHr6U%2FWc4fjuhB8l5lgREmAPUooGpM1X07Pakev%2F%2BWsD5IdNJZ3p44TZOgrGx81xK3M231cbg%2F33f8x1f4tku9FcO6qNW5KBE%2FsCCOU7v3JH75nCPiYUpLrq6f%2FVrEdBvxlh%2Bh5sBHeGxjbQGAZCuf7Ohj7A1XedUqn50Jh0%2BxT0bM01WeE0YHpGbm9B6D8%2FATFcJhA9bm3asSeGoIn4S3t9zuCIsXS3A6MNUbTPAAvk5GNR84Uyewg319FV44EGaF8gJS111J%2F7cXbTXGSMKbg%2FNIGOqUBkCJFDsyfEMud7lyviQRoRowslBzGIh8NHCxqu8jMUq96MuicTGx7P%2Fg6KLTGNn5%2BHqBYcQuJ5zCa%2FIy6iVP783M9etEPmJZicylsAtUrM4EAkAUL8Yoj8Wgq7oOBTySTjI4F3SxALkAjGkAXlQ1SL%2B6Rkr73Ju1hPyiaDiYqAkBIM2MhafUGKTuPuJDRHLCGu4GSh%2FudNwR1rnser%2B4W0p1ROtMd&X-Amz-Signature=ff525a736d72d602b9928dfc7d45e170e06509ed100ebfe9fc672285e5348163&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNDN323T%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCo5L0YHMF1OVIajpIBb5%2FaXM1X1tN2ib%2BoAKOtPARp4wIgAb5BhQ1hMa9MRMSOgRodjPUC56D0Ww%2FVob286TBvgE4qiAQIu%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC%2FCJUUEooi3OMAQECrcA0yPYoK8zEWE%2FkoiS4jn%2BEeLK9QopZox78W6LhQzX7P6DRNyHcit52oNog4Tw%2Bfl%2FZDr2ljERGUbq9AYHKBdWAWkny6JGT4XKiURbh7CbLSq6wZ2P7mGwYPF2qK5SCzw%2Bqdsaya%2BD1qq6i8zxIefiYQlxQOeaUrXT%2BzK6go6vCeYi5DrQMCld4RRJBWm8oyCocy9xRy%2BPEgS7m38qr%2FSsz6yJeo%2BuGNwrLQQsa5tam26nc1U2BPaE8iOSGLRsnGw7Ug9EuZcC0My8huNjkg62CrbynzppUDAtW78BrPGmZh99r%2B9yPKBi3MvaL%2BH7d68MYO4SUTvmqgAudHTFIRTZ7wUleW0d08xNZL5yjJ6ehiXCb%2B1tYznJifUjifHY4%2FqVClEmifeLswXEGrcArpaV46bGmR9jNU5qcrNS%2FEXB3q5isxuF3ka61GqhQ4e1CMx8gX467vaeebsxETnVD4Q4tEz5Dh2v61up2OhVxs4BeidDI3w%2BJGdevrro4im%2F1hm%2F%2FuPRnTr7Zx9EJBfy%2FgTRBk2zekyPECiE0y%2Ffg84QGAjgyg8xgDRBCUMp5C37c6OqJa0mNU8HbSLBrooqLUWSi8AD4O4puGIXTCgapkMajutrGVtCEJa5sjkAgncMKuO%2FdIGOqUBVRORMk%2FnxpPohyH2yhj22ZvaYaTVnV7edZr5oRi9NpzpfgTXs8bqxkCvT%2B1FheLXrHYI5G1YqAM%2BMgNlRG95HVCxHFaCFX6b9CcqSzK9ke0VHNPefIplC1TO7%2FvNSlZxcfpy1NsZHQC0pOK3xlLFC9w04gJTisiWjH2Nj3ngbpFo7GmTJO0vxrT64BxPVK%2BuNn79p6N1QRUlVrGQoClp1V%2B%2B8OcP&X-Amz-Signature=a697a4c71dd4945f84aeee2dcf55fb75e99cf7f3eb9afff41195c0dc70db126d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNDN323T%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCo5L0YHMF1OVIajpIBb5%2FaXM1X1tN2ib%2BoAKOtPARp4wIgAb5BhQ1hMa9MRMSOgRodjPUC56D0Ww%2FVob286TBvgE4qiAQIu%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC%2FCJUUEooi3OMAQECrcA0yPYoK8zEWE%2FkoiS4jn%2BEeLK9QopZox78W6LhQzX7P6DRNyHcit52oNog4Tw%2Bfl%2FZDr2ljERGUbq9AYHKBdWAWkny6JGT4XKiURbh7CbLSq6wZ2P7mGwYPF2qK5SCzw%2Bqdsaya%2BD1qq6i8zxIefiYQlxQOeaUrXT%2BzK6go6vCeYi5DrQMCld4RRJBWm8oyCocy9xRy%2BPEgS7m38qr%2FSsz6yJeo%2BuGNwrLQQsa5tam26nc1U2BPaE8iOSGLRsnGw7Ug9EuZcC0My8huNjkg62CrbynzppUDAtW78BrPGmZh99r%2B9yPKBi3MvaL%2BH7d68MYO4SUTvmqgAudHTFIRTZ7wUleW0d08xNZL5yjJ6ehiXCb%2B1tYznJifUjifHY4%2FqVClEmifeLswXEGrcArpaV46bGmR9jNU5qcrNS%2FEXB3q5isxuF3ka61GqhQ4e1CMx8gX467vaeebsxETnVD4Q4tEz5Dh2v61up2OhVxs4BeidDI3w%2BJGdevrro4im%2F1hm%2F%2FuPRnTr7Zx9EJBfy%2FgTRBk2zekyPECiE0y%2Ffg84QGAjgyg8xgDRBCUMp5C37c6OqJa0mNU8HbSLBrooqLUWSi8AD4O4puGIXTCgapkMajutrGVtCEJa5sjkAgncMKuO%2FdIGOqUBVRORMk%2FnxpPohyH2yhj22ZvaYaTVnV7edZr5oRi9NpzpfgTXs8bqxkCvT%2B1FheLXrHYI5G1YqAM%2BMgNlRG95HVCxHFaCFX6b9CcqSzK9ke0VHNPefIplC1TO7%2FvNSlZxcfpy1NsZHQC0pOK3xlLFC9w04gJTisiWjH2Nj3ngbpFo7GmTJO0vxrT64BxPVK%2BuNn79p6N1QRUlVrGQoClp1V%2B%2B8OcP&X-Amz-Signature=8de2594467d3a4ac7b54c8f086821ccf438e5f1678675e298a7cc94e2aaa7996&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNDN323T%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCo5L0YHMF1OVIajpIBb5%2FaXM1X1tN2ib%2BoAKOtPARp4wIgAb5BhQ1hMa9MRMSOgRodjPUC56D0Ww%2FVob286TBvgE4qiAQIu%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC%2FCJUUEooi3OMAQECrcA0yPYoK8zEWE%2FkoiS4jn%2BEeLK9QopZox78W6LhQzX7P6DRNyHcit52oNog4Tw%2Bfl%2FZDr2ljERGUbq9AYHKBdWAWkny6JGT4XKiURbh7CbLSq6wZ2P7mGwYPF2qK5SCzw%2Bqdsaya%2BD1qq6i8zxIefiYQlxQOeaUrXT%2BzK6go6vCeYi5DrQMCld4RRJBWm8oyCocy9xRy%2BPEgS7m38qr%2FSsz6yJeo%2BuGNwrLQQsa5tam26nc1U2BPaE8iOSGLRsnGw7Ug9EuZcC0My8huNjkg62CrbynzppUDAtW78BrPGmZh99r%2B9yPKBi3MvaL%2BH7d68MYO4SUTvmqgAudHTFIRTZ7wUleW0d08xNZL5yjJ6ehiXCb%2B1tYznJifUjifHY4%2FqVClEmifeLswXEGrcArpaV46bGmR9jNU5qcrNS%2FEXB3q5isxuF3ka61GqhQ4e1CMx8gX467vaeebsxETnVD4Q4tEz5Dh2v61up2OhVxs4BeidDI3w%2BJGdevrro4im%2F1hm%2F%2FuPRnTr7Zx9EJBfy%2FgTRBk2zekyPECiE0y%2Ffg84QGAjgyg8xgDRBCUMp5C37c6OqJa0mNU8HbSLBrooqLUWSi8AD4O4puGIXTCgapkMajutrGVtCEJa5sjkAgncMKuO%2FdIGOqUBVRORMk%2FnxpPohyH2yhj22ZvaYaTVnV7edZr5oRi9NpzpfgTXs8bqxkCvT%2B1FheLXrHYI5G1YqAM%2BMgNlRG95HVCxHFaCFX6b9CcqSzK9ke0VHNPefIplC1TO7%2FvNSlZxcfpy1NsZHQC0pOK3xlLFC9w04gJTisiWjH2Nj3ngbpFo7GmTJO0vxrT64BxPVK%2BuNn79p6N1QRUlVrGQoClp1V%2B%2B8OcP&X-Amz-Signature=d740d3de20e8c1bbe4010272961709f1f2d8e0b46cc65444f5dec2609c046326&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNDN323T%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102414Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCo5L0YHMF1OVIajpIBb5%2FaXM1X1tN2ib%2BoAKOtPARp4wIgAb5BhQ1hMa9MRMSOgRodjPUC56D0Ww%2FVob286TBvgE4qiAQIu%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC%2FCJUUEooi3OMAQECrcA0yPYoK8zEWE%2FkoiS4jn%2BEeLK9QopZox78W6LhQzX7P6DRNyHcit52oNog4Tw%2Bfl%2FZDr2ljERGUbq9AYHKBdWAWkny6JGT4XKiURbh7CbLSq6wZ2P7mGwYPF2qK5SCzw%2Bqdsaya%2BD1qq6i8zxIefiYQlxQOeaUrXT%2BzK6go6vCeYi5DrQMCld4RRJBWm8oyCocy9xRy%2BPEgS7m38qr%2FSsz6yJeo%2BuGNwrLQQsa5tam26nc1U2BPaE8iOSGLRsnGw7Ug9EuZcC0My8huNjkg62CrbynzppUDAtW78BrPGmZh99r%2B9yPKBi3MvaL%2BH7d68MYO4SUTvmqgAudHTFIRTZ7wUleW0d08xNZL5yjJ6ehiXCb%2B1tYznJifUjifHY4%2FqVClEmifeLswXEGrcArpaV46bGmR9jNU5qcrNS%2FEXB3q5isxuF3ka61GqhQ4e1CMx8gX467vaeebsxETnVD4Q4tEz5Dh2v61up2OhVxs4BeidDI3w%2BJGdevrro4im%2F1hm%2F%2FuPRnTr7Zx9EJBfy%2FgTRBk2zekyPECiE0y%2Ffg84QGAjgyg8xgDRBCUMp5C37c6OqJa0mNU8HbSLBrooqLUWSi8AD4O4puGIXTCgapkMajutrGVtCEJa5sjkAgncMKuO%2FdIGOqUBVRORMk%2FnxpPohyH2yhj22ZvaYaTVnV7edZr5oRi9NpzpfgTXs8bqxkCvT%2B1FheLXrHYI5G1YqAM%2BMgNlRG95HVCxHFaCFX6b9CcqSzK9ke0VHNPefIplC1TO7%2FvNSlZxcfpy1NsZHQC0pOK3xlLFC9w04gJTisiWjH2Nj3ngbpFo7GmTJO0vxrT64BxPVK%2BuNn79p6N1QRUlVrGQoClp1V%2B%2B8OcP&X-Amz-Signature=d303198d621707acd27c8de98019ebccc0cf725d0f10801064648eb1f716a0f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664E7AUW4%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG3%2BRVqFse8ApaQ5QAvC5V%2BAvwYZlunlB2GZOvroZUrLAiEAnyH2WDYyA61S8Vzpr99tqZ0thX%2B%2BW0ygOaduu%2BG0z4cqiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNYgOcI46zRZw8D3eSrcA%2B%2FND08KG%2B2DT%2BuY%2B9BF%2BP%2FpMSh%2BOZmW9Ja%2Ff0iFYX%2BWQTMRq8bRQFa4JR63hX5Dbf8ahB3V5vN2WWGyAjbBYwEl9FJHnsvfL%2F89GeRZujlhmnaschMJlJZ46Eb79bthTng4HzQvW90AQCiHE4a8mAHFNLJ5r7nt%2Bnc54wwz%2Fa8hrhPAbmAsC7u9Tn465FS3plCDTN4g%2B12KqhlnjTFsPHN2yvom35o8FMAZMIlxPr%2Fe9JNxtqj2RFGf1%2FDg40pb7wfv1S7G4ThkrZWCF%2FzDe5icp%2F2HgPMmyJYv1SbpfE4rDLTKXs0mIka4ME93aqE%2BrfYr7BLhkwh%2F%2F8qpqxVy4%2BBpqxj6h%2FwrGYVzpCr8nsYIVk%2BoXcpNCQDN1tlApZTS3S7jHamVV%2F2gvyedOz1cM3rsdyIwkVRS2Tzwdma6f3lL9KhhjnZ26nXzKo3TqJUqLIpvDpto6Qeh%2BJMXpwswzDW40XTPnpCcIv9uS4%2Bm%2BrTACVZwJilnLrcEWkC%2FtmOUtauexkm26n8DTdjyJgCqqa%2BDHgGFJIfLcqB%2FmRLeZ4fs%2B0P4NYffbI5T1KsLZoRPu5amvQE7NpRXMZFChFopyol7WNVTTmd4VMxUWpDtV3mEKPgigZZLW7mY2OTpMNDd%2FNIGOqUBdemHARJL1ueHX2UKwppGg85A7pC6ukLL62KadirUrXCoNdsD%2BYAiCiB4N%2FU1HTINh9S%2FEYa%2F5WyNETFm3RARWkPsF9BX9WbMGq1%2FS20owDwK06ZEbcYzvU80hM9AelSQPfSZbxAfxdsKSaP2%2Fl0kEWS%2B7LMTG9FLaqKk8cpqfXPjap6GAFY7H7HflJyG0TXdZQk3UI5ae9XPE2f0r0tcN2%2FDB385&X-Amz-Signature=dcddcf913e57ccb228ff9eb043e99644ff79171698eab14bac974389c038f150&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W76Y2HDJ%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC1sN6Udpx4oKB54smgmNKANGuyp834TScMbUQKSgytSwIgBBdZfGC5NF%2BhY8s8gZVa7jT56%2B2QHOimXvrI9OySSFoqiAQIu%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFunR6bSS23F20YeZSrcA4ltEyWIJ5y6PSGzoSB0rB%2F2sVKB%2F701EYsgiMOxc39CgjOWfLePMD2xvVXWVSAszSlQLZz%2BpDBdtJw8Ew52eAbuyf1LDuwvjXFE4XfSTHZXqF9RyzsHtlnHsoFZaktreneTRHIL4eep%2BMkBjYqm3kHSnA%2FQXUoDxAe%2FQfD74pLE9lM6vQhMCmA4fpUT5YGfM4%2BTyRwfp7t5OxcYaCFhinTiODrB%2BwmewoY%2BT2KfYhxTDIjdFoPgkyEaweUWQK651GhFQzltJeNpi1hJ6a%2Fl5kaO5eE3%2Bfs77dBHQPw7yTeCV3WZlrYp6koVUEpX4K1GiPl1CBb7KpVfB5VnFmWx%2FKZ2HQhtCR0i9umbdtfFT4FTtZy78ixovnBLPrZSqr42GRGjiKHMiXy7Ul8BrvzQ8f4x3wLh8L5lKhpHOz5DRj6qDlGkAEF5Yhc8mFB6Ug7u%2B1gcGblvoziD4E%2Fj22o2KYvtIhF5DwgOURmynYnfu8r8UGM0KnujlNofn%2Bdw2dkthqAS3xCEZmkwEY7M1NYml25pe%2BKdegTUorgQWUT5cdp%2F4X4dE4XFSVW9SER24lWNN5dfrkX4Mm0Ygog3zEhyRWAd15HEQYCzvnVPPbIPt03oWKAttYJXf9QC01%2BTMPeO%2FdIGOqUBNg4%2Bsy10QkHXJskHCvv42CuGurv7kTJhv9X4iMXX9YTyddUtf5I3FDZ6tmV6jmPBh%2BdLrWcMG6iWZUeTLKsg37nwBIGTnVxeMGdzx6HbJgcvQshCd%2Fzd2bJqHRyG%2FhC1S9UsjTRRDKH2Kx8COl%2BSiI1Mu%2FPNY14f6VNMVt2YovbBqFbTQTZb98o2t%2F%2BHshrPrruBBtPC4q%2B2woDmzpR93p8L08xZ&X-Amz-Signature=60a2139c364be0e95974439e4666a0cbea35aec49e76315ac4550b165a6abaac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W76Y2HDJ%2F20260721%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260721T102415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC1sN6Udpx4oKB54smgmNKANGuyp834TScMbUQKSgytSwIgBBdZfGC5NF%2BhY8s8gZVa7jT56%2B2QHOimXvrI9OySSFoqiAQIu%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFunR6bSS23F20YeZSrcA4ltEyWIJ5y6PSGzoSB0rB%2F2sVKB%2F701EYsgiMOxc39CgjOWfLePMD2xvVXWVSAszSlQLZz%2BpDBdtJw8Ew52eAbuyf1LDuwvjXFE4XfSTHZXqF9RyzsHtlnHsoFZaktreneTRHIL4eep%2BMkBjYqm3kHSnA%2FQXUoDxAe%2FQfD74pLE9lM6vQhMCmA4fpUT5YGfM4%2BTyRwfp7t5OxcYaCFhinTiODrB%2BwmewoY%2BT2KfYhxTDIjdFoPgkyEaweUWQK651GhFQzltJeNpi1hJ6a%2Fl5kaO5eE3%2Bfs77dBHQPw7yTeCV3WZlrYp6koVUEpX4K1GiPl1CBb7KpVfB5VnFmWx%2FKZ2HQhtCR0i9umbdtfFT4FTtZy78ixovnBLPrZSqr42GRGjiKHMiXy7Ul8BrvzQ8f4x3wLh8L5lKhpHOz5DRj6qDlGkAEF5Yhc8mFB6Ug7u%2B1gcGblvoziD4E%2Fj22o2KYvtIhF5DwgOURmynYnfu8r8UGM0KnujlNofn%2Bdw2dkthqAS3xCEZmkwEY7M1NYml25pe%2BKdegTUorgQWUT5cdp%2F4X4dE4XFSVW9SER24lWNN5dfrkX4Mm0Ygog3zEhyRWAd15HEQYCzvnVPPbIPt03oWKAttYJXf9QC01%2BTMPeO%2FdIGOqUBNg4%2Bsy10QkHXJskHCvv42CuGurv7kTJhv9X4iMXX9YTyddUtf5I3FDZ6tmV6jmPBh%2BdLrWcMG6iWZUeTLKsg37nwBIGTnVxeMGdzx6HbJgcvQshCd%2Fzd2bJqHRyG%2FhC1S9UsjTRRDKH2Kx8COl%2BSiI1Mu%2FPNY14f6VNMVt2YovbBqFbTQTZb98o2t%2F%2BHshrPrruBBtPC4q%2B2woDmzpR93p8L08xZ&X-Amz-Signature=7c3791af5fc2db64d9dad801aff6cd2721f9f1029aa121bde8c317896b1e08b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
