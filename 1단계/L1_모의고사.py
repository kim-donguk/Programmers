def solution(answers):
    answer = []
    
    one_person = [1,2,3,4,5]
    two_person = [2,1,2,3,2,4,2,5]
    three_person = [3,3,1,1,2,2,4,4,5,5]
    
    count1 = 0
    count2 = 0
    count3 = 0
    
    for i in range(len(answers)):
        if(answers[i] == one_person[i % len(one_person)]):
            count1 = count1 + 1
        if(answers[i] == two_person[i % len(two_person)]):
            count2 = count2 + 1
        if(answers[i] == three_person[i % len(three_person)]):
            count3 = count3 + 1
    
    answer_count = [count1, count2, count3]
        
    for person, score in enumerate(answer_count):
        if score == max(answer_count):
            answer.append(person+1)
    
    return answer
