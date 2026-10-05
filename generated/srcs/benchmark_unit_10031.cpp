#include "bench/fib.hpp"

// RE Benchmark TU 10031 of 20000 (depth=28, stamp="default")
namespace bench_tu_10031 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10031>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10031
