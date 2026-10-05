#include "bench/fib.hpp"

// RE Benchmark TU 4923 of 20000 (depth=28, stamp="default")
namespace bench_tu_4923 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4923>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4923
