int main()
{
    std::vector<int> v(7);

    for (int i = 0; i < 7; i++) {
        std::cin >> v.at(i);
    }

    auto min = v.at(0) ;
    for (std::size_t i = 0; i != v.size() - 1; i++) {
        if (min < v.at(i + 1)) {
            continue;
        } else {
            min = v.at(i + 1);
        }
    }

    std::cout << min;

}
