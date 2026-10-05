#include "bench/fib.hpp"

// RE Benchmark TU 18073 of 20000 (depth=28, stamp="default")
namespace bench_tu_18073 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18073>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18073
