# test plan and test ouput

# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HLR1       |check the balance| initial deposit=2000|Your current available balance is 2000|Your current available balance is 2000|Requirement based |
|  HLR2       |Deposit Amount|1000 |Your current available bank balance is 3000|Your current available bank balance is 3000|Requirement based|
|  HLR3       |withdraw Amount|4000| Sorry, Insufficient balance | Sorry, Insufficient balance| Requirement based  |
|  HLR4       |withdraw Amount|500| Your current available bank balance is 2500 | Your current available bank balance is 2500| Requirement based  |
|  HHR5       |Entering Pin| 1234|Incorrect Pin|Incorrect Pin|Boundary based    |
|  HHR6       |Entering Pin| 8095|valid pin enter the choice|valid pin enter the choice|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  LLR1       |If user enters wrong ATM pin. | 1234| Invalid pin.| Invalid pin.|Requirement based |
|  LLR2       |If wrong choice is chosen| 6|Invalid choice|Exit|Scenario based    |
