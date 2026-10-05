#include "bench/fib.hpp"

// RE Benchmark TU 15841 of 20000 (depth=28, stamp="default")
namespace bench_tu_15841 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15841>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15841
