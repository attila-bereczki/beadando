import multiprocessing

def halal():
    while True:
        x = 0
        for i in range(10_000_000):
            x += i * i

if __name__ == "__main__":
    processes = []
    for _ in range(multiprocessing.cpu_count()):
        p = multiprocessing.Process(target=halal)
        p.start()
        processes.append(p)