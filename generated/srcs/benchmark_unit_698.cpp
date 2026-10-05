#include "bench/fib.hpp"

// RE Benchmark TU 698 of 20000 (depth=28, stamp="default")
namespace bench_tu_698 {
constexpr unsigned long long result = ::bench::slow_fib<28, 698>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_698
