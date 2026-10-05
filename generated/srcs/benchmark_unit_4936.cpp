#include "bench/fib.hpp"

// RE Benchmark TU 4936 of 20000 (depth=28, stamp="default")
namespace bench_tu_4936 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4936>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4936
