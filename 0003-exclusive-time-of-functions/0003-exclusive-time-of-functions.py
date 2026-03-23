def exclusiveTime(n, logs):
    res = [0] * n
    stack = []
    prev_time = 0

    for log in logs:
        fid, typ, ts = log.split(":")
        fid, ts = int(fid), int(ts)

        if typ == "start":
            if stack:
                res[stack[-1]] += ts - prev_time
            stack.append(fid)
            prev_time = ts
        else:  # "end"
            res[stack.pop()] += ts - prev_time + 1
            prev_time = ts + 1

    return res
