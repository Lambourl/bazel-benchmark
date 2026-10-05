#include "bench/fib.hpp"

// RE Benchmark TU 809 of 20000 (depth=28, stamp="default")
namespace bench_tu_809 {
constexpr unsigned long long result = ::bench::slow_fib<28, 809>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_809
