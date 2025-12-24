template <typename TIterator, typename TValue>
TIterator find(TIterator begin, TIterator end, TValue value) {
    for (auto it = begin; it != end; ++it) {
        if (*it == value) return it;
    }
    return end;
}