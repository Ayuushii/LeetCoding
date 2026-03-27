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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TABIM3VG%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQCHZQIuOsdOddJ9AAVh%2BJrlu37VSyrtzTMEMqbm2NjBngIgAYcH%2Fs14OC111rf0531%2F5%2FFq8P5lvFKyxZVI5GzCbWQqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDATedGOpywqQ59we4ircAyllHOc0r%2F0fspn2S7%2Fesm6DHpwE9vz0vncnVMpP65aT%2BaDGD2ANbVOYB0EV3VXkq1oonDEcJRItxdsQ8c3CLXrP%2FlBul5xayueJG9vbbP8%2B6Jr3gCY0HkH3J1XBT8p%2FZU1es4PlqsGPs%2B2x8IP%2FB%2B9eZdmQ08pncSUB6xHoSwdcz0YJ2tym0SilRLrJ0wGSoFlKqZGWcHn5XpYjrzupHlgPysqqfr0n0X4xNgJ7ULWGAYU%2FtugevnuVTWExO6UY0yYizPLB6niIbzsuBQ8rxo1fEBcsUGPy82%2FNDlT%2BnDuRPDPbHA7KqTt9Uk%2BH%2B3vJO9c8bAfwM3ec2%2Bzf8%2BHhYb0yMrRu834mPnvre8KLFfwpCYDE8PdFrD0aGR5ZZ4vSZ7MROC5lSINE2SXW8Hpko8Fnt51%2F75sH7SWFEVe4lyv%2Bn3dMSL326oieWL2ewniRkHQt3XP1w3yrqyfTdsUMqfAntVlqLDsh%2FCSXA%2FooB3t1JZaSKkNNqA8KZPF9XmFNF25t8InCBB9A4ddJgQiie3bJ9KNvMsM5HbRAQqXNGHjlBzLOIhQOsb1UeYiLmGk2xRE7mVt2hhO0n9aPsvM0EsHGH%2F%2BGaYgNHUgMFtOa4dQja20g88rgdsoPS%2BYgMOSSmM4GOqUBRKxDGyL57XFZwcUmDROIBORQXixZuaVcZ7gByvxt7oMzQCGrKXlOglu4CiazXBHxHu8C6PUa5zUppd7C4iAtZVsTzX0rDuh8Cr95A2EdkhLjsT9Gzx15w29Z5l7qFkRLlr57K7SRZ8ex3fIxTifxlNKvmFRBdKhmoA9rt61koZOo9u%2BGTeDj%2FASh3huV25ZdU232rJXtTyoDq%2FXkDyTbhDU39Wbe&X-Amz-Signature=1c34e143143a571728ed15d78c22d15268d4e683121180af2a84194c8d4566d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TABIM3VG%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQCHZQIuOsdOddJ9AAVh%2BJrlu37VSyrtzTMEMqbm2NjBngIgAYcH%2Fs14OC111rf0531%2F5%2FFq8P5lvFKyxZVI5GzCbWQqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDATedGOpywqQ59we4ircAyllHOc0r%2F0fspn2S7%2Fesm6DHpwE9vz0vncnVMpP65aT%2BaDGD2ANbVOYB0EV3VXkq1oonDEcJRItxdsQ8c3CLXrP%2FlBul5xayueJG9vbbP8%2B6Jr3gCY0HkH3J1XBT8p%2FZU1es4PlqsGPs%2B2x8IP%2FB%2B9eZdmQ08pncSUB6xHoSwdcz0YJ2tym0SilRLrJ0wGSoFlKqZGWcHn5XpYjrzupHlgPysqqfr0n0X4xNgJ7ULWGAYU%2FtugevnuVTWExO6UY0yYizPLB6niIbzsuBQ8rxo1fEBcsUGPy82%2FNDlT%2BnDuRPDPbHA7KqTt9Uk%2BH%2B3vJO9c8bAfwM3ec2%2Bzf8%2BHhYb0yMrRu834mPnvre8KLFfwpCYDE8PdFrD0aGR5ZZ4vSZ7MROC5lSINE2SXW8Hpko8Fnt51%2F75sH7SWFEVe4lyv%2Bn3dMSL326oieWL2ewniRkHQt3XP1w3yrqyfTdsUMqfAntVlqLDsh%2FCSXA%2FooB3t1JZaSKkNNqA8KZPF9XmFNF25t8InCBB9A4ddJgQiie3bJ9KNvMsM5HbRAQqXNGHjlBzLOIhQOsb1UeYiLmGk2xRE7mVt2hhO0n9aPsvM0EsHGH%2F%2BGaYgNHUgMFtOa4dQja20g88rgdsoPS%2BYgMOSSmM4GOqUBRKxDGyL57XFZwcUmDROIBORQXixZuaVcZ7gByvxt7oMzQCGrKXlOglu4CiazXBHxHu8C6PUa5zUppd7C4iAtZVsTzX0rDuh8Cr95A2EdkhLjsT9Gzx15w29Z5l7qFkRLlr57K7SRZ8ex3fIxTifxlNKvmFRBdKhmoA9rt61koZOo9u%2BGTeDj%2FASh3huV25ZdU232rJXtTyoDq%2FXkDyTbhDU39Wbe&X-Amz-Signature=7ec3a496b86a942db7ce063f1834bbeac5da6cd4f323a3e44d0037feef34fe3e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TABIM3VG%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQCHZQIuOsdOddJ9AAVh%2BJrlu37VSyrtzTMEMqbm2NjBngIgAYcH%2Fs14OC111rf0531%2F5%2FFq8P5lvFKyxZVI5GzCbWQqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDATedGOpywqQ59we4ircAyllHOc0r%2F0fspn2S7%2Fesm6DHpwE9vz0vncnVMpP65aT%2BaDGD2ANbVOYB0EV3VXkq1oonDEcJRItxdsQ8c3CLXrP%2FlBul5xayueJG9vbbP8%2B6Jr3gCY0HkH3J1XBT8p%2FZU1es4PlqsGPs%2B2x8IP%2FB%2B9eZdmQ08pncSUB6xHoSwdcz0YJ2tym0SilRLrJ0wGSoFlKqZGWcHn5XpYjrzupHlgPysqqfr0n0X4xNgJ7ULWGAYU%2FtugevnuVTWExO6UY0yYizPLB6niIbzsuBQ8rxo1fEBcsUGPy82%2FNDlT%2BnDuRPDPbHA7KqTt9Uk%2BH%2B3vJO9c8bAfwM3ec2%2Bzf8%2BHhYb0yMrRu834mPnvre8KLFfwpCYDE8PdFrD0aGR5ZZ4vSZ7MROC5lSINE2SXW8Hpko8Fnt51%2F75sH7SWFEVe4lyv%2Bn3dMSL326oieWL2ewniRkHQt3XP1w3yrqyfTdsUMqfAntVlqLDsh%2FCSXA%2FooB3t1JZaSKkNNqA8KZPF9XmFNF25t8InCBB9A4ddJgQiie3bJ9KNvMsM5HbRAQqXNGHjlBzLOIhQOsb1UeYiLmGk2xRE7mVt2hhO0n9aPsvM0EsHGH%2F%2BGaYgNHUgMFtOa4dQja20g88rgdsoPS%2BYgMOSSmM4GOqUBRKxDGyL57XFZwcUmDROIBORQXixZuaVcZ7gByvxt7oMzQCGrKXlOglu4CiazXBHxHu8C6PUa5zUppd7C4iAtZVsTzX0rDuh8Cr95A2EdkhLjsT9Gzx15w29Z5l7qFkRLlr57K7SRZ8ex3fIxTifxlNKvmFRBdKhmoA9rt61koZOo9u%2BGTeDj%2FASh3huV25ZdU232rJXtTyoDq%2FXkDyTbhDU39Wbe&X-Amz-Signature=48113b6b862370ee66b498219ca5f80563cb04208615aa24861493b90fd793b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBOVG67D%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIQCBK4eMoQ6F7OpN31fAy3kR2ZEGFgQIvdFzDpHmKhtEbwIgUED4M1vbNKpNeSjsVV54N8ocSdUe%2Bo97STLMoXP5UAsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBaWimQmtZAEJDFHCyrcA%2FEJvbK78W93Oy%2FWC2apb2eT%2FX7wTVuO3FcdvWo1F9GiuA%2Fuak28c9yxzjQHfs0lZaN6RW%2F22hY%2BrCFMaZv8gVd%2BJbNQOZU0a4ptgufMFzLCzQfNNJgBvTAfUZCCc5UZ%2BE1Q9%2BjGeVGbq6%2F0hB4%2BLQnflEAjhmDKFbkFyqF9OjKCql3TWnmU%2BPlEzyiI8L8%2Fn1UkFRIE4%2B722MhJN9gtGo8ZXUTEtU%2Bo2nQ%2B4wE8QcWdW8TVB10uaINiOpbGPbBslqYeta2I7FhtMBUDyHu%2FEWgQN3yShvPtX%2FSk0Q3T%2FnEAu2EymsOd3PUgjWWbVesgFNmq%2FeooNxRglPKjlP0tw4ZMkDIlPL%2B9icCauJKpz3EsToNV3YWM5bIaNBHbge9zEVjwNsNSV8grta25wZKDreXgLX%2FW1%2BsnAP52P4icftSnJyq8PxvQL6seD%2BGgCz18Mt0l40RDHHCVgnX62BpjalgdRJ8jcv1F9okF0tX5EZ2aeQmt5%2B9BktMdEpsSgJ7lHdCpIbFRc6WMhmSsII0SuM8zTNcmMW0zexSCk4SwooVmq0uiG8K7Rv0i50XmYe5iFcSmPViOjSN3Sh%2FDYqGn7Rv1pi0sRJYpJdpJZ5JOrVR%2BmmN5pg%2BsZ1Nfb%2BKMMLiCmc4GOqUB28Q2RNBPllSvfCciSohiUdDUa1Xy1%2FOYIIOjtcesthhlljfSB0XE%2BmnI9ZG9S3VojlcSgTyUzKiX4%2FYpThB1sxip6%2FJDj5bjvpezpRshvaBGJxixROlWe1IaV1AJCUOruP0zne2UIhP%2Bl9RuEA%2Fm3d%2F0%2FLbFvNKXDfYlfiVp6PLPeMOrszQ1DU8L0%2BPDu8VdrKA3%2FpGcifMdVgwZ%2FgUATtz8FxAd&X-Amz-Signature=3de8bc303547cbe5c1718e3867c715fac9fa534547e881d2bfce3df247530151&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBOVG67D%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIQCBK4eMoQ6F7OpN31fAy3kR2ZEGFgQIvdFzDpHmKhtEbwIgUED4M1vbNKpNeSjsVV54N8ocSdUe%2Bo97STLMoXP5UAsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBaWimQmtZAEJDFHCyrcA%2FEJvbK78W93Oy%2FWC2apb2eT%2FX7wTVuO3FcdvWo1F9GiuA%2Fuak28c9yxzjQHfs0lZaN6RW%2F22hY%2BrCFMaZv8gVd%2BJbNQOZU0a4ptgufMFzLCzQfNNJgBvTAfUZCCc5UZ%2BE1Q9%2BjGeVGbq6%2F0hB4%2BLQnflEAjhmDKFbkFyqF9OjKCql3TWnmU%2BPlEzyiI8L8%2Fn1UkFRIE4%2B722MhJN9gtGo8ZXUTEtU%2Bo2nQ%2B4wE8QcWdW8TVB10uaINiOpbGPbBslqYeta2I7FhtMBUDyHu%2FEWgQN3yShvPtX%2FSk0Q3T%2FnEAu2EymsOd3PUgjWWbVesgFNmq%2FeooNxRglPKjlP0tw4ZMkDIlPL%2B9icCauJKpz3EsToNV3YWM5bIaNBHbge9zEVjwNsNSV8grta25wZKDreXgLX%2FW1%2BsnAP52P4icftSnJyq8PxvQL6seD%2BGgCz18Mt0l40RDHHCVgnX62BpjalgdRJ8jcv1F9okF0tX5EZ2aeQmt5%2B9BktMdEpsSgJ7lHdCpIbFRc6WMhmSsII0SuM8zTNcmMW0zexSCk4SwooVmq0uiG8K7Rv0i50XmYe5iFcSmPViOjSN3Sh%2FDYqGn7Rv1pi0sRJYpJdpJZ5JOrVR%2BmmN5pg%2BsZ1Nfb%2BKMMLiCmc4GOqUB28Q2RNBPllSvfCciSohiUdDUa1Xy1%2FOYIIOjtcesthhlljfSB0XE%2BmnI9ZG9S3VojlcSgTyUzKiX4%2FYpThB1sxip6%2FJDj5bjvpezpRshvaBGJxixROlWe1IaV1AJCUOruP0zne2UIhP%2Bl9RuEA%2Fm3d%2F0%2FLbFvNKXDfYlfiVp6PLPeMOrszQ1DU8L0%2BPDu8VdrKA3%2FpGcifMdVgwZ%2FgUATtz8FxAd&X-Amz-Signature=ac53d124366070b3daf78dd61d59814d7f69e49f54c568fc97b9f29dd378e482&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBOVG67D%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIQCBK4eMoQ6F7OpN31fAy3kR2ZEGFgQIvdFzDpHmKhtEbwIgUED4M1vbNKpNeSjsVV54N8ocSdUe%2Bo97STLMoXP5UAsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBaWimQmtZAEJDFHCyrcA%2FEJvbK78W93Oy%2FWC2apb2eT%2FX7wTVuO3FcdvWo1F9GiuA%2Fuak28c9yxzjQHfs0lZaN6RW%2F22hY%2BrCFMaZv8gVd%2BJbNQOZU0a4ptgufMFzLCzQfNNJgBvTAfUZCCc5UZ%2BE1Q9%2BjGeVGbq6%2F0hB4%2BLQnflEAjhmDKFbkFyqF9OjKCql3TWnmU%2BPlEzyiI8L8%2Fn1UkFRIE4%2B722MhJN9gtGo8ZXUTEtU%2Bo2nQ%2B4wE8QcWdW8TVB10uaINiOpbGPbBslqYeta2I7FhtMBUDyHu%2FEWgQN3yShvPtX%2FSk0Q3T%2FnEAu2EymsOd3PUgjWWbVesgFNmq%2FeooNxRglPKjlP0tw4ZMkDIlPL%2B9icCauJKpz3EsToNV3YWM5bIaNBHbge9zEVjwNsNSV8grta25wZKDreXgLX%2FW1%2BsnAP52P4icftSnJyq8PxvQL6seD%2BGgCz18Mt0l40RDHHCVgnX62BpjalgdRJ8jcv1F9okF0tX5EZ2aeQmt5%2B9BktMdEpsSgJ7lHdCpIbFRc6WMhmSsII0SuM8zTNcmMW0zexSCk4SwooVmq0uiG8K7Rv0i50XmYe5iFcSmPViOjSN3Sh%2FDYqGn7Rv1pi0sRJYpJdpJZ5JOrVR%2BmmN5pg%2BsZ1Nfb%2BKMMLiCmc4GOqUB28Q2RNBPllSvfCciSohiUdDUa1Xy1%2FOYIIOjtcesthhlljfSB0XE%2BmnI9ZG9S3VojlcSgTyUzKiX4%2FYpThB1sxip6%2FJDj5bjvpezpRshvaBGJxixROlWe1IaV1AJCUOruP0zne2UIhP%2Bl9RuEA%2Fm3d%2F0%2FLbFvNKXDfYlfiVp6PLPeMOrszQ1DU8L0%2BPDu8VdrKA3%2FpGcifMdVgwZ%2FgUATtz8FxAd&X-Amz-Signature=ec3b941d6c33a3c70cebaa9912c5e24f2f2d9063e398ef0a13af451d61489139&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBOVG67D%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIQCBK4eMoQ6F7OpN31fAy3kR2ZEGFgQIvdFzDpHmKhtEbwIgUED4M1vbNKpNeSjsVV54N8ocSdUe%2Bo97STLMoXP5UAsqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBaWimQmtZAEJDFHCyrcA%2FEJvbK78W93Oy%2FWC2apb2eT%2FX7wTVuO3FcdvWo1F9GiuA%2Fuak28c9yxzjQHfs0lZaN6RW%2F22hY%2BrCFMaZv8gVd%2BJbNQOZU0a4ptgufMFzLCzQfNNJgBvTAfUZCCc5UZ%2BE1Q9%2BjGeVGbq6%2F0hB4%2BLQnflEAjhmDKFbkFyqF9OjKCql3TWnmU%2BPlEzyiI8L8%2Fn1UkFRIE4%2B722MhJN9gtGo8ZXUTEtU%2Bo2nQ%2B4wE8QcWdW8TVB10uaINiOpbGPbBslqYeta2I7FhtMBUDyHu%2FEWgQN3yShvPtX%2FSk0Q3T%2FnEAu2EymsOd3PUgjWWbVesgFNmq%2FeooNxRglPKjlP0tw4ZMkDIlPL%2B9icCauJKpz3EsToNV3YWM5bIaNBHbge9zEVjwNsNSV8grta25wZKDreXgLX%2FW1%2BsnAP52P4icftSnJyq8PxvQL6seD%2BGgCz18Mt0l40RDHHCVgnX62BpjalgdRJ8jcv1F9okF0tX5EZ2aeQmt5%2B9BktMdEpsSgJ7lHdCpIbFRc6WMhmSsII0SuM8zTNcmMW0zexSCk4SwooVmq0uiG8K7Rv0i50XmYe5iFcSmPViOjSN3Sh%2FDYqGn7Rv1pi0sRJYpJdpJZ5JOrVR%2BmmN5pg%2BsZ1Nfb%2BKMMLiCmc4GOqUB28Q2RNBPllSvfCciSohiUdDUa1Xy1%2FOYIIOjtcesthhlljfSB0XE%2BmnI9ZG9S3VojlcSgTyUzKiX4%2FYpThB1sxip6%2FJDj5bjvpezpRshvaBGJxixROlWe1IaV1AJCUOruP0zne2UIhP%2Bl9RuEA%2Fm3d%2F0%2FLbFvNKXDfYlfiVp6PLPeMOrszQ1DU8L0%2BPDu8VdrKA3%2FpGcifMdVgwZ%2FgUATtz8FxAd&X-Amz-Signature=b4c4a37bdd6439d5aeb68c50b26577350b487a8ac07aacbd2dd18c58c7efd792&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WN23UVNS%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIQCzXMn84kIaSK1MpZe%2FXBQLCBsfBE0Juzvl%2B6f5y%2BlKHwIgCh59ihnQMeqjufEfyMtHaMNki%2Ffgw7W5t7CuQcZvuBMqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC9SkxacD5pKwK%2BVpSrcAy33GRGWDnB%2FVWDq1R9tFW0YOih1DjXmEapXP915TtR50OkkPsv%2FzDuAm6DD08vKYG6kaAKqDEVYYInv0%2Bb7q%2Fbl9tlbACEbgFaxWZRn3w21kvGhoCeyMwJO5iEs7kzOJT2DkvYu%2F2hOrjl23c1kC83h0HNNmstqjog%2F2a3ZQnc9yv97XRpO6D5sEqLcPP4t0F3FSn%2BW13VL9yYLAgHDYBPvTHPEdWspTIp4c0ECk1rhj4d3N%2F55Qzhq0%2B7UHu%2BIyFSGJxVfNjh21BcrNCx0oDfvFrIu3NxU3%2B0DZE%2B19XnOIoR2gtnG5tPHLpMtN6ELnguhkjsGTJMbZCS25Qa9nSUVf8ooLK0r9VxgU1wxiHmBedMaIb2DF0%2FCuyGUUClTa78SXuSdYUDANhpF3DMR5bwKaP6uNRkYi%2BisvLylQQVK0Uj%2BwRuidk26%2F3AqBrjI5rd0OiBw2MVzfXI88tZqWnegbD0ZsQTCpYEuMhsczc1yJ7rEhhe%2FWE6mhZrPaTDOQBslvEx5jIxFrx55H9b5X53gooNVg3E8q8sCjPQM6i4Gb3eGQ99WExKjTMkep4AFXzklRu0OrdWktZwErW%2Bnyq52fNWGM3boAzef4R%2BA6pIeN47sezaDXbUb%2FWJDMLWPmM4GOqUBVmqKwhmjG8S%2BhXcSrRRTLyV3dN3CQl%2FkLmwFpvkHBfLBRmZum0a8%2F4F%2BRc6DEaoPqbKCJohIFeuUaWHwGAxqpexm4VQB6Jj%2BExIP%2F%2F3xo0bhl1WDAcaee9zGkT0raW8%2FFjApisASAxS4O%2BYc8fvOzJRP%2Fis%2FI7WHFA31hvF4zqDlKekJNDCDijEfoniKcPFCJAA2OdTRz8RAu9WQMPtVDe%2F2YBKg&X-Amz-Signature=1aa2bfe8652e8e943da8c444034aa6bd90a1c15399ae9d0da20aca74bad591c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YUHWX57F%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085318Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJGMEQCIFGwreaSCsOsixEsQtTQ0lzzNTNMhH4U4kYIqgafzaOHAiBOTr5NKVYCuUvNvLR6gXO3iiA%2Bg5dZ5RNJrWmSaFX3HSqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMq9p28f%2BFvjSNc4%2FIKtwDIXJQrR1Jv3yXU3DlHpi3aiJVF3J06XCq8goksYAD8jQ83mY5bEZGbH2A8wuy9KLGtyr2abUxLjzZTGKF%2BpWsEDtVgez%2Fo1%2BUiJcdxdP8qqxih02r6Irm2eOR%2F%2FvPQ8P9LfU8kknXPxs0guwKODwSuQT3PX2iyanJFyYC1Sv%2F6eHJwusrzjv18gJOvF0Vxf1SmnHGQhD2Kts8kAgPopDxaTo9aFtt7EHRBwqhnlc0n0d0ONQqB6qnXySp7UTgOBxb%2FfyxC4JxZfM0Oln50wcOECOJ7XbPl8kFQQRk3aI3nO54HfPzd9u6zY0kZcRkM3juIH6HuPUm9I5lGY%2FFaBXuHNTZgysGK1ZAnKHeRslqyQXM74H42E9NVdLsUi1vmvMH19O1EthVFBj5mjgaSeylHo3UVATHkkbcENfnRyEAUBzjWrgH6iXaXN82XLfS3y6J9qNUc%2Bb6UaEHhl7m6K%2B89AabMxL8gd2vAe4uoSKnd2u86pKUn74mZ2psXvmdlTZ%2F5dxqTcz1cEsQ%2Bma0k3JJ%2FVKbNzryY0ZEj8GfZu25qh4Fn7jC%2BnQOjqzFs8TujRhd4xGIC3AjoiLy7A%2FS3ogpOxHAQTJjGg8WelVsD79iD5Qk6vLGNk5FR%2BW0r88whI%2BYzgY6pgGqbg%2FMJjrZadFxiI8jHzL9jvFjakVe6s51NC54YP6unsBbKLJf3Lw3zptEjNoyuW3k7QRtiGAi%2FNG4q5IV%2BVTwpWrveq7X9xjnM5gmWUXWEx0OQEQ1Pt%2BAtJFed7hejTX1pnwmesyyZc3W8iLO8G3sDxf8Ggqt6OE2ytZ2xnL3oSj0OmTz3T4JHDJKDDRy%2FOA8rOcnBGL%2BJ7pXsTUh6BGDyb7e%2BO6q&X-Amz-Signature=94a4518a8fff3df51870afec71c61bf88daafdfad063449be7908583005a7f37&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YUHWX57F%2F20260327%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260327T085318Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJGMEQCIFGwreaSCsOsixEsQtTQ0lzzNTNMhH4U4kYIqgafzaOHAiBOTr5NKVYCuUvNvLR6gXO3iiA%2Bg5dZ5RNJrWmSaFX3HSqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMq9p28f%2BFvjSNc4%2FIKtwDIXJQrR1Jv3yXU3DlHpi3aiJVF3J06XCq8goksYAD8jQ83mY5bEZGbH2A8wuy9KLGtyr2abUxLjzZTGKF%2BpWsEDtVgez%2Fo1%2BUiJcdxdP8qqxih02r6Irm2eOR%2F%2FvPQ8P9LfU8kknXPxs0guwKODwSuQT3PX2iyanJFyYC1Sv%2F6eHJwusrzjv18gJOvF0Vxf1SmnHGQhD2Kts8kAgPopDxaTo9aFtt7EHRBwqhnlc0n0d0ONQqB6qnXySp7UTgOBxb%2FfyxC4JxZfM0Oln50wcOECOJ7XbPl8kFQQRk3aI3nO54HfPzd9u6zY0kZcRkM3juIH6HuPUm9I5lGY%2FFaBXuHNTZgysGK1ZAnKHeRslqyQXM74H42E9NVdLsUi1vmvMH19O1EthVFBj5mjgaSeylHo3UVATHkkbcENfnRyEAUBzjWrgH6iXaXN82XLfS3y6J9qNUc%2Bb6UaEHhl7m6K%2B89AabMxL8gd2vAe4uoSKnd2u86pKUn74mZ2psXvmdlTZ%2F5dxqTcz1cEsQ%2Bma0k3JJ%2FVKbNzryY0ZEj8GfZu25qh4Fn7jC%2BnQOjqzFs8TujRhd4xGIC3AjoiLy7A%2FS3ogpOxHAQTJjGg8WelVsD79iD5Qk6vLGNk5FR%2BW0r88whI%2BYzgY6pgGqbg%2FMJjrZadFxiI8jHzL9jvFjakVe6s51NC54YP6unsBbKLJf3Lw3zptEjNoyuW3k7QRtiGAi%2FNG4q5IV%2BVTwpWrveq7X9xjnM5gmWUXWEx0OQEQ1Pt%2BAtJFed7hejTX1pnwmesyyZc3W8iLO8G3sDxf8Ggqt6OE2ytZ2xnL3oSj0OmTz3T4JHDJKDDRy%2FOA8rOcnBGL%2BJ7pXsTUh6BGDyb7e%2BO6q&X-Amz-Signature=8ff7d10692d6b7780b99b1e519b70c698c7fda07fb6ee0141928f639de71b87a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
