#include "bench/fib.hpp"

// RE Benchmark TU 174 of 20000 (depth=28, stamp="default")
namespace bench_tu_174 {
constexpr unsigned long long result = ::bench::slow_fib<28, 174>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_174
