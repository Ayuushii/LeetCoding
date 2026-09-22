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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SHVTYMB%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICBh%2F%2BB6JatLe311Slvw44lgYm6qGtqueIuQCzRwagbzAiAlXxuDSH6qZMcvUhp4kNul%2BzD998%2FW4n03DL7hFE%2FUySqIBAil%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMpr1BzCyrZiLgbDmaKtwDV32WDz9993Erzqa%2FDaPnGdNLuMDC8Qiy%2B4YXPJRAG3sIBJTgCEdfnG4mpivARDRK0niWWbXDL97PduJ5KP2K8dmTiARTEhPD8WVJSU9spjIocoVzySU%2FHKmKYalfR5WkdWpHrYzeie%2FqikZyREuxJV4ozi5wqH3hW1puJXFoctxqqZSnn6TtcgXsEnOuoUywBFtQeHbIfmbgkI6cweo2QI59kXUSK0nm%2FbwbUqja08mzUmYTAFcojYcHPGPCEv4aAcbPDSpgA522EoBfbNmDUaAtSV8d6CQb4l0en5ftnB2uEnUmyiJ44HobT8iKlQSlzbTKVtNs45VQ012IHzVF8E6ObjLjyWhu5mPOe12gGOHNTvx4rjzHa4c4wQ%2F5mDjeKr9yvM9w75NYJDqwGgk6mm1LVGCVPevncQhjTS1V7QqP3ECoxUp56ACwFzityRyrBIqBVgjU9OPs0R2QksdsxE%2BowqnL%2FjE1Ucmp2OeF78aUj4RfDfeawItXDktnd6kTAbPMErBRnsae4GactT3%2FkAThBZZQanZ0W5CNQl8Serj%2FFtnYJmLLzWowVRg49Qb4%2FHdPVss3KCjsBhycBjixdJRwJ%2BWs%2BA76oDEKzHqM2xU30t%2BFEL4gMO7Ho6wwoNXJ1QY6pgEdntrhRRuRDBv7Pg646lAk%2FnDtsJyTJVsmFLd3BNfyWvfpN54t71i%2B0KhbrrBpY%2ByDGknRBgflqRYXYnq6QY9ZmbxkCQS8FPMo%2BYbXE4Dz%2BDhLE85QpbfXpQy7P90SDpvSiMGKFZt950AmR559FEjDzEtRadlnNWGqIE%2BzgCUo0XSEVVr8Uu6p%2FV2lcplCMM5efbDnx1HELWmIiPWKPZthZAQk7rvL&X-Amz-Signature=6c30a87658ef8bba68db12725708732984417fccefaf01f6a12bc1b8df8ec7c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SHVTYMB%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICBh%2F%2BB6JatLe311Slvw44lgYm6qGtqueIuQCzRwagbzAiAlXxuDSH6qZMcvUhp4kNul%2BzD998%2FW4n03DL7hFE%2FUySqIBAil%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMpr1BzCyrZiLgbDmaKtwDV32WDz9993Erzqa%2FDaPnGdNLuMDC8Qiy%2B4YXPJRAG3sIBJTgCEdfnG4mpivARDRK0niWWbXDL97PduJ5KP2K8dmTiARTEhPD8WVJSU9spjIocoVzySU%2FHKmKYalfR5WkdWpHrYzeie%2FqikZyREuxJV4ozi5wqH3hW1puJXFoctxqqZSnn6TtcgXsEnOuoUywBFtQeHbIfmbgkI6cweo2QI59kXUSK0nm%2FbwbUqja08mzUmYTAFcojYcHPGPCEv4aAcbPDSpgA522EoBfbNmDUaAtSV8d6CQb4l0en5ftnB2uEnUmyiJ44HobT8iKlQSlzbTKVtNs45VQ012IHzVF8E6ObjLjyWhu5mPOe12gGOHNTvx4rjzHa4c4wQ%2F5mDjeKr9yvM9w75NYJDqwGgk6mm1LVGCVPevncQhjTS1V7QqP3ECoxUp56ACwFzityRyrBIqBVgjU9OPs0R2QksdsxE%2BowqnL%2FjE1Ucmp2OeF78aUj4RfDfeawItXDktnd6kTAbPMErBRnsae4GactT3%2FkAThBZZQanZ0W5CNQl8Serj%2FFtnYJmLLzWowVRg49Qb4%2FHdPVss3KCjsBhycBjixdJRwJ%2BWs%2BA76oDEKzHqM2xU30t%2BFEL4gMO7Ho6wwoNXJ1QY6pgEdntrhRRuRDBv7Pg646lAk%2FnDtsJyTJVsmFLd3BNfyWvfpN54t71i%2B0KhbrrBpY%2ByDGknRBgflqRYXYnq6QY9ZmbxkCQS8FPMo%2BYbXE4Dz%2BDhLE85QpbfXpQy7P90SDpvSiMGKFZt950AmR559FEjDzEtRadlnNWGqIE%2BzgCUo0XSEVVr8Uu6p%2FV2lcplCMM5efbDnx1HELWmIiPWKPZthZAQk7rvL&X-Amz-Signature=f7a3aa444fb68036ae59fbe8dcaa4f45c26739b5e69de70c5eaaa1be3b87be3b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SHVTYMB%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICBh%2F%2BB6JatLe311Slvw44lgYm6qGtqueIuQCzRwagbzAiAlXxuDSH6qZMcvUhp4kNul%2BzD998%2FW4n03DL7hFE%2FUySqIBAil%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMpr1BzCyrZiLgbDmaKtwDV32WDz9993Erzqa%2FDaPnGdNLuMDC8Qiy%2B4YXPJRAG3sIBJTgCEdfnG4mpivARDRK0niWWbXDL97PduJ5KP2K8dmTiARTEhPD8WVJSU9spjIocoVzySU%2FHKmKYalfR5WkdWpHrYzeie%2FqikZyREuxJV4ozi5wqH3hW1puJXFoctxqqZSnn6TtcgXsEnOuoUywBFtQeHbIfmbgkI6cweo2QI59kXUSK0nm%2FbwbUqja08mzUmYTAFcojYcHPGPCEv4aAcbPDSpgA522EoBfbNmDUaAtSV8d6CQb4l0en5ftnB2uEnUmyiJ44HobT8iKlQSlzbTKVtNs45VQ012IHzVF8E6ObjLjyWhu5mPOe12gGOHNTvx4rjzHa4c4wQ%2F5mDjeKr9yvM9w75NYJDqwGgk6mm1LVGCVPevncQhjTS1V7QqP3ECoxUp56ACwFzityRyrBIqBVgjU9OPs0R2QksdsxE%2BowqnL%2FjE1Ucmp2OeF78aUj4RfDfeawItXDktnd6kTAbPMErBRnsae4GactT3%2FkAThBZZQanZ0W5CNQl8Serj%2FFtnYJmLLzWowVRg49Qb4%2FHdPVss3KCjsBhycBjixdJRwJ%2BWs%2BA76oDEKzHqM2xU30t%2BFEL4gMO7Ho6wwoNXJ1QY6pgEdntrhRRuRDBv7Pg646lAk%2FnDtsJyTJVsmFLd3BNfyWvfpN54t71i%2B0KhbrrBpY%2ByDGknRBgflqRYXYnq6QY9ZmbxkCQS8FPMo%2BYbXE4Dz%2BDhLE85QpbfXpQy7P90SDpvSiMGKFZt950AmR559FEjDzEtRadlnNWGqIE%2BzgCUo0XSEVVr8Uu6p%2FV2lcplCMM5efbDnx1HELWmIiPWKPZthZAQk7rvL&X-Amz-Signature=73e1bd27288f8d01d19b6ce884d1df8259cd54bd57da82391b42c0a4a85ee0e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SXMWI3S%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDbCr5XG%2BN9ZV8r1lE36VuubiFvtPB23%2BL4dT7CIKwhQAiEA1XRTsAlVhotaJjZr0k2dT18nJbRh1lzWMYQwwRYEBvQqiAQIpf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEpsKu%2Bxrqw2%2F9VwFCrcA7iSbzH2YxXOdBjDtRs97v5cP92KcY%2BS3PgiRm0kd7yT62f6wXluBKqZBiqr6yzlNgBSorqcLUSEPw0SwoBA45L%2BXh8TJTNrNwOUFXZEA6A53E8Gurl0hLjv3YPDKcxVPSCybo213BTKMvoKmHfZqsyzRcVWuRA5o6VCrbDzWCTuDj%2Fv9JoIzzOAyAv4nMdS1FoSmvMC%2FAsq6Aid6PFCXqHoOwSTBASLSck5iR0QTvAtrN67eK%2F%2FFEKzOd4kFesBf9m%2FFfgPrr0KeEs7FCHLn24PH7rpcFPt1OJCxSkbr38mYCvtzAYb0UUuKQ%2BmFMWpveY%2FWOfm85dWPz6UCHLX8INV7Xc7UWyFVC1cJaZG4yyHa14k1lJvMswcOXTYYB1TXvLoUWXS07y9e3%2FLvQKeyT31xh8ENTHlah8TV0o7oCreCP5Itm7gU87socKNIdnkcCd3k18C9t2ZvhT0tNLnL6VPC0GHclNl5entRhy68WsP2XCkmIH%2F2%2B74c4JyHyUDuiRTmFtGcfxShn%2BKmVN5C8MQnoNExQFS135kD7nIwcm%2BVJjKnc%2FZE%2FBmaS%2B9bJCBqemGOe33yK6dtg9runLLjzMbGVWsUs%2FZeRC8KH0ban%2F%2Fk%2BpFdmSj51UfmYp0MKXjydUGOqUBaAILWjqRI1dRnNfLD9CA9%2BhALKt0BZ8Jylb8BrlRI4m%2Fl9tdvQUR8dtmRPJ%2BD%2BglCrD8GaGqQeHE2mvSRAfC8GAk9LfsB%2FesraDd16iqrx%2FkodovDEKk1pGOmoPBJ9v3ACEuTZJNAttnoeZ2eI7%2BwHto%2FFM7w0Q941MBlhMqUSBW2ah%2F8TuSvBCdbC8YjZvjAmIO9U0V0BolVGsZF4ehCLm7MRZu&X-Amz-Signature=454e92c15fc0cc1b922a969e2641600ab1b9b208bea9750856b127adc7aa0d05&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SXMWI3S%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDbCr5XG%2BN9ZV8r1lE36VuubiFvtPB23%2BL4dT7CIKwhQAiEA1XRTsAlVhotaJjZr0k2dT18nJbRh1lzWMYQwwRYEBvQqiAQIpf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEpsKu%2Bxrqw2%2F9VwFCrcA7iSbzH2YxXOdBjDtRs97v5cP92KcY%2BS3PgiRm0kd7yT62f6wXluBKqZBiqr6yzlNgBSorqcLUSEPw0SwoBA45L%2BXh8TJTNrNwOUFXZEA6A53E8Gurl0hLjv3YPDKcxVPSCybo213BTKMvoKmHfZqsyzRcVWuRA5o6VCrbDzWCTuDj%2Fv9JoIzzOAyAv4nMdS1FoSmvMC%2FAsq6Aid6PFCXqHoOwSTBASLSck5iR0QTvAtrN67eK%2F%2FFEKzOd4kFesBf9m%2FFfgPrr0KeEs7FCHLn24PH7rpcFPt1OJCxSkbr38mYCvtzAYb0UUuKQ%2BmFMWpveY%2FWOfm85dWPz6UCHLX8INV7Xc7UWyFVC1cJaZG4yyHa14k1lJvMswcOXTYYB1TXvLoUWXS07y9e3%2FLvQKeyT31xh8ENTHlah8TV0o7oCreCP5Itm7gU87socKNIdnkcCd3k18C9t2ZvhT0tNLnL6VPC0GHclNl5entRhy68WsP2XCkmIH%2F2%2B74c4JyHyUDuiRTmFtGcfxShn%2BKmVN5C8MQnoNExQFS135kD7nIwcm%2BVJjKnc%2FZE%2FBmaS%2B9bJCBqemGOe33yK6dtg9runLLjzMbGVWsUs%2FZeRC8KH0ban%2F%2Fk%2BpFdmSj51UfmYp0MKXjydUGOqUBaAILWjqRI1dRnNfLD9CA9%2BhALKt0BZ8Jylb8BrlRI4m%2Fl9tdvQUR8dtmRPJ%2BD%2BglCrD8GaGqQeHE2mvSRAfC8GAk9LfsB%2FesraDd16iqrx%2FkodovDEKk1pGOmoPBJ9v3ACEuTZJNAttnoeZ2eI7%2BwHto%2FFM7w0Q941MBlhMqUSBW2ah%2F8TuSvBCdbC8YjZvjAmIO9U0V0BolVGsZF4ehCLm7MRZu&X-Amz-Signature=3e3766772877b8d9e3ae680a1a9d2c30317b03aece42c4d5ae3e6081c643d4aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SXMWI3S%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDbCr5XG%2BN9ZV8r1lE36VuubiFvtPB23%2BL4dT7CIKwhQAiEA1XRTsAlVhotaJjZr0k2dT18nJbRh1lzWMYQwwRYEBvQqiAQIpf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEpsKu%2Bxrqw2%2F9VwFCrcA7iSbzH2YxXOdBjDtRs97v5cP92KcY%2BS3PgiRm0kd7yT62f6wXluBKqZBiqr6yzlNgBSorqcLUSEPw0SwoBA45L%2BXh8TJTNrNwOUFXZEA6A53E8Gurl0hLjv3YPDKcxVPSCybo213BTKMvoKmHfZqsyzRcVWuRA5o6VCrbDzWCTuDj%2Fv9JoIzzOAyAv4nMdS1FoSmvMC%2FAsq6Aid6PFCXqHoOwSTBASLSck5iR0QTvAtrN67eK%2F%2FFEKzOd4kFesBf9m%2FFfgPrr0KeEs7FCHLn24PH7rpcFPt1OJCxSkbr38mYCvtzAYb0UUuKQ%2BmFMWpveY%2FWOfm85dWPz6UCHLX8INV7Xc7UWyFVC1cJaZG4yyHa14k1lJvMswcOXTYYB1TXvLoUWXS07y9e3%2FLvQKeyT31xh8ENTHlah8TV0o7oCreCP5Itm7gU87socKNIdnkcCd3k18C9t2ZvhT0tNLnL6VPC0GHclNl5entRhy68WsP2XCkmIH%2F2%2B74c4JyHyUDuiRTmFtGcfxShn%2BKmVN5C8MQnoNExQFS135kD7nIwcm%2BVJjKnc%2FZE%2FBmaS%2B9bJCBqemGOe33yK6dtg9runLLjzMbGVWsUs%2FZeRC8KH0ban%2F%2Fk%2BpFdmSj51UfmYp0MKXjydUGOqUBaAILWjqRI1dRnNfLD9CA9%2BhALKt0BZ8Jylb8BrlRI4m%2Fl9tdvQUR8dtmRPJ%2BD%2BglCrD8GaGqQeHE2mvSRAfC8GAk9LfsB%2FesraDd16iqrx%2FkodovDEKk1pGOmoPBJ9v3ACEuTZJNAttnoeZ2eI7%2BwHto%2FFM7w0Q941MBlhMqUSBW2ah%2F8TuSvBCdbC8YjZvjAmIO9U0V0BolVGsZF4ehCLm7MRZu&X-Amz-Signature=b0ff2ecebc78262e047f4a130e0c6caadbeb7a1a4957301cd6c9ea7f02f0a786&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SXMWI3S%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130701Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDbCr5XG%2BN9ZV8r1lE36VuubiFvtPB23%2BL4dT7CIKwhQAiEA1XRTsAlVhotaJjZr0k2dT18nJbRh1lzWMYQwwRYEBvQqiAQIpf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEpsKu%2Bxrqw2%2F9VwFCrcA7iSbzH2YxXOdBjDtRs97v5cP92KcY%2BS3PgiRm0kd7yT62f6wXluBKqZBiqr6yzlNgBSorqcLUSEPw0SwoBA45L%2BXh8TJTNrNwOUFXZEA6A53E8Gurl0hLjv3YPDKcxVPSCybo213BTKMvoKmHfZqsyzRcVWuRA5o6VCrbDzWCTuDj%2Fv9JoIzzOAyAv4nMdS1FoSmvMC%2FAsq6Aid6PFCXqHoOwSTBASLSck5iR0QTvAtrN67eK%2F%2FFEKzOd4kFesBf9m%2FFfgPrr0KeEs7FCHLn24PH7rpcFPt1OJCxSkbr38mYCvtzAYb0UUuKQ%2BmFMWpveY%2FWOfm85dWPz6UCHLX8INV7Xc7UWyFVC1cJaZG4yyHa14k1lJvMswcOXTYYB1TXvLoUWXS07y9e3%2FLvQKeyT31xh8ENTHlah8TV0o7oCreCP5Itm7gU87socKNIdnkcCd3k18C9t2ZvhT0tNLnL6VPC0GHclNl5entRhy68WsP2XCkmIH%2F2%2B74c4JyHyUDuiRTmFtGcfxShn%2BKmVN5C8MQnoNExQFS135kD7nIwcm%2BVJjKnc%2FZE%2FBmaS%2B9bJCBqemGOe33yK6dtg9runLLjzMbGVWsUs%2FZeRC8KH0ban%2F%2Fk%2BpFdmSj51UfmYp0MKXjydUGOqUBaAILWjqRI1dRnNfLD9CA9%2BhALKt0BZ8Jylb8BrlRI4m%2Fl9tdvQUR8dtmRPJ%2BD%2BglCrD8GaGqQeHE2mvSRAfC8GAk9LfsB%2FesraDd16iqrx%2FkodovDEKk1pGOmoPBJ9v3ACEuTZJNAttnoeZ2eI7%2BwHto%2FFM7w0Q941MBlhMqUSBW2ah%2F8TuSvBCdbC8YjZvjAmIO9U0V0BolVGsZF4ehCLm7MRZu&X-Amz-Signature=998868fc153e1856a99b567bd9fa26773a241894534d70c0ffa489b509b36ea6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665J5CGTHX%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130702Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHVkaXYgD%2BS0OF0cV14veSX584hyoDBKIGkJ2McCM34zAiBmyKEJqbLekiaQIP%2FmqPjkMA%2BfW9ShMbpxwxxY8ICD2yqIBAil%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM2UAGRuACjo3lQOJdKtwDZXCnKhg19kJIp%2Bw3pLd6385WJFL43s2lmma15HWY9%2FqSb%2F01UEM6ggrm%2F2pNRZkK8f1v1zJRbk%2Fkq81V0KYweF7RoYdLjhVjM6PMl4GIZU2tp%2FY%2BQDJaxCYBAPL3NgU2xoWeNHCVpniMy4oNTKAaIH4VvUEUM0uzjdLhRz4KmpqbA2gDC06rOEkrRzRg1VUxlndZibRJZ3HjTU%2B17aF5rthPp%2Fj92XELik%2BFHE06r7pEVk9DW6VeNGDKW580g2KK2RqSDCROeZ1OGmiyJVopV9apA5dZ9rma8LH4Mgk0E0CwIlS8%2FCGtXT%2BrVArbYSdzm0duuN92igXp0d8Q15JZ0xIjppAC6w9IM1Mzg4SEMVaQPxYUO1UusQ%2Br0z%2BpoWPSqg3ysl82s7IxMUu8LwXuLPBRx3TAfFkegIzZ6mie1wwmLSY1pU5rSj9PGwuRxtyUjduWGdTCDyC6KeMGFefRnBi9KnFn6mNzPGnxVoxizCZRru6vEY9%2FT11t%2F0GeAxk6Q6SlDp81u%2FkVO7MDmpj0Jk3%2FPszCYsTYk4aHPwALJd7n71ZKTT3%2BcaI%2FOcmwmEUfXqXqPpWIiHIFAQzbj8CDilNYNnkGNnxdOsCC%2BWkOB6VtElDOiqRRcAkvqdAwoODJ1QY6pgHcoEmFWC4ZYFpg5DD91AiYpomSnSR4vUmIoRzStArOIBbu5ytHtXRz5eh55kadXJNWaX4q7991JWIgWhR0c3V1Q780BvrGPALZ2nL1MQMn2VWL8QRA2ACCLgUDk9AL41OhAYPm7yueQBvqKVWE1x%2BzB50Kx37ItUdr9Om%2FE7LwqBgPl22UGWIjx1S6vDqgmLWHlDje%2FNdP40sHSUMK7iDiOoTJoUGr&X-Amz-Signature=eef8bcedc7b2380b1561440de4468f230e444defa62851e8547122e1a352d36d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FOS3OSZ%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130702Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHb%2BNcAOLQl4gheU33BypBeggKoT3pcoZuxqsgtOmnwmAiAJRiRo2tAtFa7y%2Fvst8H3UToEkWHONKKV7BHJodbU3bSqIBAil%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4z%2FO4PATpkihbpRuKtwDYA5M4xpfqU7JV9cz7L5%2FoROp%2BLTKdccyxop6CM%2Bii3aTqwMDV7tnpXWLJnqBy7gQl2x8Zd%2FGmE%2BepSy%2BqHhj9iYqhDUn7IZLNTS61FA3ysIlWvxJ3So6w%2Baa0XtI8zing5Tv3gnw%2Fm%2B%2BlJPQQZ3eKowOqp%2BCvE%2FdDkPFxRp%2Bw%2F8Jkpz1mnCi%2BcdeLFI1HkTCv7HRvc4dE81JzZTzpcu4plrWpjPzsgV2oK0zSvnaWXhyMMgChzspoEw6x7%2FTi2q6VLtV16evIJgfwi%2BhjcdUnnRUqqHFRKfUHTODXGaRo%2BmhRsCVRb6StJ9v2ORJtQ9YXmKCWTcuWwfGNabP3nSqizIorKywANEV7jWKcgnSTijIGC5oknbhhy56ZHIVtwSfP2u6M%2Bbo2S%2BeWePS26wawtmh0Lj5SoJaeXaCxmr%2Bws7%2FrshZ1f%2FH9TAYnIndSJqXD1z8g42H12CMlkIS7MIQ1mgSSsB%2BECMfw4Ja1z6c2ny6uImXmQXs1nWQbpa8W6cXbx%2FE7urpGIRiUHSI84m%2BRiNMSucTnBGTHDeWJmkrmZHH5zWdMBqN1kP%2FAc3Di%2FXp45qfmNDv%2BXHPvV1W6Y9W7J44U9X7cVvjt%2FntR53%2F3Et4lmwxwE7L2SBUeZswz%2BLJ1QY6pgHOko0GRKFrVd1Jzjh%2B3ZmgH%2BkLXR248du8MDZ7kOKzN1m6MIb%2FjaKGwIfkEdmn4AIPtRkOB0eF7mp%2BOMb7cj0JtjednknQAgaZkjd6QGjRYu8sRdeRLFatZg2EoKcCAmniktPLROMfMzeBvPQ5ULgm7Tu9t12F%2BPRrLtfZqA0NgS84zf9CN9dJmeN5pcWn9pJF3w5AXJZEdWTlzpRyQxaSeIdEAvN6&X-Amz-Signature=708fea25f7b55b2d8999401378cd4f186af2675db766e8058318e0d40656e699&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FOS3OSZ%2F20260922%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260922T130702Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHb%2BNcAOLQl4gheU33BypBeggKoT3pcoZuxqsgtOmnwmAiAJRiRo2tAtFa7y%2Fvst8H3UToEkWHONKKV7BHJodbU3bSqIBAil%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM4z%2FO4PATpkihbpRuKtwDYA5M4xpfqU7JV9cz7L5%2FoROp%2BLTKdccyxop6CM%2Bii3aTqwMDV7tnpXWLJnqBy7gQl2x8Zd%2FGmE%2BepSy%2BqHhj9iYqhDUn7IZLNTS61FA3ysIlWvxJ3So6w%2Baa0XtI8zing5Tv3gnw%2Fm%2B%2BlJPQQZ3eKowOqp%2BCvE%2FdDkPFxRp%2Bw%2F8Jkpz1mnCi%2BcdeLFI1HkTCv7HRvc4dE81JzZTzpcu4plrWpjPzsgV2oK0zSvnaWXhyMMgChzspoEw6x7%2FTi2q6VLtV16evIJgfwi%2BhjcdUnnRUqqHFRKfUHTODXGaRo%2BmhRsCVRb6StJ9v2ORJtQ9YXmKCWTcuWwfGNabP3nSqizIorKywANEV7jWKcgnSTijIGC5oknbhhy56ZHIVtwSfP2u6M%2Bbo2S%2BeWePS26wawtmh0Lj5SoJaeXaCxmr%2Bws7%2FrshZ1f%2FH9TAYnIndSJqXD1z8g42H12CMlkIS7MIQ1mgSSsB%2BECMfw4Ja1z6c2ny6uImXmQXs1nWQbpa8W6cXbx%2FE7urpGIRiUHSI84m%2BRiNMSucTnBGTHDeWJmkrmZHH5zWdMBqN1kP%2FAc3Di%2FXp45qfmNDv%2BXHPvV1W6Y9W7J44U9X7cVvjt%2FntR53%2F3Et4lmwxwE7L2SBUeZswz%2BLJ1QY6pgHOko0GRKFrVd1Jzjh%2B3ZmgH%2BkLXR248du8MDZ7kOKzN1m6MIb%2FjaKGwIfkEdmn4AIPtRkOB0eF7mp%2BOMb7cj0JtjednknQAgaZkjd6QGjRYu8sRdeRLFatZg2EoKcCAmniktPLROMfMzeBvPQ5ULgm7Tu9t12F%2BPRrLtfZqA0NgS84zf9CN9dJmeN5pcWn9pJF3w5AXJZEdWTlzpRyQxaSeIdEAvN6&X-Amz-Signature=04e73313db6b9ea12255c5a9e3429372bb179abd001f512b287e7baaca0db37f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
