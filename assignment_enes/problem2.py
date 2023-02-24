class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.front_ = None
        self.rear_ = None

    def empty(self):
        return self.front_ == None

    def push(self, data):
        if self.empty():
            self.front_ = Node(data)
            self.rear_ = self.front_
        else:
            self.rear_.next = Node(data)
            self.rear_ = self.rear_.next

    def pop(self):
        self.front_ = self.front_.next

    def front(self):
        return self.front_.data

    def rear(self):
        return self.rear_.data

    def print(self):
        temp = self.front_
        while temp != None:
            print(temp.data, "->", end=" ")
            temp = temp.next
        print("NULL")

def add_to_queue(q, num):
    temp_queue = Queue()
    added = False

    while not q.empty():
        current = q.front()
        q.pop()

        if not added and current > num:
            temp_queue.push(num)
            added = True

        temp_queue.push(current)

    if not added:
        temp_queue.push(num)

    return temp_queue

def main():
    q = Queue()
    q.push(4)
    q.push(7)
    q.push(20)
    q.push(40)
    q.print()

    q = add_to_queue(q, 6)
    q.print()

if __name__ == "__main__":
    main()
